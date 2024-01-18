#!/usr/bin/env python3

import json
import logging
import os
import socketserver
import threading
import time
from logging.handlers import RotatingFileHandler
from setproctitle import setproctitle


class ThreadedTCPRequestHandler(socketserver.BaseRequestHandler):
    def log(self, msg):
        remote_ip = self.client_address[0]
        if not remote_ip == '127.0.0.1':
            logging.info(f"{remote_ip}::{msg}")

    def recvline(self):
        buf = b""
        while not buf.endswith(b"\n"):
            buf += self.request.recv(1)
        return buf

    def send_msg(self, msg):
        jsonified = (json.dumps(msg) + '\n').encode()
        try:
            self.request.sendall(jsonified)
        except BrokenPipeError:
            pass

    def handle(self):
        self.log("connected")

        c = Challenge()
        max_recv_size = 1024
        if hasattr(c, 'max_payload_size'):
            max_recv_size = c.max_payload_size
        if hasattr(c, 'timeout_secs'):
            time_started = time.time()

        while True:
            if hasattr(c, 'timeout_secs') and time.time() > time_started + c.timeout_secs:
                msg = {"error": f"Out of time"}
                self.send_msg(msg)
                break

            if hasattr(c, 'no_prompt'):
                del c.no_prompt
                data = {}
            else:
                if hasattr(c, 'before_input'):
                    try:
                        self.request.sendall(c.before_input.encode())
                    except BrokenPipeError:
                        break
                    del c.before_input

                if hasattr(c, 'max_payload_size'):
                    try:
                        self.data = b""
                        while len(self.data) < max_recv_size:
                            chunk = self.request.recv(1024)
                            if not chunk:
                                break
                            self.data += chunk.strip()
                            if b"\n" in chunk:
                                break
                    except ConnectionResetError:
                        break
                else:
                    try:
                        self.data = self.request.recv(max_recv_size).strip()
                    except ConnectionResetError:
                        break
                if len(self.data) >= max_recv_size:
                    msg = {"error": f"You may send up to {max_recv_size} bytes per message."}
                    self.send_msg(msg)
                    break
                if self.data:
                    self.log(self.data)
                try:
                    data = json.loads(self.data)
                except json.decoder.JSONDecodeError as e:
                    if b"'" in self.data:
                        msg = {"error": "Invalid JSON. Remember to surround strings with double quotes rather than single quotes."}
                    else:
                        msg = {"error": "Invalid JSON"}
                    self.send_msg(msg)
                    break
            try:
                out = c.challenge(data)
                if hasattr(c, 'before_send'):
                    self.request.sendall(c.before_send.encode())
                    del c.before_send
                if isinstance(out, list):
                    for obj in out:
                        self.send_msg(obj)
                elif out is None:
                    pass
                else:
                    self.send_msg(out)
                if hasattr(c, 'exit'):
                    break
            except Exception as e:
                error = getattr(e, 'message', repr(e))
                msg = {"error": "Exception thrown", "exception": error}
                self.send_msg(msg)
                self.log(error)
                break


class ThreadedTCPServer(socketserver.ThreadingMixIn, socketserver.TCPServer):
    allow_reuse_address = True


def start_server(port=0):
    setproctitle(f"netcat {port}")
    if not os.path.exists('logs'):
        os.makedirs('logs')
    logging.basicConfig(
        handlers=[RotatingFileHandler(f'logs/{port}.log', maxBytes=50000000, backupCount=1)],
        level=logging.INFO,
        format=f'%(asctime)s::{port}::%(message)s',
    )
    with ThreadedTCPServer(('0.0.0.0', port), ThreadedTCPRequestHandler) as server:
        logging.info(f"Starting up on port {port}")
        server_thread = threading.Thread(target=server.serve_forever)
        server_thread.daemon = True
        server_thread.start()

        while True:
            if threading.active_count() > 75:
                logging.error("Too many active threads, dying")
                raise Exception()
            time.sleep(10)

        server_thread.join()
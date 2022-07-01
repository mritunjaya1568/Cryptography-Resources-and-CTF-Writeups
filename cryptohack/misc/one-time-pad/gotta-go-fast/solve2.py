import telnetlib
import json

"Because it's XOR you just have to send back the encrypted_flag so that it will decrypt it for you"

HOST = "socket.cryptohack.org"
PORT = 13372

tn = telnetlib.Telnet(HOST, PORT)

def readline():
    return tn.read_until(b"\n")

def json_recv():
    line = readline()
    return json.loads(line.decode())

def json_send(hsh):
    request = json.dumps(hsh).encode()
    tn.write(request)

print(readline())
option = "get_flag"
json_send({"option": option})
received = json_recv()

input = received["encrypted_flag"]

option = "encrypt_data"
json_send({"option": option,"input_data": input})
received = json_recv()

flag = received["encrypted_data"]
flag = bytes.fromhex(flag)
print(flag)
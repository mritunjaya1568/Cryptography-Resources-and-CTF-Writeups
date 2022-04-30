#!/usr/bin/env python3

from Crypto.Util.number import bytes_to_long, long_to_bytes
from utils import listener

FLAG = "crypto{?????????????????????????????}"
ADMIN_TOKEN = b"admin=True"


class Challenge():
    def __init__(self):
        self.before_input = "Watch out for the Blinding Light\n"

    def challenge(self, your_input):
        if 'option' not in your_input:
            return {"error": "You must send an option to this server"}

        elif your_input['option'] == 'get_pubkey':
            return {"N": hex(N), "e": hex(E) }

        elif your_input['option'] == 'sign':
            msg_b = bytes.fromhex(your_input['msg'])
            if ADMIN_TOKEN in msg_b:
                return {"error": "You cannot sign an admin token"}

            msg_i = bytes_to_long(msg_b)
            return {"msg": your_input['msg'], "signature": hex(pow(msg_i, D, N)) }

        elif your_input['option'] == 'verify':
            msg_b = bytes.fromhex(your_input['msg'])
            msg_i = bytes_to_long(msg_b)
            signature = int(your_input['signature'], 16)

            if msg_i < 0 or msg_i > N:
                # prevent attack where user submits admin token plus or minus N
                return {"error": "Invalid msg"}

            verified = pow(signature, E, N)
            if msg_i == verified:
                if long_to_bytes(msg_i) == ADMIN_TOKEN:
                    return {"response": FLAG}
                else:
                    return {"response": "Valid signature"}
            else:
                return {"response": "Invalid signature"}

        else:
            return {"error": "Invalid option"}


listener.start_server(port=13376)


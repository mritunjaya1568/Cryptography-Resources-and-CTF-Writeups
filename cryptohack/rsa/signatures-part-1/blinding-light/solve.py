from pwn import remote
import json
from Crypto.Util.number import *

def json_recv():
    line = r.recvline()
    return json.loads(line.decode())

def json_send(hsh):
    request = json.dumps(hsh).encode()
    r.sendline(request)


HOST = "socket.cryptohack.org"
PORT = 13376

r = remote(HOST,PORT)
print(r.recvline())


request = {
    "option":"get_pubkey"
}

json_send(request)
secret = json_recv()

N = int(secret["N"],16)
e = int(secret["e"],16)

ADMIN_TOKEN = b"admin=True"
token = bytes_to_long(ADMIN_TOKEN)
token = (pow(5,e,N)*token)%N

request2 = {
    "option":"sign",
    "msg":f"{hex(token)[2:]}"
}

json_send(request2)
secret = json_recv()

sign = int(secret["signature"],16)
print(sign)

admin_sign = (sign*pow(5,-1,N))%N

request3 = {
    "option":"verify",
    "msg": f"{ADMIN_TOKEN.hex()}",
    "signature":f"{hex(admin_sign)[2:]}"
}

json_send(request3)
secret = json_recv()

print(secret)


''' {'response': 'crypto{m4ll34b1l17y_c4n_b3_d4n63r0u5}'}
'''


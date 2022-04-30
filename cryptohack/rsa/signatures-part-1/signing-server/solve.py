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
PORT = 13374

r = remote(HOST,PORT)
print(r.recvline())

# request1 = {
# 	"option":"get_pubkey"
# }

# pub_key = r.json_send(request)

# n = int(pub_key["N"],16)
# e = int(pub_key["e"],16)

# print(n,e)

request2 = {
	"option":"get_secret"
}

json_send(request2)
secret = json_recv()["secret"]
print(secret)	


request3 = {
	"option":"sign",
	"msg": f"{secret}"
}

json_send(request3)
flag = json_recv()
flag = flag["signature"]
flag = int(str(flag),16)

flag = long_to_bytes(flag)
print(flag)


''' b"TODO: audit signing server to make sure that meddling hacker doesn't get hold of my secret flag: 
crypto{d0n7_516n_ju57_4ny7h1n6}"
'''



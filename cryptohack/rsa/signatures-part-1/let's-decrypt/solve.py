from pwn import remote
import json
from Crypto.Util.number import *
from pkcs1 import emsa_pkcs1_v15
import re


def json_recv():
    line = r.recvline()
    return json.loads(line.decode())

def json_send(hsh):
    request = json.dumps(hsh).encode()
    r.sendline(request)


HOST = "socket.cryptohack.org"
PORT = 13391

r = remote(HOST,PORT)
print(r.recvline())

request = {
	"option":"get_signature"
}

json_send(request)
sign = json_recv()["signature"]
sign = int(sign,16)


e2 = 1
MSG2 = 'I am Mallory and I own CryptoHack.org'
z2 = emsa_pkcs1_v15.encode(MSG2.encode(), 256)
z2 = bytes_to_long(z2)
 

print(sign)
print(z2)

n2 = sign - z2


request2 = {
	"option":"verify",
	"N":f"{hex(n2)[2:]}",
	"e":f"{hex(e2)[2:]}",
	"msg":f"{MSG2}"
}

json_send(request2)
secret = json_recv()
print(secret)

''' {'msg': "Congratulations, here's a secret: crypto{dupl1c4t3_s1gn4tur3_k3y_s3l3ct10n}"}
'''

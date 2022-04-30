import hashlib
from pwn import *
import json

IP = "socket.cryptohack.org"
PORT = 13389

def readline():
    return s.recvline()

def json_recv():
    line = readline()
    return json.loads(line.decode())

def json_send(hsh):
    request = json.dumps(hsh).encode()
    s.sendline(request)

s = remote(IP, PORT)
print("Connected")

str1 = s.recvline()
print(str1)

hex1 = "4dc968ff0ee35c209572d4777b721587d36fa7b21bdc56b74a3dc0783e7b9518afbfa200a8284bf36e8e4b55b35f427593d849676da0d1555d8360fb5f07fea2"
hex2 = "4dc968ff0ee35c209572d4777b721587d36fa7b21bdc56b74a3dc0783e7b9518afbfa202a8284bf36e8e4b55b35f427593d849676da0d1d55d8360fb5f07fea2"

document1 = {"document":hex1}
document2 = {"document":hex2}

json_send(document1)

print(readline())

json_send(document2)

print(readline())

'''b'{"error": "Document system crash, leaking flag: crypto{m0re_th4n_ju5t_p1g30nh0le_pr1nc1ple}"}\n'
'''

# flag = crypto{m0re_th4n_ju5t_p1g30nh0le_pr1nc1ple}


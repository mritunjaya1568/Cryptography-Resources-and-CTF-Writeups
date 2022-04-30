

# This file was *autogenerated* from the file solve.sage
from sage.all_cmdline import *   # import sage library

_sage_const_13375 = Integer(13375); _sage_const_1750572331061789800727934052618831 = Integer(1750572331061789800727934052618831); _sage_const_2 = Integer(2); _sage_const_120 = Integer(120); _sage_const_3 = Integer(3)
from Crypto.Util.number import *
from pwn import *
import json
from sage.all import *

def json_recv():
    line = r.recvline()
    return json.loads(line.decode())

def json_send(hsh):
    request = json.dumps(hsh).encode()
    r.sendline(request)


HOST = "socket.cryptohack.org"
PORT = _sage_const_13375 

r = remote(HOST,PORT)
print(r.recvline())
val = _sage_const_1750572331061789800727934052618831 
print(val)

# 1st solution 


# val + pow(16,30)*f + pow(16,32)*g+pow(16,34)*h
# val mod 16^30 = z^3 mod 16^30
# so use sage and do nth_root under modulo 16^30


z = Mod(val,_sage_const_2 **_sage_const_120 ).nth_root(_sage_const_3 )
print(z)

request = {
	"option":"vote",
	"vote":f"{hex(z)[_sage_const_2 :]}"
}

json_send(request)
secret = json_recv()
print(secret)


# 2nd solution brute force but its not working but still good method

'''
x=b'\x00VOTE FOR PEDRO'
from itertools import product
for c in product(range(256),repeat=8):
    t=bytes(c)+x
    temp = bytes_to_long(t)
    if iroot(temp,3)[1]:
        print(r,c)
        break
    print(t,end='\r')
'''





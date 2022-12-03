from Crypto.Util.number import *
from pwn import *

HOST = 'socket.cryptohack.org'
PORT = 13386 

def pgcd(f,g):
	while g != 0:
		f,g = g, f%g
	return f.monic()

FLAG = b'crypto{???????????????????????????}'

flag_len = len(FLAG) # 35

r = remote(HOST,PORT)
print(r.recvline())

r.sendline('{"option":"get_flag"}')
dect1 = eval(r.clean(2).decode())

ct1 = int(dect1["encrypted_flag"])
n1 = int(dect1["modulus"])
a1,b1 = dect1["padding"]
a1 = int(a1)
b1 = int(b1)
print("all values receieved")
print(ct1,n1,a1,b1)

r.sendline('{"option":"get_flag"}')
dect2 = eval(r.clean(2).decode())

ct2 = int(dect2["encrypted_flag"])
n2 = int(dect2["modulus"])
a2,b2 = dect2["padding"]
a2 = int(a2)
b2 = int(b2)
print("all values received")
print(ct2,n2,a2,b2)

assert n1 == n2
P.<x> = PolynomialRing(Zmod(n1))
f1 = (a1 * x + b1)^ 11 - ct1
f2 = (a2 * x + b2)^ 11 - ct2

flag = -pgcd(f1,f2).coefficients()[0]
print(long_to_bytes(int(flag)))

## flag = b'crypto{linear_padding_isnt_padding}'

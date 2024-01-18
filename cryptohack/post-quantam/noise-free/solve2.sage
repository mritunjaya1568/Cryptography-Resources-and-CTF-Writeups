### This method is with Gaussian Elimination

from pwn import *
from Crypto.Util.number import *
import json

def recv_row(r,message):
	req = json.dumps({"option":"encrypt","message":int(message)})
	r.sendline(req)
	dect = eval(r.recvline().decode().strip())
	A = eval(dect['A'])
	b = int(dect['b'])
	return A,b

def recv_flag(r,index):
	req = json.dumps({"option":"get_flag","index":int(index)})
	r.sendline(req)
	dect = eval(r.recvline().decode().strip())
	A = eval(dect['A'])
	b = int(dect['b'])
	return A,b

HOST = 'socket.cryptohack.org'
PORT = 13411

FLAG = b"crypto{????????????????????????}"
flag_len = len(FLAG)

# dimension
n = 64
# plaintext modulus
p = 257
# ciphertext modulus
q = 0x10001

r = remote(HOST, PORT)
print("Connected")
print(r.recvline())

lest = []
out = []

for i in range(n):
	A,b = recv_row(r,97)
	lest.append(A)
	out.append(b - 97)


M = matrix(GF(q),lest)
out = column_matrix(GF(q),out)

M = M.augment(out, subdivide = True)
S = M.rref().columns()[-1]

flag = ''
for i in range(flag_len):
	A,b = recv_flag(r,i)
	flag_chr = int(b - vector(GF(q),A) * S) % p
	flag += chr(int(flag_chr))

print(flag)

''' crypto{linear_algebra_is_useful} '''

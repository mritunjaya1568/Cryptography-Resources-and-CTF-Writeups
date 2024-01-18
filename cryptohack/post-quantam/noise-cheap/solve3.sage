from pwn import *
from Crypto.Util.number import *
import json
from tqdm import tqdm

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

HOST = 'localhost'
# HOST = 'socket.cryptohack.org'
PORT = 13413

FLAG = b"crypto{????????????????????????}"
flag_len = len(FLAG)

# dimension
n = 64
n_equations = 64
# plaintext modulus
p = 257
# ciphertext modulus
q = 1048583

r = remote(HOST, PORT)
print("Connected")
print(r.recvline())

lest = []
out = []

for i in tqdm(range(n)):
	A,b = recv_row(r,0)
	lest.append(A)
	out.append(b)

R = PolynomialRing(GF(q),s,64)
s = R.gens()
pol1 = [s[i]*A[i] for i in range(n)]



# M = matrix(GF(q),lest)
# out = column_matrix(GF(q),out)

# M = M.augment(out, subdivide = True)
# S = M.rref().columns()[-1]

# flag = ''
# for i in range(flag_len):
# 	A,b = recv_flag(r,i)
# 	flag_chr = int(b - vector(GF(q),A) * S) % p
# 	flag += chr(int(flag_chr))

# print(flag)
from Crypto.Util.number import *
import hashlib
from pwn import *

def gen_pubkey(secret: bytes, hasher=hashlib.sha512) -> list:
    def hash(m): return hasher(m).digest()
    state = hash(secret)
    pubkey = []
    for _ in range(len(hash(b'0')) * 4):
        pubkey.append(int.from_bytes(state, 'big'))
        state = hash(state)
    return pubkey

HOST = 'challs.ctf.sekai.team'
PORT = 3001

mat = []
lest = []

for i in range(2):
	r = remote(HOST,PORT)
	secret = r.recvline().strip().decode()
	secret = bytes.fromhex(secret)
	# print(secret)

	lest2 = r.recvline().strip().decode()
	lest2 = eval(lest2)

	A = gen_pubkey(secret, hashlib.sha256)
	for index,row in enumerate(A):
		row1 = []
		for boolvar in bin(row)[2:].zfill(256):
			if boolvar == '1':
				row1.append(1)
			else:
				row1.append(0)
		assert len(row1) == 256
		mat = mat + [row1]
		lest3 = []
		for lucky in range(len(lest2)):
			lest3.append(lest2[lucky][index])
		lest.append(lest3)



# 256 * 256 
mat = Matrix(ZZ,mat)
if mat.det() == 0:
	print("Matrix is not invertible and you cant find inverse")
	exit(1)

assert mat.det() != 0

# problem is here only -> it should be 256 * 1 not 1 * 256 which sage takes by default
lest = Matrix(ZZ,256,3,lest)
Z = mat.inverse() * lest

string = ""

for column in range(Z.ncols()):
	for row in range(Z.nrows()):
		string += str(Z[row,column])

string = int(string,2)
string = long_to_bytes(string)

print(string)

''' b'SEKAI{w3ll_1_gu355_y0u_c4n_4lw4y5_4sk_f0r_m0r3_3qu4t10n5_wh3n_n0_0n3s_l00k1ng}\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00'
'''
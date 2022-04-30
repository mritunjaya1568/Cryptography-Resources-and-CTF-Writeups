from Crypto.Cipher import AES
from pwn import *


# HOST = "gc1.eng.run"
# PORT = 30668


# r = remote(HOST, PORT)

# lest = r.recvlines(4)
# print(lest)
# ct = lest[2]



def decrypt(ct):
	iv = ct[0:32]
	ct = ct[32:]
	ct = bytes.fromhex(ct)
	cy = b'\x01'*len(ct)
	ct = xor(ct,cy)
	ct = iv + ct.hex()
	print(ct)


decrypt('3e7b3da8db9ef2761f3a9cb5acea5fb7fdbcc8bf0d9f906f28cd5b4f027b1ae2a01d37c0b8db18ac6d74d09c9fbe03dc14408fee')

val = '686f6275677a34786c6c32757330625e426871693273345e3573325e323534782020207c'

def get_flag(ct):
	ct = bytes.fromhex(ct)
	cy = b'\x01'*len(ct)
	ct = xor(ct,cy)
	print(ct)

get_flag(val)

'''inctf{5ymm3tr1c_Ciph3r5_4r3_345y!!!}'''
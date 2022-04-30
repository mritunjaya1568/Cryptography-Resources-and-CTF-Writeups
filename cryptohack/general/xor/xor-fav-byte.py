#!/usr/bin/python3
from pwn import *
from Crypto.Util.number import long_to_bytes
a="73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d"
a_bytes=bytes.fromhex(a)
print(a_bytes)
for i in range(128):
	print(xor(a_bytes,long_to_bytes(i)).decode())


#here is the flag-crypto{0x10_15_my_f4v0ur173_by7e}

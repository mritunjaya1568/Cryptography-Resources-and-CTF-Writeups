#!/usr/bin/python3
import binascii
string=binascii.unhexlify(b"73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d").decode()

for i in range(256):
	f="".join(chr(ord(j)^i) for j in string)
	if f.startswith("crypto"):
		print(f)
# it will directly print out the flag,we dont need to find it out crypto{0x10_15_my_f4v0ur173_by7e}


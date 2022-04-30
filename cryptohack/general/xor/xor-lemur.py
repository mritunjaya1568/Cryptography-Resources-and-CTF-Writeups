#!/usr/bin/python3
from pwn import xor
from Crypto.Util.number import long_to_bytes,bytes_to_long
f1=open("lemur.png","rb")
f2=open("flag.png","rb")
#print(xor(f1.read(),f2.read()))s
	#print(f3.read())
#print(f2.read())
#!/usr/bin/python3
from Crypto.Util.number import long_to_bytes,bytes_to_long
from pwn import *
import string

r = remote('challenge.ctf.games',31921)
vals = []

def send(msg):
	r.sendline(str(msg).encode())

def recvmultiple(x):
	for i in range(x):
		print(r.recvline())

alpha = ""
alpha+= string.ascii_lowercase
alpha+= string.digits
alpha+="{}"

print(alpha)


print(r.recvline())

ct = r.recvline().decode().strip().split(' ')[-1]
print(ct)


recvmultiple(3)
send('a')
recvmultiple(4)

flag = ""

for i in range(0,75,2):
	char = ct[i:i+2]
	for j in range(33,126):
		print(f"{i} {j}")
		val = chr(j)
		r.sendline(f"{val}")
		r.recvline()
		fake = r.recvline().decode().strip().split(' ')[-1]
		recvmultiple(2)
		if(char == fake[i:i+2]):
			print(chr(j))
			flag+= chr(j)
			break

print(flag)



'''flag = flag{9276cdb76a3dd6b1f523209cd9c0a11b}'''






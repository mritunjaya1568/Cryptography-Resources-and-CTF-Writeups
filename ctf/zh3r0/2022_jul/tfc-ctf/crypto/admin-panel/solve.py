from pwn import *
import json

# nc 01.linux.challenges.ctf.thefewchosen.com 52520

HOST = "01.linux.challenges.ctf.thefewchosen.com"
PORT = "52520"

r = remote(HOST, PORT)

for i in range(4):
	print(r.recvline())

print(r.recvuntil(b"> "))
r.sendline("2")

ct = b'\x00' * 32
ct = ct.hex()

print(r.recvuntil(b"> "))
r.sendline(str(ct))
print(r.recvline())


for i in range(256):
	print(i)
	password = chr(i) * 16
	password = password.encode().hex()
	print(r.recvline())
	print(r.recvline())
	print(r.recvline())
	print(r.recvline())
	print(r.recvuntil(b'> '))
	r.sendline("1")
	print(r.recvuntil(b"> "))
	r.sendline(password)
	print(r.recvline())

''' TFCCTF{l0g0n_z3r0_w1th_3xtr4_st3ps!} '''



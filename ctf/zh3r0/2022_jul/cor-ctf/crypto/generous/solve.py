import math
from Crypto.Util.number import *
from gmpy2 import iroot
from pwn import *

def send(msg):
	r.recvuntil(b"> ")
	r.sendline(str(msg))

def recvlsboracle(n,ct):
	l = 0
	h = n
	# pow2 = pow(2,e,n)
	ctdash = ct
	count = 0
	while l<h:
		count += 1
		mid = (l+h)//2
		ctdash = (ctdash*ctdash)%n
		send(ctdash)
		bit = int(r.recvline().decode().split(' ')[-1])
		print(count)
		if bit == 0:
			h = mid
		else :
			l =mid

	print(l,h)


HOST = "be.ax"
PORT = 31244

r = remote(HOST,PORT)
print("connected")


print(r.recvline())
n = r.recvline().decode().strip().split()[-1]
n = int(n)
print(n)
g = r.recvline().decode().strip().split()[-1]
print(g)
h = r.recvline().decode().strip().split()[-1]
print(h)
ct = r.recvline().decode().strip().split()[-1]
ct = int(ct)
print(ct)


recvlsboracle(n,ct)


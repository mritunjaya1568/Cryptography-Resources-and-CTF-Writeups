import time
from Crypto.Util.number import *
from pwn import *
import math
import gmpy2

HOST = "be.ax"
PORT = 31124

def functor(c1,c2,e1,e2,n):
	if e1 == e2:
		return
	val = math.gcd(e1,e2)
	c1 = int(c1,16)
	c2 = int(c2,16)
	ct = (pow(c1,inverse(e1,e2),n) * pow(c2,inverse(e2,e1),n))%n
	m = int(gmpy2.iroot(ct, val)[0])
	if b'corctf' in long_to_bytes(m):
		print(long_to_bytes(m))	


def find_e():
	lest = []
	for i in range(20):
		lest.append(random.randint(1,n))
	return lest


r = remote(HOST , PORT)
print("connected")

seed = int(time.time())

print(r.recvline())
n = r.recvline().strip().decode().split()[-1]
n = int(n)

r.recvlines(5)

print(r.recvuntil(b': '))
r.sendline(b'1')

ct1 = r.recvline().decode().strip().split()[-1]

r.recvlines(5)

print(r.recvuntil(b': '))
r.sendline(b'1')

ct2 = r.recvline().decode().strip().split()[-1]


for k in range(10):
	random.seed(seed-k)
	e1 = find_e()
	for i in e1:
		for j in e1:
			functor(ct1,ct2,i,j,n)

for k in range(10):
	random.seed(seed+k)
	e1 = find_e()
	for i in e1:
		for j in e1:
			functor(ct1,ct2,i,j,n)





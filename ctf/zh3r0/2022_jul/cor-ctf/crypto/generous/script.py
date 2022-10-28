#!/usr/local/bin/python
from random import randrange
import math
from Crypto.Util.number import *
from gmpy2 import iroot,next_prime

with open("flag.txt", "rb") as f:
	flag = f.read().strip()

def gen_keypair():
	p, q = getPrime(512), getPrime(512)
	n = (p**2) * q
	while True:
		g = randrange(2, n)
		if pow(g, p-1, p**2) != 1:
			break
	h = pow(g, n, n)
	return (n, g, h), (g, p, q)

def encrypt(pubkey, m):
	n, g, h = pubkey
	r = randrange(1, n)
	c = pow(g, m, n) * pow(h, r, n) % n
	return c

def decrypt(privkey, c):
	g, p, q = privkey
	a = (pow(c, p-1, p**2) - 1) // p
	b = (pow(g, p-1, p**2) - 1) // p
	m = a * inverse(b, p) % p
	return m

def oracle(privkey, c):
	m = decrypt(privkey, c)
	return m % 2

pub, priv = gen_keypair()
n, g, h = pub
g, p, q = priv

print(f"Public Key:\n{n = }\n{g = }\n{h = }")
ct = encrypt(pub, bytes_to_long(flag))

# print(f"Encrypted Flag: {encrypt(pub, bytes_to_long(flag))}")

# while True:
# 	inp = int(input("Enter ciphertext> "))
# 	print(f"Oracle result: {oracle(priv, inp)}")


def recvlsboracle(n,ct,p):
	l = 0
	h = p
	# pow2 = pow(2,e,n)
	ctdash = ct
	count = 0
	while l<h:
		count += 1
		mid = (l+h)//2
		ctdash = (ctdash*ctdash)%n
		# send(ctdash)
		# bit = int(r.recvline().decode().split(' ')[-1])
		bit = oracle(priv,ctdash)
		# print(count)
		if bit == 0:
			h = mid
		else :
			l =mid
		if b'manmohan' in long_to_bytes(l) or b'manmohan' in long_to_bytes(h):
			print(long_to_bytes(l),long_to_bytes(h))

	print(l,h)
	print(long_to_bytes(l),long_to_bytes(h))

# recvlsboracle(p,ct)

flag = bytes_to_long(flag)
ct = encrypt(pub, flag)


guess = int(iroot(n,2)[0])//(2**256)
print(guess , p)


recvlsboracle(n,ct,p)




# flag2 = flag
# ct2 = ct
# for i in range(2000):
# 	ct2 = (ct2 * ct2)%n
# 	flag2 = (2 * flag2)%p
# 	assert flag2 == decrypt(priv,ct2)
# 	print(flag2.bit_length())
# 	print(f"yes , {i} ")




# n  = p * p * q

# sqrt(n) = p * sqrt(q) # 2^512 * 2^256 = 2 ^700 # 123 * 2 = 246 # p * p * q

# sqrt(n)
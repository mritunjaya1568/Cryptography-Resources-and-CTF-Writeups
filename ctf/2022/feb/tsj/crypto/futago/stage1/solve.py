from Crypto.PublicKey import RSA
from Crypto.Util.number import *

with open("flag.txt.key1.enc","rb") as f1:
	ct1 = f1.read()

with open("flag.txt.key2.enc","rb") as f1:
	ct2 = f1.read()

with open("key1.pub","rb") as f1:
	key1 = RSA.importKey(f1.read())

with open("key2.pub","rb") as f1:
	key2 = RSA.importKey(f1.read())

p2 = GCD(key1.n, key2.n)


# print(key1.n)
# print(key1.e)

# print(key2.n)
# print(key2.e)

p1 = key1.n // p2
q1 = key2.n // p2

print(isPrime(p1))
print(isPrime(q1))

def functor(p,q,ct):
	n = p*q
	phi = (p-1)*(q-1)
	d = inverse(65537,phi)
	flag = pow(bytes_to_long(ct),d,n)
	print(long_to_bytes(flag))

functor(p1,p2,ct1)

functor(q1,p2,ct2)


# flag1 = TSJ{just_several_common_rsa_tricks_combined_together_


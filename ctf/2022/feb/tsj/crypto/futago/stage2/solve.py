from Crypto.PublicKey import RSA
from Crypto.Util.number import *

with open("flag.txt.key1.enc","rb") as f1:
	ct1 = f1.read()
	print(bytes_to_long(ct1))

with open("flag.txt.key2.enc","rb") as f1:
	ct2 = f1.read()
	print(bytes_to_long(ct2))

with open("key1.pub","rb") as f1:
	key1 = RSA.importKey(f1.read())
	print(key1.n,key1.e,sep = "\n")

with open("key2.pub","rb") as f1:
	key2 = RSA.importKey(f1.read())
	print(key2.n,key2.e,sep = "\n")








def functor(p,q,ct):
	n = p*q
	phi = (p-1)*(q-1)
	d = inverse(65537,phi)
	flag = pow(bytes_to_long(ct),d,n)
	print(long_to_bytes(flag))



# flag2 = b'in_a_single_guessy(?)_challenge_'


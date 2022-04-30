from Crypto.Cipher import PKCS1_OAEP
from Crypto.PublicKey import RSA
from Crypto.Util.number import *

lest_n = []
lest_e = []
lest_ct = []

for i in range(1,51):
	string1 = f"{i}.pem"
	string2 = f"{i}.ciphertext"
	with open(string1,'rb') as f:
		key = f.read()
		key = RSA.import_key(key)
		lest_n.append(key.n)
		lest_e.append(key.e)
	f.close()
	with open(string2,'r') as f:
		ct = f.read()
		lest_ct.append(ct)
	f.close()


for i in range(0,len(lest_n)-1):
	for j in range(i+1,len(lest_n)):
		if GCD(lest_n[i],lest_n[j]) != 1:
			loc1 = i
			loc2 = j

print(loc1,loc2)

p = GCD(lest_n[loc1],lest_n[loc2])
print(p)


q1 = lest_n[loc1]//p
q2 = lest_n[loc2]//p


print(p*q1)
print(p*q2)


assert p*q1 == lest_n[loc1]
assert p*q2 == lest_n[loc2]

d1 = inverse(lest_e[loc1],p*q1-p-q1+1)
d2 = inverse(lest_e[loc2],p*q2-p-q2+1)

key1 = RSA.construct((p*q1,lest_e[loc1],d1))
key2 = RSA.construct((p*q2,lest_e[loc2],d2))

ct1 = lest_ct[loc1]
ct2 = lest_ct[loc2]

cipher1 = PKCS1_OAEP.new(key1)
cipher2 = PKCS1_OAEP.new(key2)

flag1 = cipher1.decrypt(bytes.fromhex(ct1))
flag2 = cipher2.decrypt(bytes.fromhex(ct2))

print(flag1)
print(flag2)

''' b"crypto{3ucl1d_w0uld_b3_pr0ud} If you haven't already, check out https://eprint.iacr.org/2012/064.pdf"
b'BA4DPD6O5DNL3CHIYRIW3Q48XJ2XMS8I02BYX7WNUJNGF1QLU66DT8RAU8B'
 '''






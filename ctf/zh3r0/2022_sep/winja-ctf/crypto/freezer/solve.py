from Crypto.Util.number import *
from Crypto.PublicKey import RSA

f = open("enc.data","rb")
ct = f.read()
# for a in ct:
# 	print(a)


p = 5
q = 13

n = p * q
phi = (p-1) * (q-1)

lest = b""
for e in range(3,48,2):
	d = inverse(e,phi)
	for ch in ct:
		lest += long_to_bytes(pow(ch,d,n))
	# print(lest)

if b"flag" in lest:
	print("yes")

# with open("shit","wb") as f2:
# 	f2.write(lest)



# for a in ct:
	

# for e in range(3,48,2):
# 	try:
# 		d = inverse(e,phi)
# 		key = RSA.construct((n,e,d))
# 		print(key.decrypt(ct))
# 	except:
# 		pass

# for e in range(3,48,2):
# 	try:
# 		for a 
# 	except:
# 		pass
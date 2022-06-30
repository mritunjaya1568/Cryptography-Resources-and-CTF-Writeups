from Crypto.Util.number import *
import hashlib


def functor(x):
	return bytes_to_long(hashlib.sha256(long_to_bytes(x)).digest())


# for i in range(1, 100):
# 	z = functor(z)
# 	if z > p:
# 		print("bigger")

PRIME = 77793805322526801978326005188088213205424384389488111175220421173086192558047

x1 = 105622578433921694608307153620094961853014843078655463551374559727541051964080
y1 = 25953768581962402292961757951905849014581503184926092726593265745485300657424

x2 = functor(x1)

secret = (y1 - x1*x1 - x2*x1*x1)%PRIME

print(long_to_bytes(secret))


''' flag = crypto{fr46m3n73d_b4ckup_vuln?} '''

''' only possible leak in which we can recover the full flag is the case when x1 = S1 
so that the rest of the hashes can be calculated according to it , otherwise there is
no possibility of calculating the previous sha256 hashes '''

 

from gmpy2 import iroot
from Crypto.Util.number import *

lest = []

with open("jb.txt","r") as f:
	for val in f.readlines():
		if val.strip() == "":
			continue
		lest.append(val.strip())

print(lest)

for x in lest:
	x = int(x)
	born = iroot(x,4)
	if born[1] == True:
		print(long_to_bytes(born[0]).decode())


# flag = VishwaCTF{c4yp70gr2phy_1s_n07_e25y}


from Crypto.Util.number import *
from pwn import *
import random

with open("flag.enc","rb") as f:
	ct = f.read()

print(ct,len(ct))

now = xor(ct,b'B')[-18:]
print(now , len(now))

random.seed(now)

key = [random.randrange(256) for i in range(43)]

message = [c^k for (c,k) in zip(ct[:43],key)]
print(message)

from itertools import permutations

def inv_box(lest):
    out1 = []
    out2 = []
    out = []
    for i,j in enumerate(lest):
        out1.append(i)
        out2.append(j)
    for val in sorted(zip(out2,out1),key = lambda x: x[0]):
        out.append(val[1])
    return out

def decrypt_stage_one(message, lest):
	msg2 = []
	for i in range(len(message)):
		msg2.append(message[lest[i]])
	return msg2


for a in permutations(range(8)):
	res = []
	for j in list(a):
		for val in range(j,43,8):
			res.append(val)

	print(res)
	res = inv_box(res)
	print(res)
	
	ans = []
	for i in message:
		ans.append(i)

	for _ in range(42):
		ans = decrypt_stage_one(ans, res)


	flag = "".join(chr(k) for k in ans)
	if "SEKAI" in flag:
		print(flag)
		break
	if "sekai" in flag:
		print(flag)
		break

'''  SEKAI{T1m3_15_pr3C10u5_s0_Enj0y_ur_L1F5!!!}
 '''



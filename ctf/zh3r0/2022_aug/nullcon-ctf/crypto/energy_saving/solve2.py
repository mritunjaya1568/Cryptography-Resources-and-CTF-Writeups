from Crypto.Util.number import *
from math import log2

d = 1541111950826012932818579917878115126891515189026461632309297706194099868429854707691081039238166336538765649605121690421278157704079519667964225882373835268572210132969514200652515806070417542358288870470825376486211803610904321939871571621034754297583265143917317205436069844507707418920641432285502834503074152732414055128592923014277151376748376274385713023781739768580201137449799263309469494028862323073902193471157524645576410306515325631842834325277276854799886178480595612297844929470119630717050537040693061171289159913780666851216952647663392292235756345159690805601196136527674544011018988336791940912417

s = 0

for i in range(0,1401):
	lest.append(2**i)

count = 1023
d = d - 2**1023

dect2 = []

def functor(ct,val):
	dect = []
	x = 2 ** val
	while True:
		if ct//x != 0:
			dect.append(val)
			ct = ct % x
			val -= 1
			x = x//2
			if ct == 0:
				break
		else:
			val -= 1
			x = x//2
	return dect


ct = d
val = int(log2(d)) + 1

dect2 = functor(ct,val)
dect2 = dect2[::-1]

print(dect2, len(dect2),sum(dect2))


lest = [1]
curr = 1
count = 0
dect2.pop(0)

for i in dect2:
	val = i
	while val != 0:
		for j in lest[::-1]:
			if j <= val:
				val = val - j
				curr += j
				lest.append(curr)
				count += 1
				break

print(count) # 3254


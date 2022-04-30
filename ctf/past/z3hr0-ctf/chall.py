#!/usr/bin/env python
import random
# import untwister
lest=[]
for i in range(624):
	lest.append(random.random())
with open("gar.txt","w") as f:
	for i in lest:
		f.write("%s\n" % i)
# if k in lest: 
# 	print("true")
# else:
# 	print("false")
# for i in range(864000):
# 	random.seed(i)
# 	if random.random()==lest[0]:
# 		print(f"seed={i}")
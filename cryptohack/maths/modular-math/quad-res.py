#!/usr/bin/python3
p=29
lest=[]
dect={}
ints = [14, 6, 11]
for i in range(p):
	if i**2%p==5:
		print(i)
	else:
		print(f"{i} is not the answer")
for i in range(p):
	#lest.append(i**2%p)
	#dect[i**2%p]=i
	dect.setdefault(i**2%p,[])
for i in range(p):
	dect[i**2%p].append(i)
for i in ints:
	if i in dect.keys():
		print(i,dect[i],sep=":")
print(dect)


import os
print(os.getcwd())
lest=[]
with open('./hackers.txt','r') as file:
	for line in file:
		for word in line.split():
			lest.append(word)
print(len(lest))
lest2=[4661,5099,13243,11578,14382,734,14024,10621,14382,2,3383,8702,6087,10621,7417,14382,12352,615,1208,4246,4657,9975,7203,2658,770,4,10621,8702,6125,980,9522,2659,14784,7203,8701,38]
print(len(lest2))
for j in lest2:
	print(lest[j-1][0])
string="".join(lest[j+1][0] for j in lest2)
print(string)

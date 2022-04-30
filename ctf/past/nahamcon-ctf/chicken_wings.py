import os
print(os.getcwd())
lest=[]
with open('./chicken_wings','r') as file:
	for line in file:
		for i in line:
			lest.append(i)
print(len(lest))


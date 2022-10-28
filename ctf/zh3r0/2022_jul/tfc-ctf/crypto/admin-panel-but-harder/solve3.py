import random
from tqdm import tqdm

lest = []

f = open("nums.txt",'w')


for i in range(624):
	lest.append(random.getrandbits(32))
	f.write(str(lest[-1]))

f.close()
print(random.getrandbits(32))

# for i in tqdm(range(1<<32)):
# 	random.seed(i)
# 	for j in range(624):
# 		if random.getrandbits(32) != lest[j]:
# 			break
# 		if j == 623:
# 			print(f"seed is {i}")


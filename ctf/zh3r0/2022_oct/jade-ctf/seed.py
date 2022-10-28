import random

for i in range(10000000):
	random.seed(i)
	count = 0
	for j in range(32):
		x = random.randint(0,255)
		if x%2 == 0:
			count += 1

	if count == 32:
		print("got the seed",i)
		break
	print("nothing found for ",i)
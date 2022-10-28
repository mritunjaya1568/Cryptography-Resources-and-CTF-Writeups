import random

def rand_int(seed):
	random.seed(seed)
	return random.randint(0,255)

def rand_bit(seed):
	random.seed(seed)
	r = random.getrandbits(9)
	while r >= 256:
		r = random.getrandbits(9)
	return r


for i in range(1,100000):
	print(i)
	assert rand_int(i) == rand_bit(i)
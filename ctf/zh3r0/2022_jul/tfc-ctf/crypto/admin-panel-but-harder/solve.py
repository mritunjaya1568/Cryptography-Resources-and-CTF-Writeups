import random, time
from randcrack import RandCrack
from Crypto.Util.number import *

# random.seed(time.time())

rc = RandCrack()


# for i in range(78):
# 	string = random.randbytes(32)
# 	for i in range(8):
# 		val = string[:4]
# 		string = string[4:]
# 		rc.submit(bytes_to_long(val))
		
	# Could be filled with random.randint(0,4294967294) or random.randrange(0,4294967294)

# print("Random result: {}\nCracker result: {}"
# 	.format(random.randrange(0, 4294967295), rc.predict_randrange(0, 4294967295)))

for i in range(624):
	rc.submit(random.getrandbits(32 * 8))

print(random.getrandbits(32), rc.predict_getrandbits(32))



# seed = 1234
# print(random.getrandbits(32 * 8))

# seed = 1234
# print(bytes_to_long(random.randbytes(32)))

# seed = 1234
# print(random.getrandbits(32) * 8)


def functor(byte):
	sed = 1234
	print(long_to_bytes(random.getrandbits(8 * byte)))
	sed = 1234
	print(random.randbytes(byte))



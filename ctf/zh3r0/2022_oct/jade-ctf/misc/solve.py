import random, time
from randcrack import RandCrack

seed = int(time.time())
random.seed(seed)
print(seed)


rc = RandCrack()

for i in range(2496):
	print(i)
	rc.submit(random.randint(0,255))
	# Could be filled with random.randint(0,4294967294) or random.randrange(0,4294967294)

print("Random result: {}\nCracker result: {}"
	.format(random.randint(0, 255), rc.predict_randint(0, 255)))



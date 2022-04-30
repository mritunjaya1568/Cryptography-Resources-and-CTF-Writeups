from Crypto.Util.number import *

lest = [588, 665, 216, 113, 642, 4, 836, 114, 851, 492, 819, 237]
primes =[]
for i in range(len(lest)-3):
	primes.append(lest[i]*lest[i+3]-lest[i+1]*lest[i+2])
prime = primes[0]
for i in range(1,len(primes)):
	prime = GCD(prime , primes[i])
print(prime)

xmodp=(lest[1]*inverse(lest[0],prime))%prime
print(xmodp)

'''flag = crypto{919,209}'''
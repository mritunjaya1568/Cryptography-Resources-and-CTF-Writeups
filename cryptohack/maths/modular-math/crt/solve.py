# 1st solution in tablet- check out in cryptohack section 

#2nd solution
from Crypto.Util.number import *

def crt(rem,primes):
	prod=1
	for i in primes:
		prod*=i
	total=0
	for i in range(len(primes)):
		total+=rem[i]*(prod//primes[i])*inverse(prod//primes[i],primes[i])
	return total%prod


rem = [2,3,5]

primes = [5,11,17]

print(crt(rem,primes))

#flag = 872


#3rd solution

# sage solution

'''sage: res = [2,3,5]
sage: primes = [5,11,17]
sage: crt(res,primes)
872
'''

# sage 

'''sage: lest = [1,2,3,4]
sage: lest
[1, 2, 3, 4]
sage: prod(lest)
24
sage: sum(lest)
10
'''





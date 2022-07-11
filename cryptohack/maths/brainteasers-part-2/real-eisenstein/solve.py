import math
from decimal import *

getcontext().prec = 100

val1 , val2 = Decimal(0.0) , Decimal(0.0)
val1 = val1 + 16**64

val2 = val2 + 1350995397927355657956786955603012410260017344805998076702828160316695004588429433

val1 = val2 / val1

print(val1)

# val1 = 11667.42397365753536180367352579427478725772479506438909460009652667239779857607917956130284551389343

assert math.floor(val1*16**64) == int(val2)

PRIMES = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103]

for i in range(len(PRIMES)):
	PRIMES[i] = n(sqrt(PRIMES[i]), prec = 335)
	# PRIMES[i] = Decimal(PRIMES[i]).sqrt()

print(PRIMES)

v = [var(f'v{i}' , domain  = ZZ) for i in range(27)]
for i in v:
    assume(i > 0)
    assume(i < 256)

variables = []
for i in v:
    variables.append(i)

eqnlist = []

eqn = n(0, prec = 335)
for i in range(len(PRIMES)):
	eqn += v[i] * PRIMES[i]

val1 = n(11667.42397365753536180367352579427478725772479506438909460009652667239779857607917956130284551389343 , prec = 335)

eqnlist.append(int(eqn) == int(val1))


ans = solve(eqnlist,variables) 
print(ans)


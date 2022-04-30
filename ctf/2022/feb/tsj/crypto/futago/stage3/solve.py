from Crypto.PublicKey import RSA
from Crypto.Util.number import *

with open("flag.txt.key1.enc","rb") as f1:
	ct1 = f1.read()
	print(bytes_to_long(ct1))

with open("flag.txt.key2.enc","rb") as f1:
	ct2 = f1.read()
	print(bytes_to_long(ct2))


with open("key1.pub","rb") as f1:
	key1 = RSA.importKey(f1.read())

with open("key2.pub","rb") as f1:
	key2 = RSA.importKey(f1.read())

p2 = GCD(key1.n, key2.n)
print(p2)

# def fermat(n):
# 	a = isqrt(n)+1	
# 	b = a*a - n
# 	z = isqrt(b)
# 	while z*z != b:
# 		b = b + 2*a + 1
# 		a = a + 1
# 		z = isqrt(b)	
# 	return (a+z), (a-z)


print(key1.n)
print(key1.e)

print(key2.n)
print(key2.e)

# p1 = key1.n // p2
# q1 = key2.n // p2

# print(isPrime(p1))
# print(isPrime(q1))

def functor(p,q,ct):
	n = p*q
	phi = (p-1)*(q-1)
	d = inverse(65537,phi)
	flag = pow(bytes_to_long(ct),d,n)
	print(long_to_bytes(flag))






i = 1
val2 = 15020415809754536908731790974591853992651059625432629885011648488456800109866209015323406979528503428966250876525326540305323346067885985572614993115274169065798014624055131167854410038477184114098725588061453045083229333529446280866534708395898733813721241679675794747732416108180811619525738350153860144406
while (n1*n2) % val1 != 0 :
	val1 = next_prime(val1)
	i += 1
	print(val1)
	print(i)

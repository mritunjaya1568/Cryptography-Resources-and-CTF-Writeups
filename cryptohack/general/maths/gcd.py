#!/usr/bin/python3
import math
from Crypto.Util.number import GCD,long_to_bytes,bytes_to_long
a=66528
b=52920
def mritunjya_gcd(a,b):
	if a==0 or b==0:
		return a+b
	else:
		return mritunjya_gcd(b%a,a)
print(mritunjya_gcd(8,12))
math_gcd=math.gcd(a,b)
print(type(math_gcd))
crypto_gcd=GCD(a,b)
print(type(crypto_gcd))
print(math_gcd)
print(crypto_gcd)
print(mritunjya_gcd(a,b))
print(long_to_bytes(math_gcd))
print(long_to_bytes(crypto_gcd))
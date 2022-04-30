from Crypto.Util.number import *
import gmpy2
from random import randint

p, q, r, s, t = [ getPrime(512) for _ in range(5)]
flag = b'???????????????????????'

f = bytes_to_long(flag)
n = p*q*r
enc = pow(f, e, n)

n1 = r*q
x = randint(1, min(r, q))
d1 = gmpy2.invert(e, (r-1)*(q-1))
a = pow((x*s) + 1, d1, n1)

n2 = s*t
b = pow(r+7, e, n2)

print(f"n = {n}")
print(f"e = {e}")
print(f"enc = {enc}\n")

print(f"n1 = {n1}")
print(f"a = {int(a)}\n")

print(f"n2 = {n2}")
print(f"b = {b}")
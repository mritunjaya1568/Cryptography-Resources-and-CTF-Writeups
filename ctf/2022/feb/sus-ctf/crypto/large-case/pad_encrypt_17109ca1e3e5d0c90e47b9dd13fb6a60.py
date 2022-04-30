#!/usr/bin/env python3

from Crypto.PublicKey import RSA
from Crypto.Util.number import bytes_to_long

FLAG = b"crypto{???????????????????????????????????}"


def pad100(msg):
    return msg + b'\x00' * (100 - len(msg))


key = RSA.generate(1024, e=3)
n, e = key.n, key.e

m = bytes_to_long(pad100(FLAG))
c = pow(m, e, n)

print(f"n = {n}")
print(f"e = {e}")
print(f"c = {c}")

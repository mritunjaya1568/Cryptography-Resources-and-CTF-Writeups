#!/usr/bin/env python3.8
from os import urandom
from gmpy2 import next_prime
from random import randrange, getrandbits
from Crypto.Cipher import AES
from fastecdsa.curve import Curve


k=AES.key_size[0]
print(k)
key = urandom(k)
print(key)
print(len(key))

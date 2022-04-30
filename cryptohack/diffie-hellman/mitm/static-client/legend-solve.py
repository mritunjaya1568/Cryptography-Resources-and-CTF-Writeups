#! /usr/bin/python3

import pwn
import gmpy2
import json
import math
import hashlib
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad



def is_power_of_2(n):
    return (n & (n-1) == 0) and n != 0

def log2(n):
    assert is_power_of_2(n)
    r = 0
    while (n != 1):
        n >>= 1
        r += 1
    return r

def sum(l):
    s = 0
    for x in l:
        s += x
    return s

def product(l):
    p = 1
    for x in l:
        p *= x
    return p

def CRT(a, n):
    l = len(a)
    N = product(n)
    ni = [N // n[j] for j in range(l)]
    inv_ni = [gmpy2.invert(ni[j], n[j]) for j in range(l)]
    x = [a[j] * ni[j] * inv_ni[j] for j in range(l)]
    return sum(x) % N

def format_message(p):
    d = {"p": hex(p), "g": "0x02", "A": "0x01"}
    j = json.dumps(d)
    return str(j)

def is_pkcs7_padded(message):
    padding = message[-message[-1]:]
    return all(padding[i] == len(padding) for i in range(0, len(padding)))

def decrypt_flag(shared_secret: int, iv: str, ciphertext: str):
    # Derive AES key from shared secret
    sha1 = hashlib.sha1()
    sha1.update(str(shared_secret).encode('ascii'))
    key = sha1.digest()[:16]
    # Decrypt flag
    ciphertext = bytearray.fromhex(ciphertext)
    iv = bytearray.fromhex(iv)
    cipher = AES.new(key, AES.MODE_CBC, iv)
    plaintext = cipher.decrypt(ciphertext)

    if is_pkcs7_padded(plaintext):
        return unpad(plaintext, 16).decode('ascii')
    else:
        return plaintext.decode('ascii')



HOST = "socket.cryptohack.org"
PORT = 13373

P = 0xffffffffffffffffc90fdaa22168c234c4c6628b80dc1cd129024e088a67cc74020bbea63b139b22514a08798e3404ddef9519b3cd3a431b302b0a6df25f14374fe1356d6d51c245e485b576625e7ec6f44c42e9a637ed6b0bff5cb6f406b7edee386bfb5a899fa5ae9f24117c4b1fe649286651ece45b3dc2007cb8a163bf0598da48361c55d39a69163fa8fd24cf5f83655d23dca3ad961c62f356208552bb9ed529077096966d670c354e4abc9804f1746c08ca237327ffffffffffffffff
G = 2

# Find a list of primes long enough for the CRT to work
N = 2
primes = [2]
while (N < P):
    primes.append(gmpy2.next_prime(primes[-1]))
    N *= primes[-1]

# Obtain all the correponding remainders
remainders = []
for k in primes:
    s = pwn.remote(HOST, PORT)
    for _ in range(3):
        s.recvline()
    s.recvuntil(': ')
    m = format_message((1 << k) - 1)
    s.sendline(m)
    r = s.recvline()[17:]
    B = int(json.loads(r)["B"][2:], 16)
    l = log2(B)
    remainders.append(l)
    s.close()

# Recover b by applying the CRT
b = CRT(remainders, primes)
assert b < P

print()
print("b: " + str(b))
print()

# Retrieve the ciphertexts and Alice's public integer
s = pwn.remote(HOST, PORT)
j1 = json.loads(s.recvline()[24:])
s.recvline()
j2 = json.loads(s.recvline()[24:])
s.recvuntil(': ')
s.sendline(str(j1).replace('\'', '\"'))
s.recvline()
r = s.recvline()[17:]
j3 = json.loads(r)
s.close()

A = int(j1["A"][2:], 16)
shared_secret = pow(A, b, P)
iv_1 = j2["iv"]
ciphertext_1 = j2["encrypted"]
iv_2 = j3["iv"]
ciphertext_2 = j3["encrypted"]

# Decrypt and print the plaintexts
print()
plaintext_1 = decrypt_flag(shared_secret, iv_1, ciphertext_1)
print("p1: " + plaintext_1)
plaintext_2 = decrypt_flag(shared_secret, iv_2, ciphertext_2)
print("p2: " + plaintext_2)
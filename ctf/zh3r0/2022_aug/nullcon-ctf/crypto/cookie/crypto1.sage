from pwn import *
from Crypto.Util.number import *
from tqdm import tqdm
import hashlib

re = remote("52.59.124.14", 10014)

p = 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
a = -3
b = 0x5ac635d8aa3a93e7b3ebbd55769886bc651d06b0cc53b0f63bce3c3e27d2604b
n = 0xffffffff00000000ffffffffffffffffbce6faada7179e84f3b9cac2fc632551
E = EllipticCurve(GF(p), [a, b])
G = E(0x6b17d1f2e12c4247f8bce6e563a440f277037d812deb33a0f4a13945d898c296, 0x4fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce33576b315ececbb6406837bf51f5)

print(re.recvline())
text = re.recvline()
print(text)
x, y = map(int, text.decode().strip("Point(").rstrip().strip(")").split(","))
print(x, y)
Pub = E(x, y)
print(re.recvuntil(b"]\n\n"))
print("pog")
re.sendline(b'1:a')
text = re.recvline()
print(text)
r, s = map(int, text.decode().strip().strip("(").strip(")").split(", "))

print("Finding the value of k")
for k in tqdm(range(1, 2**16)):
    test = (G*k).xy()[0]
    if int(test) == r:
        break
print("The value of K is", k)

d_a = int(((s*k-int(hashlib.md5(b'a').hexdigest(),16))*pow(r, -1, n))%n)
assert d_a*G == Pub
print("Morbin time")

target = b'I still love cookies.'
k = int(hashlib.md5(os.urandom(16)).hexdigest()[:4], 16)
R = G*k
x, y = R.xy()
r = int(int(x) % n)
s = int((pow(k, -1, n)*(int(hashlib.md5(target).hexdigest(),16) + r * d_a))%n)

print(re.recvline())
re.sendline(f"2:{r},{s}".encode())
re.recvuntil(b"\n\n")
print(re.recvuntil(b"\n\n").decode())

re.close()

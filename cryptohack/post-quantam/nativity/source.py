import numpy as np
from random import SystemRandom
from Crypto.Util.number import bytes_to_long, long_to_bytes

# dimension
n = 64
# number of samples in public key
m = 512
dtype = np.uint16

random = SystemRandom()
sigma = 2.3
def normal(): return round(random.gauss(0, sigma))
def binary(): return random.randrange(2)


FLAG = b"crypto{?????????????????????????????????????????}"


def uniform(shape):
    buffer = [random.randrange(0, 1 << 16) for i in range(np.prod(shape))]
    return np.array(buffer, dtype=dtype).reshape(shape)


def sample(shape, dist):
    return np.fromfunction(np.vectorize(lambda *_: dist()), shape).astype(dtype)


def keygen():
    A = uniform((n, m))
    s = uniform((n,))
    pk = np.vstack((A, s @ A + 2*sample((m,), normal)))
    sk = np.append(-s, 1).astype(dtype)
    return pk, sk


def encrypt(pk, msg):
    c = pk @ sample((m,), binary) + np.append(np.zeros(n), msg)
    return c.astype(dtype)


def decrypt(sk, c):
    return sk.dot(c) & 1


pk, sk = keygen()

msg = np.fromiter([int(i) for i in "{:0{}b}".format(
    bytes_to_long(FLAG), 8 * len(FLAG))], dtype)
ciphertexts = np.vstack([encrypt(pk, b) for b in msg])

np.savetxt("ciphertexts.txt", ciphertexts, fmt="%d")
np.savetxt("public_key.txt", pk, fmt="%d")

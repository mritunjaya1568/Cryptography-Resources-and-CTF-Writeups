from sage.all import *
from Crypto.Util.number import *

def decrypt(sk, c):
    return int(sk.dot_product(c)) & 1

cip = []
with open("ciphertexts.txt", "r") as f:
    for i in f.readlines():
        cip.append(vector(Zmod(2**16), [int(j) for j in i.strip().split()]))

M = []
with open("public_key.txt", "r") as f:
    for i in f.readlines():
        M.append([int(j) for j in i.strip().split()])

M = Matrix(ZZ, M)
L = M.stack(2**16 * Matrix.identity(512))
L = L.LLL()
M = M.change_ring(Zmod(2**16))

for i in L:
    if i != vector(ZZ, [0]*512):
        b = (M[-1] - i)[:64]
        A = M[:-1].transpose()[:64]
        s = A.solve_right(b)
        p = ''.join(str(j) for j in [decrypt(vector(Zmod(2**16), list(s)+[1]), k) for k in cip])
        print(long_to_bytes(int(p, 2)))
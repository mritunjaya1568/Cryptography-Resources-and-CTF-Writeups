import json
from pwn import remote
from tqdm import tqdm
from sage.all import *


def json_recv():
    line = r.recvline()
    return json.loads(line.decode())

def json_send(hsh):
    request = json.dumps(hsh).encode()
    r.sendline(request)

# dimension
n = 64
n_equations = 64
# plaintext modulus
p = 257
# ciphertext modulus
q = 1048583

# r = remote('socket.cryptohack.org', 13413)
r = remote('localhost', 13413)
r.recvline()

M = []
b = []
print("[+] Collecting Equations:")
for _ in tqdm(range(n_equations)):
    json_send({"option": "encrypt", "message": "0"})
    j = json_recv()
    M.append(eval(j['A']))
    b.append(eval(j['b']))

M = Matrix(ZZ, M)
# b = Matrix(ZZ, b)
L = M.transpose()
L = L.stack(q * identity_matrix(n_equations))
L = L.stack(p * identity_matrix(n_equations))
for i in range(n):
    L = L.augment(vector(ZZ,[0]*i+[1]+[0]*(n-i-1+2*n_equations)))
for i in range(n_equations):
    L = L.augment(vector(ZZ, [0] * n + [0] * n_equations + i * [0] + [q] + (n_equations-i-1) * [0]))

# L = (-1*matrix(ZZ,b + [0] *(n+n_equations))).stack(L)
# L = L.augment(vector(ZZ,[q]+[0]*(n+2*n_equations)))

print("[+] Performing LLL")
Mred = L.LLL()

print("[+] Checking result")

from sage.modules.free_module_integer import IntegerLattice

# From https://oddcoder.com/LOL-34c3/, https://hackmd.io/@hakatashi/B1OM7HFVI
print("[+] Performing CVP")
def Babai_CVP(mat, target):
    M = IntegerLattice(mat, lll_reduce=True).reduced_basis
    G = M.gram_schmidt()[0]
    diff = target
    for i in reversed(range(G.nrows())):
        diff -=  M[i] * ((diff * G[i]) / (G[i] * G[i])).round()
    return target - diff

cvp_vec = Babai_CVP(Mred, vector(b + [0]*n+ [q]*(n_equations)))
print(cvp_vec - vector(b + [0]*n+ [q]*(n_equations)))

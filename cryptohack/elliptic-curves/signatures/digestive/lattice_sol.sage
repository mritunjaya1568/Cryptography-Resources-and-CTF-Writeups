# {"admin": false, "username": "hello"}
import hashlib
import json
import string
from ecdsa import SigningKey

def change_name(username):
	fak_msg = json.dumps({"admin":False, "username":username})
	return int.from_bytes(fak_msg.encode(),'big')

def change_int(val):
	fak_msg = val.to_bytes((val.bit_length() + 7)//8,'big')
	return json.loads(fak_msg.decode())


SK = SigningKey.generate() # uses NIST192p
VK = SK.verifying_key

order = int(SK.privkey.order)

req_msg = '{"admin": true}'
req_val = int.from_bytes(req_msg.encode(),'big')

front = b'{"admin": false, "username": "'
front_val = int.from_bytes(front,'big')
last = b'"}'
last_val = int.from_bytes(last, 'big')

# last_val + (256**2) * (int.from_bytes(b'x','big')) + (256 ** 3) * front_val
# last_val + 256 **2 * (int.from_bytes(b'xx','big')) + 256 **4 * front_val

N = 67

lest = [pow(256,i+2) for i in range(N)] + [order] # LEN + 1
output = int((req_val - last_val - pow(256,N + 2) * front_val) % order)

M = matrix(ZZ,N+1,N+1)
M[N,0] = lest[-1]

for i in range(N):
	M[i,0] = lest[i]
	M[i,i+1] = 1

Mred = M.LLL()

# from fpylll import CVP
# from fpylll import IntegerMatrix

# def SolveCVP(lattice_basis, target):
#     L = IntegerMatrix.from_matrix(lattice_basis)
#     v = CVP.closest_vector(L, target)
#     # fpylll returns a type `tuple` object
#     return vector(v)

# target = [output] + [109] * N
# SolveCVP(Mred,target)

from sage.modules.free_module_integer import IntegerLattice

# From https://oddcoder.com/LOL-34c3/, https://hackmd.io/@hakatashi/B1OM7HFVI
def Babai_CVP(mat, target):
    M = IntegerLattice(mat, lll_reduce=True).reduced_basis
    G = M.gram_schmidt()[0]
    diff = target
    for i in reversed(range(G.nrows())):
        diff -=  M[i] * ((diff * G[i]) / (G[i] * G[i])).round()
    return target - diff

target = vector(ZZ, [output] + [109] * N)
Babai_CVP(Mred, target)

### lnonkqnslnmpetmlpjmjrqmfhnjijlqijumejjuqslppnhqojopumpmlmmonknlnmlm

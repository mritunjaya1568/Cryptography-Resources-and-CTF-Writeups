# {"admin": false, "username": "hello"}
import hashlib
import json
import string
from tqdm import tqdm
from ecdsa import SigningKey
from sage.modules.free_module_integer import IntegerLattice

# From https://oddcoder.com/LOL-34c3/, https://hackmd.io/@hakatashi/B1OM7HFVI
def Babai_CVP(mat, target):
    M = IntegerLattice(mat, lll_reduce=True).reduced_basis
    G = M.gram_schmidt()[0]
    diff = target
    for i in reversed(range(G.nrows())):
        diff -=  M[i] * ((diff * G[i]) / (G[i] * G[i])).round()
    return target - diff

def string_to_int(s):
    """Convert a string of bytes into an integer, as per X9.62."""
    result = 0
    for c in s:
        if not isinstance(c, int):
            c = ord(c)
        result = 256 * result + c
    return result

def verify_collision(req_msg, username):
    sanitized_username = "".join(a for a in username if a in string.ascii_lowercase) 
    msg = json.dumps({"admin": False, "username": sanitized_username})
    
    return string_to_int(msg.encode()) % order == string_to_int(req_msg.encode()) % order

SK = SigningKey.generate() # uses NIST192p
VK = SK.verifying_key

order = int(SK.privkey.order)

req_msg = '{"admin": true, "username": "blue"}'
req_val = int.from_bytes(req_msg.encode(),'big')

front = b'{"admin": false, "username": "'
front_val = int.from_bytes(front,'big')
last = b'"}'
last_val = int.from_bytes(last, 'big')


for N in tqdm(range(20, 90)):
    lest = [pow(256,i+2) for i in range(N)] + [order] # LEN + 1
    output = int((req_val - last_val - pow(256,N + 2) * front_val) % order)

    M = matrix(ZZ,N+1,N+1)
    M[N,0] = lest[-1]

    for i in range(N):
        M[i,0] = lest[i]
        M[i,i+1] = 1

    Mred = M.LLL()

    target = vector(ZZ, [output] + [109] * N)
    v = Babai_CVP(Mred, target)
    a = target[0]-v[0]
    if a==0:
        break

username = ''.join(chr(i) for i in v[1:])[::-1]
print(verify_collision(req_msg, username))
print("[+] Username: ", username)
print("[+] Collision message: ", req_msg)

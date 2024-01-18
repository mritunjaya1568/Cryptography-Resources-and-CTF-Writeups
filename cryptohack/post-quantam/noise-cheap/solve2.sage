import json
from pwn import remote
from tqdm import tqdm
import sage.all
from sage.all import Matrix, ZZ, vector


def json_recv():
    line = r.recvline()
    return json.loads(line.decode())


def json_send(hsh):
    request = json.dumps(hsh).encode()
    r.sendline(request)


FLAG = b"crypto{????????????????????????}"
flag_len = len(FLAG)
# dimension
n = 64
n_equations = 256
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
b = Matrix(ZZ, b)
L = M.transpose()
L = L.stack(q * identity_matrix(n_equations))

# for i in range(n):
#     L = L.augment(vector(ZZ,[0]*i+[1]+[0]*(n-i-1+n_equations)))


L = b.stack(L)
L = L.augment(vector(ZZ, [q] + [0]*(n_equations+n)))
print("[+] Performing LLL")
Mred = L.BKZ()

print("[+] Checking result")
for i in Mred:
    if i[-1] in [q, -q]:
        print(i)

# S = (matrix(GF(q),M)).solve_right(vector(GF(q),vector(b)))

# flag = ''
# print("[+] Collecting Equations for Flag:")
# for i in tqdm(range(flag_len)):
#     json_send({"option":"get_flag","index":f"{i}"})
#     j = json_recv()
#     A = eval(j['A'])
#     b = eval(j['b'])
#     flag += chr(int(int((b - vector(A) * vector(S)))%p))

# print("[+] Got the Flag:",flag)



from pwn import *
from sage.all import *
import json
from Crypto.Util.number import *
from tqdm import tqdm

def json_send(hsh):
	request = json.dumps(hsh).encode()
	r.sendline(request)

def json_recv():
	line = r.recvline()
	return json.loads(line.decode())

# dimensions
n = 512
n_equations = 512
FLAG = b'crypto{??????????????????????????????????????}'
flag_len = len(FLAG)
# plaintext modulus
p = 257
# ciphertext modulus
q = 6007
# message scaling factor
delta = int(round(q/p))

HOST = 'socket.cryptohack.org'
# HOST = 'localhost'
PORT = 13412

r = remote(HOST,PORT)
print(r.recvline())

M = []
b = []
print("[+] Collecting Equations for encrypt:")
for _ in tqdm(range(n_equations)):
	json_send({"option":"encrypt", "message":"0"})
	j = json_recv()
	M.append(eval(j['A']))
	b.append(eval(j['b']))

M = matrix(ZZ, M)
b = matrix(ZZ, b)
L = (-b).stack(M.T)
L = L.augment(vector(ZZ,[q] +[0] * n_equations))

print("[+] Performing LLL")
Lred = L.LLL()

print("[+] Checking Results:")
for i in Lred:
	if i[-1] in [-q,q]:
		err = -1 * vector(ZZ,i[:-1]) if i[-1] == q else vector(ZZ,i[-1])
		break

S = M.augment(vector(b)- err, subdivide = True)
S = S.rref().columns()[-1]
print("Got S:")
print(S)

flag = ''
print("[+] Collecting Equations for Flag:")
for i in tqdm(range(flag_len)):
	json_send({"option":"get_flag","index":f"{i}"})
	j = json_recv()
	A = eval(j['A'])
	b = eval(j['b'])
	flag += chr(int(round((b - vector(A) * vector(S))/delta)))

print("[+] Got the Flag:",flag)

### crypto{learning-is-easy-over-the-real-numbers} 

## Tips for doing LLL - try to make matrix n * n, and keep 
## vectors independent, add identity matrix to keep it independent




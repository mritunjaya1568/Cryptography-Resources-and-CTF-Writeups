from sage.all import *
from pwn import remote
import json

FLAGLEN = len('crypto{????????????????????}')


Zn = Zmod(127)
Z = VectorSpace(Zn, FLAGLEN)

io = remote("socket.cryptohack.org", 13390)
io.recvline()

A,B = [],[]

# If we spans all our vector space, we are ready to solve
while Z.subspace(A).rank() < FLAGLEN:

    io.sendline(json.dumps({"option": "reset"}))
    io.recvline()

    # Asks for samples until we have enough of them
    io.sendline(json.dumps({'option':'get_sample'}))
    r = json.loads(io.recvline().strip())

    a, b = r['a'], r['b']

    # If the rank goes up when we add this vector, they are linearly independants
    if Z.subspace(A + [a]).rank() == len(A) + 1:
        A.append(a)
        B.append(b)

A = matrix(Zn, A)
B = Z(B)
print("".join(map(chr, A.inverse() * B)))
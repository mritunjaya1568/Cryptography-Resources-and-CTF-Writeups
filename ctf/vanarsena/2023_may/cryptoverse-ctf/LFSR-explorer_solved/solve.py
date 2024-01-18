# taken reference from this writeup - https://hxp.io/blog/49/0CTF-Quals-2019-zer0lfsr-writeup/
# z3 tutorial - https://colab.research.google.com/github/philzook58/z3_tutorial/blob/master/Z3%20Tutorial.ipynb#scrollTo=vrl8kitcRc40
# Wikipedia LFSR - https://en.wikipedia.org/wiki/Linear-feedback_shift_register


from Crypto.Util.number import *
from z3 import *

def explore(state, mask):
    curr = (state << 1) & 0xffffffff
    i = state & mask & 0xffffffff
    last = 0
    for j in range(32):
        last ^= (i & 1)
        i >>= 1
    curr ^= last
    return (curr, last)


with open("output.txt", "rb") as f:
    output = f.read()

output = list(output)
print(output)

s = Solver()

states = [BitVec("state1", 32), BitVec("state2", 32)]
mask = 0b10000100010010001000100000010101

for i in range(8):
    tmp = output[i]
    for j in reversed(range(8)):
        (states[i // 4], out) = explore(states[i // 4], mask)
        s.add((tmp >> j) & 1 == out)


print(s.check())

m = s.model()
print(m)

# sat
# [state1 = 1600794722, state2 = 1195393124]

# In [28]: long_to_bytes(1195393124)
# Out[28]: b'G@@d'

# In [29]: long_to_bytes(1600794722)
# Out[29]: b'_j0b'

# flag = cvctf{G@@d_j0b}


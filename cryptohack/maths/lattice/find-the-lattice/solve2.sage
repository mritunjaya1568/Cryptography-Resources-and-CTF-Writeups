from fpylll import CVP
from fpylll import IntegerMatrix
from Crypto.Util.number import *

q,h = map(int,(7638232120454925879231554234011842347641017888219021175304217358715878636183252433454896490677496516149889316745664606749499241420160898019203925115292257, 2163268902194560093843693572170199707501787797497998463462129592239973581462651622978282637513865274199374452805292639586264791317439029535926401109074800))
e = 5605696495253720664142881956908624307570671858477482119657436163663663844731169035682344974286379049123733356009125671924280312532755241162267269123486523

M = matrix(ZZ,[[h,1],[q,0]])
Mred = M.LLL()

L = IntegerMatrix.from_matrix(Mred)
v = CVP.closest_vector(L, (e,0))

# e - rdash * h -= (approximately close to m)
flag = int(( vector(GF(q),(e,0)) - vector(GF(q),v) )[0]) % int((Mred[0][0]))
print(long_to_bytes(flag))

# b'crypto{Gauss_lattice_attack!}'

## but the point is e = m + r * h mod q 

## this is the closest vector, with full norm minimized
## but we don't care about j cap in vector, so that will
## also have a effect
## Mred[0] = g, f
## so it should be near to g as that will create the shortest vector

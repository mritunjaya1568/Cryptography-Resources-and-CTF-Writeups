# check solution from adbforlife in writeups CH

import numpy as np
import math
from Crypto.Util.number import *

def svp(v1,v2):
    n1 = v1[0] ** 2 + v1[1] ** 2
    n2 = v2[0] ** 2 + v2[1] ** 2
    if n2 < n1:
        n1,n2,v1,v2 = n2,n1,v2,v1
    m = np.dot(v1,v2) // n1
    if m == 0:
        return v1,v2
    else:
        v2 -= m * v1
    return svp(v2,v1)

def cvp(a,b,c):
    while a[0] ** 2 + a[1] ** 2 > c[0] ** 2 + c[1] ** 2:
        b1 = np.dot(a,b) // (b[0] ** 2 + b[1] ** 2)
        c1 = np.dot(a,c) // (c[0] ** 2 + c[1] ** 2)
        a = a - c * c1 - b * b1
    a = a - b # this is trap, he took a value closer to that
    # but actually it should be %
    return a


q,h = (7638232120454925879231554234011842347641017888219021175304217358715878636183252433454896490677496516149889316745664606749499241420160898019203925115292257, 2163268902194560093843693572170199707501787797497998463462129592239973581462651622978282637513865274199374452805292639586264791317439029535926401109074800)
c = 5605696495253720664142881956908624307570671858477482119657436163663663844731169035682344974286379049123733356009125671924280312532755241162267269123486523
v1 = np.array((1,h))
v2 = np.array((0,q))
v1,v2 = svp(v1,v2)
og = np.array((0,c))
res = cvp(og,v1,v2)
print(long_to_bytes(res[1]))


# b'crypto{Gauss_lattice_attack!}'

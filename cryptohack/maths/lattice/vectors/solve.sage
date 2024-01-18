from Crypto.Util.number import *
# QQ is for rational field, and RR is for real field
v = vector(QQ, [2,6,3])
w = vector(QQ, [1,0,0])
u = vector(QQ, [7,7,2])

print(3 * (2 * v - w) - 2 * u)

# (-5, 22, 14)

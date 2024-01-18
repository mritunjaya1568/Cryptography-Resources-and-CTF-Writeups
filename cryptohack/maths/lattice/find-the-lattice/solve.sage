from Crypto.Util.number import *

# z = int(sqrt(q)//2)
# Ques. -> why this decryption is working ??
# Ans. -> because when we do 
# f * e = (m * f + r * g) mod q
# m < z , f <= z, m * f < q/2
# r <= z , g <=z, r * g <= q/2
# m * f + r * g < q
# so mod q will have no effect
# (f * e) mod q = m * f + r * g
# a = m * f + r * g
# take mod g 
# a  = (m * f) mod g
# now you can find m by taking the inverse of f wrt g
# m = (a * f^(-1)) mod g

def decrypt(q, h, f, g, e):
    a = (f*e) % q
    m = (a*inverse(f, g)) % g
    return m

q,h = map(int,(7638232120454925879231554234011842347641017888219021175304217358715878636183252433454896490677496516149889316745664606749499241420160898019203925115292257, 2163268902194560093843693572170199707501787797497998463462129592239973581462651622978282637513865274199374452805292639586264791317439029535926401109074800))
e = int(5605696495253720664142881956908624307570671858477482119657436163663663844731169035682344974286379049123733356009125671924280312532755241162267269123486523)

# z = int(sqrt(q//2))
# f * h - k1 * q = g
# since this is an SVP problem, because k1 < z, f < z
# 1st vector will be the shortest vector

print("1st attack using LLL")
# 1st method, by using LLL
M = matrix(QQ,2,2)
M[0,0] = h
M[1,0] = q
M[0,1] = 1
M[1,1] = 0

### h 1
### q 0 

### [h * f - k1 * f = g, f] = [g,f]

Mred = M.LLL()
g,f = Mred[0]
g,f = int(g), int(f)

assert GCD(f,g) == 1

flag = decrypt(q,h,f,g,e)
print(long_to_bytes(flag))
print("1st attack done")

print("2nd attack using Gauss reduction")
# 2nd method by using gaussian reduction

def modified_gauss(v1, v2):
    while True:
        if v2 * v2 < v1 * v1:
            v1, v2 = v2, v1
        mu = (v2 * v1) / (v1 * v1)
        # print(mu)
        if mu <= (1/2):
            print("Got reduced basis")
            return v1, v2
        mu = floor(mu)
        v2 = v2 - mu * v1

red1, red2 = modified_gauss(vector(QQ,[h,1]), vector(QQ, [q,0]))

# 1st vector will be the shortest vector, or SVP
g1, f1 = map(int,red1)
flag2 = decrypt(q,h, f1, g1, e)
print(long_to_bytes(flag))


## flag - b'crypto{Gauss_lattice_attack!}'

# ZZ(g/GF(q)(h)) = f = g /h

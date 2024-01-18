load('coppersmith.sage')

enc_flag = "hOtHc2dafgWuv2nHQDGsoGoF+BmDhy3N0seYgY9kVnw="

h, r, s = [0] * 608, [0] * 608 , [0] * 608 
# read line by line from log.txt and do exec
with open('log.txt', 'r') as f:
    for line in f:
        exec(line.strip())

print(len(h), len(r), len(s))


p = 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
K = GF(p)
a = K(0xffffffff00000001000000000000000000000000fffffffffffffffffffffffc)
b = K(0x5ac635d8aa3a93e7b3ebbd55769886bc651d06b0cc53b0f63bce3c3e27d2604b)
E = EllipticCurve(K, (a, b))
G = E(0x6b17d1f2e12c4247f8bce6e563a440f277037d812deb33a0f4a13945d898c296, 0x4fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce33576b315ececbb6406837bf51f5)
E.set_order(0xffffffff00000000ffffffffffffffffbce6faada7179e84f3b9cac2fc632551 * 0x1)

order = E.order()

def functor(lest0,lest1):
    R = Integers(order)
    P.<x, y> = PolynomialRing(R)
    f = (x * lest0[2] - lest0[0]) * lest1[1] - lest0[1] * (y * lest1[2] - lest1[0])
    return f

for i in range(1):
    for j in range(2):
        if i == j:
            continue
        f = functor([h[i], r[i], s[i]], [h[j], r[j], s[j]])
        bounds = (floor(2^256), floor(2^256))
        roots = small_roots(f, bounds)
        if roots:
            print(roots)
            print(i, j)
            exit()
        else:
            print(i, j, 'no roots')








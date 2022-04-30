import math
from Crypto.Util.number import *

def recover(e,N):
    cf = convergents(e/N)
    G.<x> = ZZ['x']
    for index, k in enumerate(cf[1:]):
        d0 = k.denominator()
        k = k.numerator()
        if k != 0 and (e * d0 - 1) % k == 0:
            
            phi = (e*d0 - 1) //k
            s = (N-phi+1)
            f = x^2 - s*x + N
            b = f.discriminant()
            if b > 0 and b.is_square():
                d = d0
                
                roots = list(zip(*f.roots()))[0]
                if len(roots) == 2 and prod(roots) == N:
                    print("[x] Recovered! \nd = %0x" %d)
                    return d
            else:
                continue
    print("[] Could not determine the value of d with the parameters given. Make sure that d < 1/3 * N ^ 0.25")
    return -1
    

def wiener(c,e,N):
    d = recover(e,N)
    return hex(Integer(pow(c,d,N)))

def test():
    
    n = 0xb3c6c73eeaea6444dd630d66bf23076c42d07a0f1b83b48f1cc7f39e2be4eeafac7a3b5394768a806d2603485c7476abd798bee0f6faa36fed8116be1f2e1a6b24965ab6625669bfc96e2ab57a0f16ad170b0cd1b9e038de9d5a6650fc422b71e1a42e14f6ceda2fd2a623e42f0c240285e9db58363bdfd6933f57993c1bef83
    e = 0x5d0dc8704209a04e23e160ccd840ee08803614cc7cd5a6a5e5d49974675d39cdf979faac3332e795d05aacb41326ef44f9bceb553632173979a740826174a66c5603c1511171c4cc77a31157cc6e447b539d8bdd1e881d9e21149fa8c517e70ffbab393842f27a1761dc1a1a50b2b2dc9005f6c3efe30d8d34df0c081733a57d
    c = 0x6e4f2f401440c8f900fcf4bcb7ab833add2aed6182289d7c4fe76d71950d66a696cf1c65800d1a7f474b052a6907fed4f6246b361b23c49776f9d0ad52d55cbcaa0635e56b5d108306eb366c88e7acb8699a5f71282b18f2e4a6af60849fbb6c86a761ea8ededb819f69b53aa5c5f640fe6563fc00ba59301b9e5b294b40b5f0
    m = wiener(c,e,n)
    print(m)
test()

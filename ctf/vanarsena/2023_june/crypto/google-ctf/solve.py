from Crypto.Util.number import *
from Crypto.PublicKey import RSA
from sage.all import *

# import public.pem using crypto module
with open('public.pem', 'r') as f:
    key = RSA.importKey(f.read())

# get n
n = key.n
e = key.e
print(n,e)

dump = [2166771675595184069339107365908377157701164485820981409993925279512199123418374034275465590004848135946671454084220731645099286746251308323653144363063385
,6729272950467625456298454678219613090467254824679318993052294587570153424935267364971827277137521929202783621553421958533761123653824135472378133765236115
,2230396903302352921484704122705539403201050490164649102182798059926343096511158288867301614648471516723052092761312105117735046752506523136197227936190287
,4578847787736143756850823407168519112175260092601476810539830792656568747136604250146858111418705054138266193348169239751046779010474924367072989895377792
,7578332979479086546637469036948482551151240099803812235949997147892871097982293017256475189504447955147399405791875395450814297264039908361472603256921612
,2550420443270381003007873520763042837493244197616666667768397146110589301602119884836605418664463550865399026934848289084292975494312467018767881691302197
]

print(dump)

seed = 211286818345627549183608678726370412218029639873054513839005340650674982169404937862395980568550063504804783328450267566224937880641772833325018028629959635

from math import gcd

from sage.all import GF
from sage.all import is_prime_power

def attack(y, m=None, a=None, c=None):
    """
    Recovers the parameters from a linear congruential generator.
    If no modulus is provided, attempts to recover the modulus from the outputs (may require many outputs).
    If no multiplier is provided, attempts to recover the multiplier from the outputs (requires at least 3 outputs).
    If no increment is provided, attempts to recover the increment from the outputs (requires at least 2 outputs).
    :param y: the sequential output values obtained from the LCG
    :param m: the modulus of the LCG (can be None)
    :param a: the multiplier of the LCG (can be None)
    :param c: the increment of the LCG (can be None)
    :return: a tuple containing the modulus, multiplier, and the increment
    """
    if m is None:
        assert len(y) >= 4, "At least 4 outputs are required to recover the modulus"
        for i in range(len(y) - 3):
            d0 = y[i + 1] - y[i]
            d1 = y[i + 2] - y[i + 1]
            d2 = y[i + 3] - y[i + 2]
            g = d2 * d0 - d1 * d1
            m = g if m is None else gcd(g, m)
        # print(m)
        # assert is_prime_power(m), "Modulus must be a prime power, try providing more outputs"

    # gf = GF(m)
    gf = Zmod(m)
    if a is None:
        assert len(y) >= 3, "At least 3 outputs are required to recover the multiplier"
        x0 = gf(y[0])
        x1 = gf(y[1])
        x2 = gf(y[2])
        a = int((x2 - x1) / (x1 - x0))

    if c is None:
        assert len(y) >= 2, "At least 2 outputs are required to recover the multiplier"
        x0 = gf(y[0])
        x1 = gf(y[1])
        c = int(x1 - a * x0)

    return m, a, c

m, a, c = attack(dump)
print(m, a, c)

class LCG:
    lcg_m = a
    lcg_c = c
    lcg_n = m

    def __init__(self, lcg_s):
        self.state = lcg_s

    def next(self):
        self.state = (self.state * self.lcg_m + self.lcg_c) % self.lcg_n
        return self.state

lcg = LCG(seed)

# for i in range(6):
#     if lcg.next() == dump[i]:
#         print("ok")

primes_arr = []


primes_n = 1
while True:
    for i in range(8):
        while True:
            prime_candidate = lcg.next()
            if not isPrime(prime_candidate):
                continue
            elif int(prime_candidate).bit_length() != 512:
                continue
            else:
                primes_n *= prime_candidate
                primes_arr.append(prime_candidate)
                break
    
    # Check bit length
    if int(primes_n).bit_length() > 4096:
        print("bit length", int(primes_n).bit_length())
        primes_arr.clear()
        primes_n = 1
        continue
    else:
        break

prod = 1
for i in primes_arr:
    prod *= i

assert prod == n

phi = 1 
for k in primes_arr:
    phi *= (k-1)

d = inverse(e, phi)

# open the flag.txt file and read the flag
with open("flag.txt", "rb") as flag_file:
    flag = flag_file.read()
    ct = int.from_bytes(flag, 'little')
    print(long_to_bytes(pow(int(ct),int(d),int(n))))

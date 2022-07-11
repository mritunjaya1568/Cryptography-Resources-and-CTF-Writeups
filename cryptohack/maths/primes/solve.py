# check this too - https://en.wikipedia.org/wiki/Carmichael_number#:~:text=Carmichael%20numbers%20are%20composite%20numbers,it%20is%20not%20actually%20prime.
# you will be amazed to see this - carmichael number 

# https://rosettacode.org/wiki/Carmichael_3_strong_pseudoprimes
# https://rosettacode.org/wiki/Chernick%27s_Carmichael_numbers

# can generate carmichael numbers upto 300 bits 



from Crypto.Util.number import *

def generate_basis(n):
    basis = [True] * n
    for i in range(3, int(n**0.5)+1, 2):
        if basis[i]:
            basis[i*i::2*i] = [False]*((n-i*i-1)//(2*i)+1)
    return [2] + [i for i in range(3, n, 2) if basis[i]]


def miller_rabin(n, b):
    """
    Miller Rabin test testing over all
    prime basis < b
    """
    basis = generate_basis(b)
    if n == 2 or n == 3:
        return True

    if n % 2 == 0:
        return False

    r, s = 0, n - 1
    while s % 2 == 0:
        r += 1
        s //= 2
    for b in basis:
        x = pow(b, s, n)
        if x == 1 or x == n - 1:
            continue
        for _ in range(r - 1):
            x = pow(x, 2, n)
            if x == n - 1:
                break
        else:
            return False
    return True


# according to chernickk carmichael numbers

from sympy import isprime
 
# based on C version
 
# def primality_pretest(k):
#     if not (k % 3) or not (k % 5) or not (k % 7) or not (k % 11) or not(k % 13) or not (k % 17) or not (k % 19) or not (k % 23):
#         return (k <= 23)
 
#     return True
 
def is_chernick(n, m):
 
    t = 9 * m
 
    if not miller_rabin(6 * m + 1,64):
        return False
 
    if not miller_rabin(12 * m + 1,64):
        return False
 
    for i in range(1,n-1):
        if not miller_rabin((t << i) + 1,64):
            return False
 
    if not isprime(6 * m + 1):
        return False
 
    if not isprime(12 * m + 1):
        return False
 
    for i in range(1,n - 1):
        if not isprime((t << i) + 1):
            return False
 
    return True
 
for n in range(3,15):
 
    if n > 4:
        multiplier = 1 << (n - 4)
    else:
        multiplier = 1
 
    if n > 5:
        multiplier *= 5
 
 
    k = 1
 
    while True:
        m = k * multiplier
 
        if is_chernick(n, m): 
            val = (6*m + 1) * (12*m + 1)
            for i in range(1,n-1):
                val = val * ( (1<<i) * 9*m + 1)
            print("a("+str(n)+") has m = "+str(m), val)
            if val.bit_length() > 600 and val.bit_length() < 900 :
                print("Found carmichael number / pseudoprime : ", val)
                exit(1)
            break
 
        k += 1

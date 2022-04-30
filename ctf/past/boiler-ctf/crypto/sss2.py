import random
from math import ceil
from decimal import Decimal, getcontext
from Crypto.Util.number import long_to_bytes,bytes_to_long

getcontext().prec = 500
 
def reconstruct_secret(shares):
    """
    Combines individual shares (points on graph)
    using Lagranges interpolation.
 
    `shares` is a list of points (x, y) belonging to a
    polynomial with a constant of our key.
    """
    sums = 0
    prod_arr = []
 
    for j, share_j in enumerate(shares):
        xj, yj = share_j
        prod = Decimal(1)
 
        for i, share_i in enumerate(shares):
            xi, _ = share_i
            if i != j:
                prod *= Decimal(Decimal(xi)/(xi-xj))
 
        prod *= yj
        sums += Decimal(prod)
 
    return round(sums)

lest=[]
lest.append((1, 132156498146518935546534654))
lest.append((2, 861352498496153254961238645321268413658613864351))
lest.append((3, 3145756504701717246281836139538967176547517737056))
print(long_to_bytes(reconstruct_secret(lest)))


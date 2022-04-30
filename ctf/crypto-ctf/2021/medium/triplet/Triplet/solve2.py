from Crypto.Util.number import getPrime, isPrime
from Crypto.Util.number import GCD
from functools import reduce
import math
NBIT = 160


def phi(p, q):
    return (p-1) * (q-1)

def lcm(x, y):
    return (x*y) // GCD(x,y)

def main():

    start = 1 << NBIT
    k = 1
    res = []
    while len(res) < 3:
        if(isPrime(k*start + 1)):
            res.append(k*start+1)
            print(k)
        k += 1

    p, q, r = res
    print("p:", p)
    print("q:", q)
    print("r:", r)

    p1, q1, p2, q2, p3, q3 = [p, q, p, r, q, r]
    print("p1:", p1)
    print("q1:", q1)
    print("p2:", p2)
    print("q2:", q2)
    print("p3:", p3)
    print("q3:", q3)
    phi1 = phi(q1, p1)
    phi2 = phi(q2, p2)
    phi3 = phi(q3, p3)

    print(min(math.log2(p1 * q1), math.log2(q2 * p2), math.log2(q3 * p3)))
    print(phi1, phi2, phi3)
    print("\n\n\n")
    ed = lcm(lcm(phi1, phi2), phi3) + 1
    print(ed)

if __name__ == "__main__":
	main()

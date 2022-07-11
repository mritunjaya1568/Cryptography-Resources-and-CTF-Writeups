# https://core.ac.uk/download/pdf/81930829.pdf
import json

A = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61]
prime_list = primes_first_n(100)[1:]

S_a = []
for a in A:
    s = set()
    for p in prime_list:
        if kronecker(a, p) == -1:
            s.add(p % (4 * a))
    S_a.append((a, sorted(s)))

k1 = 313
k2 = 353
S_k = [1, k1, k2]
S_b = []
for a, s in S_a:
    arr = set(range(2000))
    for k in S_k:
        arr &= set([inverse_mod(k, 4 * a) * (_s + k - 1) % (4 * a) for _s in s])
    S_b.append(sorted(arr))

while True:
    mod = [4 * a for a in A] + [k1, k2]
    L = lcm(mod)
    try:
        z = [choice(s) for s in S_b] + [inverse_mod(-k2, k1), inverse_mod(-k1, k2)]
        p = crt(z, mod)
        break
    except:
        pass

print("p", p)
print("L", L)
for i in range(10000000000000000000000000000000, 10000000000000000000000000000000+100000):
    p1 = p + L * i
    p2 = k1 * (p1 - 1) + 1
    p3 = k2 * (p1 - 1) + 1
    if is_prime(p1) and is_prime(p2) and is_prime(p3) and len((p1 * p2 * p3).bits()) > 600:
        prime = p1 * p2 * p3
        base = p1
        break

ans = {"prime": int(prime), "base": int(base)}
print(json.dumps(ans))
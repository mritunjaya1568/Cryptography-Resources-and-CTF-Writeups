from pwn import remote
from Crypto.Util.number import *

primes = [101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461]
print(len(primes))

r = remote('crypto.be.ax', 6000)
vals = []
for i in range(3):
    vals.append(int(r.recvline().decode().split()[-1]))

g, p, c = vals
# print(g, p, c)
res = []
for i in primes:
    r.recvuntil(b'> ')
    r.sendline(str(i))
    t = int(r.recvline().strip())
    s = pow(t, i, p)
    count = 0
    while s!=c:
        s = (s*g)%p
        count +=1
    res.append(count)

f = crt(res, primes)
n = prod(primes)
print(long_to_bytes(f+n))
#  print(res)






r.close()

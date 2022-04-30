from pwn import * 
import time
from Crypto.Util.number import *
from sympy import sieve 

IP ="crypto.be.ax"
PORT = 6000

def product(lest):
	prod =1 
	for i in lest:
		prod*=i
	return prod

def crt(rem,primes):
	prod=1
	for i in primes:
		prod*=i
	total=0
	for i in range(len(primes)):
		total+=rem[i]*(prod//primes[i])*inverse(prod//primes[i],primes[i])
	return total


primes = [i for i in sieve.primerange(110,490)]

rems = []


s = remote(IP, PORT)
print("connected")

g=int(s.recvuntil(b"\n")[2:].strip())
p=int(s.recvuntil(b"\n")[2:].strip())
enc=int(s.recvuntil(b"\n")[15:].strip())

# print(g,p,enc)

for i in range(64):
	s.recvuntil(b"> ")
	s.sendline(str(primes[i]).encode())
	t = int(s.recvuntil(b"\n").strip())
	t = pow(t,primes[i],p)
	count = 0
	while t!=enc:
		t=(t*g)%p
		count+=1
	rems.append(count)

value= crt(rems,primes)%product(primes)

print(long_to_bytes(value))

'''
flag = b'corctf{qu4drat1c_r3s1due_0r_n0t_1s_7h3_qu3st1on8852042051e57492}'
'''




		





# primes = [101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461]
# prod=1
# for i in primes:
# 	prod*=i
# print(len(str(prod)))
# def crt(rem,primes):
# 	prod=1
# 	for i in primes:
# 		prod*=i
# 	print(len(prod))
# 	total=0
# 	for i in range(len(primes)):
# 		total+=rem[i]*(prod//primes[i])*inverse(prod//primes[i],i)









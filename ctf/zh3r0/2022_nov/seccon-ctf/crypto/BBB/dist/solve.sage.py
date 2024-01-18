

# This file was *autogenerated* from the file solve.sage
from sage.all_cmdline import *   # import sage library

_sage_const_8080 = Integer(8080); _sage_const_1 = Integer(1); _sage_const_2 = Integer(2); _sage_const_0 = Integer(0); _sage_const_121 = Integer(121); _sage_const_11 = Integer(11)
from pwn import *

host = 'BBB.seccon.games'
port = _sage_const_8080 

r = remote(host, port)
print(r.recvline())

a = int(r.recvline().decode().strip().split('=')[-_sage_const_1 ])
print("a is ",a)

assert a%_sage_const_2  == _sage_const_0 

p = int(r.recvline().decode().strip().split('=')[-_sage_const_1 ])
print("p is ",p)

print(r.recvuntil(b': '))
b = (-_sage_const_121  - (a-_sage_const_1 ) * _sage_const_11 )%p

r.sendline(str(b).encode())

print(r.recvuntil(b': '))
s0 = _sage_const_11 
r.sendline(str(s0).encode())

print(r.recvuntil(b': '))
s1 = (-_sage_const_11  - a)%p
r.sendline(str(s1).encode())

assert pow(s1,(p-_sage_const_1 )//_sage_const_2 ,p) == _sage_const_1 

lest = Mod(int((s1 + (a//_sage_const_2 )**_sage_const_2  - b)%p),p).sqrt(all = True)
assert len(lest) == _sage_const_2 

s2 = int((lest[_sage_const_0 ] - (a//_sage_const_2 ))%p)
s3 = int((lest[_sage_const_1 ] - (a//_sage_const_2 ))%p)

print(r.recvuntil(b': '))
r.sendline(str(s2).encode())

print(r.recvuntil(b': '))
r.sendline(str(s3).encode())

if pow(s2,(p-_sage_const_1 )//_sage_const_2 ,p) == _sage_const_1 :
	lest2 = Mod(int((s2 + (a//_sage_const_2 )**_sage_const_2  - b)%p),p).sqrt(all = True)
elif pow(s3,(p-_sage_const_1 )//_sage_const_2 ,p) == _sage_const_1 :
	lest2 = Mod(int((s3 + (a//_sage_const_2 )**_sage_const_2  - b)%p),p).sqrt(all = True)
else:
	print("No solutions found for s4")
	exit()

s4 = int((lest2[_sage_const_0 ] - (a//_sage_const_2 ))%p)

print(r.recvuntil(b': '))
r.sendline(str(s4).encode())

print(r.clean(_sage_const_2 ).decode())
# r.interactive()










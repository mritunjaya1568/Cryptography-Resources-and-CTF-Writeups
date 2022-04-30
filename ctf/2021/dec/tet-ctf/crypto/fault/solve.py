from Crypto.Util.number import *
# from secrets import randbits
from pwn import *

host = "139.162.61.222"
port = 13373

r = remote(host,port)
# r.sendline(b'c')
# string = list(map(int,r.recvline().decode().strip(" ()\n").split(",")))
# string = string[-1]

# while 1>0:
r.sendline(b'c')
string = list(map(int,r.recvline().decode().strip(" ()\n").split(",")))
fault = string[0]
ct = string[-1]
print(ct)
val = int(log(ct,2))
val = val^^fault
string = pow(2,val)
string = long_to_bytes(string)
print(string)

# if b"TetCTF{" in string:
# 	print(f"{string}")




# p = getPrime(512)
# q = getPrime(512)
# n = p*q

# e = 65537

# d = inverse(e,p*q-p-q+1)

# print(d)
# fault = randbits(128)

# for c in range(100):
# 	if pow(c,e^fault,n) == pow(c,d^fault,n):
# 		print("Yes")
# 	else:
# 		print("No")



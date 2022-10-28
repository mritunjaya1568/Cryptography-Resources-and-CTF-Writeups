import requests
from gmpy2 import iroot
from Crypto.Util.number import *
from pwn import xor

def get_enc(pt):
  r=requests.post("http://challenges.uactf.com.au:30008/encrypt",json={"plaintext":pt}).json()
  return r['x'],r['N'],r['ciphertext']

x,N,ciphertext = get_enc('1234567890')

# print(x,N,ciphertext)

x = int(x)
N = int(N)
lest = []
for ct in ciphertext:
  lest.append(int(ct,16))


print(lest , len(lest))

flag = []
for val in lest:
  for i in range(256):
    r2 = (val * inverse(x ** i,N)) % N
    ans = iroot(r2,2)
    if ans[1] == True and int(ans[0]) < 2 ** 52:
      flag.append(i)

print(len(lest))
print(len(flag))

print(flag)

final_flag = xor(bytes(flag),b'1234567890')
print(final_flag)



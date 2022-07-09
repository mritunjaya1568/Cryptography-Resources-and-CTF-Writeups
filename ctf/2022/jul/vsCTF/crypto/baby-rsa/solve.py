from Crypto.Util.number import *
from Crypto.PublicKey import RSA
from sympy import nthroot_mod
from sympy.ntheory.modular import crt



ct = '0x459cc234f24a2fb115ff10e272130048d996f5b562964ee6138442a4429af847'
ct = int(ct,16)
print(ct)


f = open("pubkey.pem","rb")
pub_key = f.read()
key = RSA.import_key(pub_key)
print(key.has_private())

n = key.n
e = key.e

print(n,e)

p = 184980129074643957218827272858529362113
q = 283378097758180413812138939650885549231

assert p*q == n

lest1 = nthroot_mod(ct,e,p,True)
lest2 = nthroot_mod(ct,e,q,True)

result = []

for i in lest1:
	for j in lest2:
		result.append(crt([p,q],[i,j]))

for i in result:
	if b'vsctf' in long_to_bytes(i[0]):
		print(long_to_bytes(i[0]))




''' 
b'vsctf{5m411_Pr1m3_15_Un54f3!}' '''

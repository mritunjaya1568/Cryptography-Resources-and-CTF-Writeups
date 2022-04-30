from Crypto.Util.number import getPrime, inverse, bytes_to_long, long_to_bytes, GCD,inverse
from gmpy2 import iroot
n = 742449129124467073921545687640895127535705902454369756401331
e = 3
ct = 39207274348578481322317340648475596807303160111338236677373
p=752708788837165590355094155871
q=n//p
phi=(p-1)*(q-1)
d=inverse(e,phi)
m=pow(ct,d,n)
print(long_to_bytes(m).decode())

# (m,cor)=iroot(ct,e)
# if(cor==True):
# 	print(long_to_bytes(m).decode())
# print(len(str(n)))
# print(len(str(ct)))


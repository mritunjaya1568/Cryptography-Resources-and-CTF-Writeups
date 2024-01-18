from Crypto.Util.number import *
from secrets import FLAG

assert len(FLAG) == 44
FLAG_FORMAT = "bi0s"

NBITS = len(FLAG)<<2 # 44*4 = 176 

a = 0xBAD2C0DE # 3134374110
c = 0x6969 # 0x6969
m = 1<<NBITS # m = 2^176
seed = getRandomNBitInteger(NBITS) # 176 bit number
state = seed

ciphertext = []

for i,f in enumerate(FLAG):
    state = (state*a+c)%m #
    ciphertext.append((state>>(NBITS>>1))^^i^^ord(f)) # (state>>88) xor i xor f

public = [1]
for i in range(2, 91):
    public.append(public[-1]*i)
q = sum(public)
while True:
    r = getRandomInteger(100)
    if GCD(r, q) == 1:
        break

B = [r*i % q for i in public]

def encrypt(ct):
    blen = ct.bit_length()
    ct = bin(ct)[2:]
    ct = [int(i) for i in ct]
    ct = [ct[i]*B[i] for i in range(len(ct))]
    return blen, sum(ct)

ct = []
for i in ciphertext:
    ct.append(encrypt(i))

with open("ct.txt", "w") as f:
    f.write(str(ct))
print(r)
# r = 439336960671443073145803863477
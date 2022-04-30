from Crypto.Cipher import AES
from Crypto.Util.Padding import pad,unpad
import json
from time import time
from pwn import remote


wordlists = []

def functor():
    alphabet = b'0123456789abcdef'
    for a in range(16):
        for b in range(16):
            for c in range(16):
                for d in range(16):
                    word = b''
                    word += bytes([alphabet[a]])
                    word += bytes([alphabet[b]])
                    word += bytes([alphabet[c]])
                    word += bytes([alphabet[d]])
                    wordlists.append(word)

a = time()
functor()
b = time()


pt = pad(b'aaaaaaaaaaaaaaaa',16)

ct = 'd558a1e2f34c063306ea10bb67cdedb61475ab67e9b7192892f3e3d13bded34b'
ct = bytes.fromhex(ct)

print(pt, len(pt))

print(ct, len(ct))


const = b'cyb3rXm45!@#'


d1 , d2 = {} , {}

s1 , s2 = set(), set()


for k in wordlists:
    c1 = AES.new(const + k, mode = AES.MODE_ECB).encrypt(pt)
    c2 = AES.new(k + const, mode = AES.MODE_ECB).decrypt(ct)

    d1[c1] = k
    d2[c2] = k

    s1.add(c1)
    s2.add(c2)

s3 = s1 & s2
val = s3.pop()





flag = '86b5c22dc2c0f2cba808b4eecb79ff3bb40fd8cef19f13254cf5d94006e33b4b6d87c4567e5464ef830c74034cb3bea3d108718bec4d93d365686c87b4704fe36bb6426c7016381415f9f453711c7468d2a324ff19ead1fe3acc79c7816eb201'



cipher1 = AES.new(const + d1[val] ,mode = AES.MODE_ECB)
cipher2 = AES.new(d2[val] + const ,mode = AES.MODE_ECB)

flag = cipher1.decrypt(cipher2.decrypt(bytes.fromhex(flag)))

print(flag.decode())


'''https://www.youtube.com/watch?v=DZMv9XO4Nlk
HTB{m337_m3_1n_7h3_m1ddl3_0f_3ncryp710n}\x0c\x0c\x0c\x0c\x0c\x0c
'''

# flag = HTB{m337_m3_1n_7h3_m1ddl3_0f_3ncryp710n}





'''
Super strong encryption service approved by the elves X-MAS spirit.
Message for all the elves:
86b5c22dc2c0f2cba808b4eecb79ff3bb40fd8cef19f13254cf5d94006e33b4b6d87c4567e5464ef830c74034cb3bea3d108718bec4d93d365686c87b4704fe36bb6426c7016381415f9f453711c7468d2a324ff19ead1fe3acc79c7816eb201
Encrypt your text:
> {"pt":"61616161616161616161616161616161"}
d558a1e2f34c063306ea10bb67cdedb61475ab67e9b7192892f3e3d13bded34b
'''



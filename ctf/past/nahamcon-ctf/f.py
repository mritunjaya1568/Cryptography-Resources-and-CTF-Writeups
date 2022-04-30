'''

eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9.eyJ1c2VybmFtZSI6ICJhYWFhYWFhYWFhYWFhYWFhIn0.wN0kGlDUj5n8x6GGptROB2PskEeOHe-ONvXE6VDWevv96hqrSKtuHHX5lgr69UJedGwfEuOZFRKD1WL54xNm8g

eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9.eyJ1c2VybmFtZSI6ICJibmJiYmJiYmJiYmIifQ.wN0kGlDUj5n8x6GGptROB2PskEeOHe-ONvXE6VDWevuTrvu68M_SzerwEvMWzWjRtDcReH7RxiOUX2F3XI_iRw

eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9.eyJ1c2VybmFtZSI6ICIxMjMifQ.wN0kGlDUj5n8x6GGptROB2PskEeOHe-ONvXE6VDWevvnac7aBS8XFXVw_bEK7T7le6SoXCmnyoccFQZncNkyVw

eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9.eyJ1c2VybmFtZSI6ICIxMjMifQ.wN0kGlDUj5n8x6GGptROB2PskEeOHe-ONvXE6VDWevvnac7aBS8XFXVw_bEK7T7le6SoXCmnyoccFQZncNkyVw

'''



import base64

from Crypto.Util.number import long_to_bytes, bytes_to_long

import hashlib

import gmpy2

from ecdsa import SigningKey, NIST256p

import ecdsa



#n = 115792089210356248762697446949407573529996955224135760342422259061068512044369



# secp256r1/NIST256p

n = int("FFFFFFFF 00000000 FFFFFFFF FFFFFFFF BCE6FAAD A7179E84 F3B9CAC2 FC632551".replace(" ", ""), 16)

# secp256k1

#n = int("FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFE BAAEDCE6 AF48A03B BFD25E8C D0364141".replace(" ", ""), 16)



o1 = "eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9.eyJ1c2VybmFtZSI6ICJhYWFhYWFhYWFhYWFhYWFhIn0.wN0kGlDUj5n8x6GGptROB2PskEeOHe-ONvXE6VDWevv96hqrSKtuHHX5lgr69UJedGwfEuOZFRKD1WL54xNm8g".split(".")

o2 = "eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9.eyJ1c2VybmFtZSI6ICIxMjMifQ.wN0kGlDUj5n8x6GGptROB2PskEeOHe-ONvXE6VDWevvnac7aBS8XFXVw_bEK7T7le6SoXCmnyoccFQZncNkyVw".split(".")



sig1 = base64.urlsafe_b64decode(o1[2] + "==")

sig2 = base64.urlsafe_b64decode(o2[2] + "==")



r1 = bytes_to_long(sig1[:32])

s1 = bytes_to_long(sig1[32:])



r2 = bytes_to_long(sig2[:32])

s2 = bytes_to_long(sig2[32:])



z1 = bytes_to_long(hashlib.sha256(o1[0] + "." + o1[1]).digest())

z2 = bytes_to_long(hashlib.sha256(o2[0] + "." + o2[1]).digest())



sdiff_inv = gmpy2.invert(s2 - s1, n)

k = ( (z2 - z1) * sdiff_inv) % n



print("k = ", k)

secret_key = ((s1 * k - z1) * gmpy2.invert(r1, n)) % n

# Now that we got the secret key, we just re-encrypt it



G = ecdsa.NIST256p.generator

assert n == G.order()



sk = SigningKey.from_string(long_to_bytes(secret_key), curve=NIST256p, hashfunc=hashlib.sha256)

print(sk)

#base64.urlsafe_b64encode('{"alg": "ES256", "typ": "JWT"}') + "." + base64.urlsafe_b64encode('{"username": "admin"}')

my_message = "eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9" + "." + "eyJ1c2VybmFtZSI6ICJhZG1pbiJ9"

signature = sk.sign(my_message, k=k)

print "eyJhbGciOiAiRVMyNTYiLCAidHlwIjogIkpXVCJ9" + "." + "eyJ1c2VybmFtZSI6ICJhZG1pbiJ9" + "." + base64.urlsafe_b64encode(signature)


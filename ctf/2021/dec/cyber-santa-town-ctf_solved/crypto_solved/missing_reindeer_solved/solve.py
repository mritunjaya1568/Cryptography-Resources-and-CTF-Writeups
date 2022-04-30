from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from base64 import b64decode
from Crypto.Util.number import *
from gmpy2 import iroot

key = open("pubkey.pem", "r").read()
ct = open("secret.enc", "rb").read()
ct = bytes_to_long(b64decode(ct))

key = RSA.importKey(key)
ct = iroot(ct,3)
print(long_to_bytes(ct[0]).decode())

'''flag = We are in Antarctica, near the independence mountains.
HTB{w34k_3xp0n3n7_ffc896}  ''' 


''' flag = HTB{w34k_3xp0n3n7_ffc896} '''



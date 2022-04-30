#!/usr/bin/python3
from binascii import unhexlify
from Crypto.Cipher import AES
from Crypto.Protocol.SecretSharing import Shamir
from Crypto.Util.number import long_to_bytes,bytes_to_long

lest=[]
lest.append((1, long_to_bytes(132156498146518935546534654)))
lest.append((2, 861352498496153254961238645321268413658613864351))
lest.append((3, 3145756504701717246281836139538967176547517737056))
print(lest)
key2=Shamir.combine(lest,ssss=True)
# print(key2.decode())
str2="".join(chr(ch) for ch in key2)
print(str2)
# with open("enc.txt", "rb") as fi:
#     nonce, tag = [ fi.read(16) for x in range(2) ]
#     cipher = AES.new(key, AES.MODE_EAX, nonce)
#     try:
#         result = cipher.decrypt(fi.read())
#         cipher.verify(tag)
#         with open("clear2.txt", "wb") as fo:
#             fo.write(result)
#     except ValueError:
#         print("The shares were incorrect")
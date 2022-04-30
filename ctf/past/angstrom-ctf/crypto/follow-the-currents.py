import os
import zlib
from Crypto.Util.number import long_to_bytes, bytes_to_long

def keystream(i):
    key = long_to_bytes(i)
    if len(key) < 2:
        key = b'\x00' + key 
    index = 0 
    while True:
        index += 1
        if index >= len(key):
            key += zlib.crc32(key).to_bytes(4, 'big')  
        yield key[index]

for i in range(256**2):  
    plain = b''
    k = keystream(i)
    with open("enc","rb") as f:
        enc = f.read()
        f.close()   
    for ci,c in enumerate(enc):
        plain += long_to_bytes( c ^ next(k) )
    if b'actf{' in plain:
        print(i)
        print(plain)
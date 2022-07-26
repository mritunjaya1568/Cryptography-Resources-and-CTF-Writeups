from Crypto.Cipher import AES
from Crypto.Util.Padding import pad,unpad
import requests 
from pwn import xor

r = requests.get('https://aes.cryptohack.org/flipping_cookie/get_cookie/')
ct = bytes.fromhex(r.json()["cookie"])
print(ct)
iv1 = ct[0:16]
ct = ct[16:]
print(iv1, ct , len(iv1),len(ct))

p1 = b'admin=False;expi'
p2 = b'admin=True;expir'
assert len(p1) == 16 and len(p2) == 16

iv2 = xor(p1,p2)
iv2 = xor(iv2,iv1)

r2 = requests.get(f'https://aes.cryptohack.org/flipping_cookie/check_admin/{ct.hex()}/{iv2.hex()}/')
print(r2.json())


''' flag = {'flag': 'crypto{4u7h3n71c4710n_15_3553n714l}'} '''






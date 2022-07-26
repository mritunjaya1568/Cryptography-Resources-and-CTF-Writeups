from Crypto.Cipher import AES
import requests
from pwn import xor

site = f"https://aes.cryptohack.org/lazy_cbc/"

pt = "a" * 31
pt = pt.encode() + b'\xc7'
print(pt)

site1 = f'encrypt/{pt.hex()}/'
r1 = requests.get(site + site1)
print(r1.json())


ct1 = '0e5111319756ef063c1d8840d45a4222b633995822f2bd70f128149b28b244dd'
ct1 = bytes.fromhex(ct1)
print(ct1)

ct1 = ct1[0:16] + ct1[0:16] + ct1[16:]
print(ct1, len(ct1))

# now coming to main part 

site2 = f'receive/{ct1.hex()}/'
r21 = requests.get(site + site2)
print(r21.json())

pt21 = '616161616161616161616161616161619b93ed9a4cf51a6ab70d0f15263e47f6616161616161616161616161616161c7'
pt21 = bytes.fromhex(pt21) 

key = xor(pt21[0:16],pt21[16:32])
key = xor(key,ct1[0:16])

print(key)

# key = b'\xf4\xa3\x9d\xca\xba\xc2\x94\r\xeaq\xe64\x93\x05d\xb5'

site3 = f'/get_flag/{key.hex()}/'
final = requests.get(site + site3)
flag = final.json()["plaintext"]
print(bytes.fromhex(flag))

''' 
flag = b'crypto{50m3_p30pl3_d0n7_7h1nk_IV_15_1mp0r74n7_?}'
'''






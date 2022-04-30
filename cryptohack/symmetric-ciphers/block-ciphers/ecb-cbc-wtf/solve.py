from Crypto.Cipher import AES
import requests
from pwn import xor

r = requests.get('http://aes.cryptohack.org/ecbcbcwtf/encrypt_flag/')

ct = r.json()["ciphertext"]
print(ct)

ct = bytes.fromhex(ct)

print(len(ct))

iv = ct[0:16]

ct = ct[16:]

c = []
c.append(iv)

for i in range(0,len(ct),16):
	c.append(ct[i:i+16])

p = b''


for i in range(1,len(c)):
	p += xor(c[i-1],bytes.fromhex(requests.get(f'http://aes.cryptohack.org/ecbcbcwtf/decrypt/{c[i].hex()}/').json()["plaintext"]))

print(p.decode())


# flag = crypto{3cb_5uck5_4v01d_17_!!!!!}




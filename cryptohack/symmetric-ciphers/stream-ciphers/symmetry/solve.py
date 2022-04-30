import requests
from Crypto.Cipher import AES

r = requests.get('https://aes.cryptohack.org/symmetry/encrypt_flag/')
ct = r.json()["ciphertext"]
iv = ct[0:32]
print(iv)
ct = ct[32:]


string = f'https://aes.cryptohack.org/symmetry/encrypt/{ct}/{iv}'
r2 = requests.get(string)
print(r2.json())

pt = r2.json()["ciphertext"]
pt = bytes.fromhex(pt)
print(pt)


''' b'crypto{0fb_15_5ymm37r1c4l_!!!11!}' '''
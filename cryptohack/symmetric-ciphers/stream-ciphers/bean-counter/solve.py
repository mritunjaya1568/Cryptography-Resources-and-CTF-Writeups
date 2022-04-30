import requests
from Crypto.Cipher import AES
from pwn import xor

r = requests.get('https://aes.cryptohack.org/bean_counter/encrypt/')
ct = r.json()["encrypted"]
ct = bytes.fromhex(ct)

first_block = ct[:16]
print(first_block)

val = '89504E470D0A1A0A0000000D49484452' # png file header
val = bytes.fromhex(val)
print(val,len(val))

EkIV = xor(first_block,val)
print(EkIV,len(EkIV))

final = xor(ct,EkIV)
with open("flag.png",'wb') as f:
	f.write(final)


# flag = crypto{hex_bytes_beans}








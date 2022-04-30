from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
import requests

# (payload+flag) length should be 31 bytes everytime so that it can used in line 11
def functor(payload, flag):	
		r = requests.get(f'http://aes.cryptohack.org/ecb_oracle/encrypt/{payload.hex()}/')
		ct = bytes.fromhex(r.json()["ciphertext"])
		block_ct = ct[16:32]
		for i in range(256):
			pt = payload + flag + bytes([i])
			r = requests.get(f'http://aes.cryptohack.org/ecb_oracle/encrypt/{pt.hex()}/')
			ct2 = bytes.fromhex(r.json()["ciphertext"])
			block_ct2 = ct2[16:32]
			if block_ct == block_ct2:
				return bytes([i])
		return b"ERROR"


# r = requests.get('http://aes.cryptohack.org/ecb_oracle/encrypt/00/')
# val = r.json()["ciphertext"]
# val = bytes.fromhex(val)
# print(val , len(val))

flag = b''


for i in range(31,1,-1):
	payload = b'a'*i
	char = functor(payload, flag)
	print(char)
	flag += char


print(flag)


'''b'crypto{p3n6u1n5_h473_3cb}\x01ERRORERRORERRORERROR'
'''

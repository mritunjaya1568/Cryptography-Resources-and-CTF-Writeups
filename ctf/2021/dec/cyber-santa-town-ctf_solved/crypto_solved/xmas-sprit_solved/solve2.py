from Crypto.Util.number import *
from english_words import english_words_lower_alpha_set as words

# print(len(words))

def decrypt(ct):
	mod = 256

	# we got a b values by doing brute force on first 4 bytes 
	# and if it is equal to '%PDF' then it's a valid pdf file and here you go 
	# you got a b values
	a = 169
	b = 160
	# for a in range(1,256,2):
	# 	for b in range(1,257):
	res = b''
	for byte in ct:
		dec = ( (byte-b+mod)%mod * inverse(a,mod) ) % mod
		res += bytes([dec])
	with open('decrypted.pdf', 'wb') as f:
		f.write(res)


f = open('encrypted.bin','rb')
string = f.read()
decrypt(string)


# flag = HTB{4ff1n3_c1ph3r_15_51mpl3_m47h5}
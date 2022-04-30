from Crypto.Util.number import *
from english_words import english_words_lower_alpha_set as words

# print(len(words))

def decrypt(ct):
	mod = 256

	for a in range(1,256,2):
		for b in range(1,257):
			res = b''
			flag = True
			ignore = [9,10,13,132,214,219,249,254,157]
			for byte in ct:
				dec = ( (byte-b+mod)%mod * inverse(a,mod) ) % mod
				if byte < 32 or byte > 128:
					if byte not in ignore:
						print(byte)
						flag = False
						break
				res += bytes([dec])


			if flag == False:
				continue
			print(res, len(res))
			# try:
			# 	# pdf = res.decode()
			# 	print(res)
			# 	# print(a,b)
			# except:
			# 	pass


f = open('encrypted.bin','rb')
string = f.read()[0:10]
decrypt(string)
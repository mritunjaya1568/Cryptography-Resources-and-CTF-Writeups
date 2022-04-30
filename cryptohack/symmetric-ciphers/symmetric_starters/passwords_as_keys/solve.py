import hashlib
from Crypto.Cipher import AES
import requests

# r = requests.get('https://gist.githubusercontent.com/wchargin/8927565/raw/d9783627c731268fb2935a731a618aa8e95cf465/words')
# wordlists = list(r.text.split('\n'))

# with open("wordlists.txt",'w') as f:
# 	for word in wordlists:
# 		f.write(str(word).strip()+'\n')


# print(len(wordlists))




# ciphertext = requests.get('http://aes.cryptohack.org/passwords_as_keys/encrypt_flag/').json()["ciphertext"]
# print(ciphertext)

ciphertext = 'c92b7734070205bdf6c0087a751466ec13ae15e6f1bcdd3f3a535ec0f4bbae66'

with open("./wordlists.txt",'r') as f:
	wordlists = [w.strip() for w in f.readlines()]



# If you want to send requests to the server then use this



# for keyword in wordlists:
# 	key = hashlib.md5(keyword.encode()).digest().hex()
# 	string = f'http://aes.cryptohack.org/passwords_as_keys/decrypt/{ciphertext}/{key}/'
# 	try:
# 		print(cnt)
# 		flag = requests.get(string).json()["plaintext"]
# 		flag = bytes.fromhex(flag)
# 		if flag.find(b'crypto')!= -1:
# 			break
# 		cnt+=1
# 	except:
# 		print("exceptions")

# flag = bytes.fromhex(flag)
# print(flag)




#for local hosting use this


# print(wordlists)

ciphertext = bytes.fromhex(ciphertext)
for word in wordlists:
	key = hashlib.md5(word.encode()).digest()
	cipher = AES.new(key , AES.MODE_ECB)
	try:
		flag = cipher.decrypt(ciphertext)
		if b'crypto' in flag:
			print(flag.decode())
			break
	except ValueError as e:
		print(str(e))



'''flag = crypto{k3y5__r__n07__p455w0rdz?}'''




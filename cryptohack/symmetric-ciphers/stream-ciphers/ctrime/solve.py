# https://en.wikipedia.org/wiki/CRIME
# https://ctftime.org/writeup/11327

# check these slides too 
# http://www.hpcc.ecs.soton.ac.uk/dan/talks/bullrun/Crime_slides.pdf


# https://gist.github.com/stamparm/3698401 - check this here , so start with a bigger body
# with longer body it practically detects the whole cookie everytime.



# https://shainer.github.io/crypto/2017/01/02/crime-attack.html
# https://github.com/shainer/matasano/blob/master/set7/ch51.py
# https://crypto.stackexchange.com/questions/38047/compression-ratio-side-channel


import requests
import string

padding = b""
for i in range(130,200):
	padding += chr(i).encode()

charset = string.ascii_lowercase + string.digits + "{}_"
charset = charset.encode()

print(padding , charset)

known_flag = b'c'
candidate = b'a'
pt = padding + candidate + known_flag + padding
r = requests.get(f'https://aes.cryptohack.org/ctrime/encrypt/{pt.hex()}/')
print(len(r.json()["ciphertext"]))

while True:
	best_candidate = None
	best_len = 100000
	count = 0
	candidate_list = []
	for candidate in charset:
		pt = padding + chr(candidate).encode() + known_flag + padding
		r = requests.get(f'https://aes.cryptohack.org/ctrime/encrypt/{pt.hex()}/')
		length = len(r.json()["ciphertext"])
		if length < best_len and candidate != known_flag[0]:
			best_candidate = candidate
			best_len = length
			count = 1
			candidate_list = []
			candidate_list.append(candidate)
		elif length == best_len:
			count += 1
			candidate_list.append(candidate)

	known_flag = chr(best_candidate).encode() + known_flag
	print(known_flag)
	print(candidate_list , count)





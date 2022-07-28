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
for i in range(130,150):
	padding += chr(i).encode()

charset = string.ascii_lowercase + string.digits + "{}_"
charset = charset.encode()

print(padding , charset)

known_flag = b'crypto{CRIME_571ll_p4y5}'
candidate = b'a'
pt = padding + candidate + known_flag + padding
r = requests.get(f'https://aes.cryptohack.org/ctrime/encrypt/{pt.hex()}/')
print(len(r.json()["ciphertext"]))

while True:
	best_candidate = None
	best_len = 100000
	count = 0
	candidate_list = []
	for candidate in range(30,128):
		pt = known_flag + chr(candidate).encode() * 5
		r = requests.get(f'https://aes.cryptohack.org/ctrime/encrypt/{pt.hex()}/')
		length = len(r.json()["ciphertext"])
		if length < best_len:
			best_candidate = candidate
			best_len = length
			count = 1
			candidate_list = []
			candidate_list.append(candidate)
		elif length == best_len:
			count += 1
			candidate_list.append(candidate)

	known_flag = known_flag + chr(best_candidate).encode()
	print(known_flag)
	print(candidate_list , count)






''' b'crypto{C'
[67, 99, 123] 3
b'crypto{CR'
[67, 82, 99] 3
b'crypto{CRI'
[73, 82, 99] 3
b'crypto{CRII'
[73, 77, 99] 3
b'crypto{CRIME'
[69, 77, 99] 3
b'crypto{CRIMEE'
[69, 95, 99] 3
b'crypto{CRIME_5'
[53, 95, 99] 3
b'crypto{CRIME_55'
[53, 55, 99] 3
b'crypto{CRIME_571'
[49, 55, 99] 3
b'crypto{CRIME_571l'
[108] 1
b'crypto{CRIME_571ll'
[108] 1
b'crypto{CRIME_571lll'
[108] 1
b'crypto{CRIME_571ll__'
[95, 99, 112] 3
b'crypto{CRIME_571ll_p4'
[52, 99, 112] 3
b'crypto{CRIME_571ll_p44'
[52, 99, 121] 3
b'crypto{CRIME_571ll_p4y5'
[53, 99, 121] 3
b'crypto{CRIME_571ll_p4y55'
[53, 99, 125] 3

'''

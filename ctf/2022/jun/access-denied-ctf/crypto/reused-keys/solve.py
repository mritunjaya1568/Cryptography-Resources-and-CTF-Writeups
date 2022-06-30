from pwn import xor
from english_words import english_words_lower_alpha_set as words
import re


flag = '65f32f851cdb20eee875eea5a9a30f826cfd247eb550dcc89d1d4cdf952f5c28ca5f162355567fd262bb96'
encrypted = '70f8259330c137d4e873ff9ea6a559ab2dea1a60d943859aa545578395301d28a0741d1e065a24d45cb19f'
#  some_simple_text  "this_is_not_t" last letter also 't'

flag = bytes.fromhex(flag)
ct = bytes.fromhex(encrypted)

final = xor(flag,ct)

test = b"this_is_not_"

# text = xor(final,b"")
# print(text)


for word in words:
	if word[0] != 't':
		continue
	test = b"this_is_not_" + word.encode()
	text = xor(final[0:len(test)],test)
	x = re.search(r'[^a-z0-9_]',text.decode()[13:])
	if x:
		continue
	else:
		print(text)


''' Depends on the length of the XOR key and if you can guess what the data is.

If you know that the XOR is performed every byte, then you can try all the 256 possible values and see which one decrypted correctly.

If you want to automate the "See which one decrypted correctly" operation, you need to know about the nature of the data. If it is English text, you can parse the text and see if it consists of words found in a dictionary.

If it is a well known file format, you can get the encryption key by XORing the known file header with the encrypted one.

For example all JPEGs start with "JFIF" all EXE files start with "MZ" and so on.
If you XOR "JFIF" with the first four bytes of a XOR encrypted JPEG file, you can get the first 4 bytes of the XOR key.'''





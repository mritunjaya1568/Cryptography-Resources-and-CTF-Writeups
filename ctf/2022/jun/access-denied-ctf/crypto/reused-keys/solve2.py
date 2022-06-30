'''https://pypi.org/project/english-words/'''
''' https://www.sololearn.com/Discuss/2669803/is-there-any-library-in-python-that-contains-all-the-english-words'''
''' https://www.datasciencebytes.com/bytes/2014/11/03/get-a-list-of-all-english-words-in-python/'''
''' https://docs.python.org/3/library/re.html#re.search'''
''' https://github.com/Vishal-Kancharla/One-Time-Pad-Attack'''
''' https://travisdazell.blogspot.com/2012/11/many-time-pad-attack-crib-drag.html'''


from pwn import xor
from english_words import english_words_lower_alpha_set as engwords
import re
import string
from nltk.corpus import words
from itertools import combinations_with_replacement

word_list = words.words()
char_set = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_{}'
print(char_set)

flag = '65f32f851cdb20eee875eea5a9a30f826cfd247eb550dcc89d1d4cdf952f5c28ca5f162355567fd262bb96'
encrypted = '70f8259330c137d4e873ff9ea6a559ab2dea1a60d943859aa545578395301d28a0741d1e065a24d45cb19f'
#  some_simple_text  "this_is_not_t" last letter also 't'

flag = bytes.fromhex(flag)
ct = bytes.fromhex(encrypted)

final = xor(flag,ct)

flag_text = b"accessdenied"
test = b"this_is_not_"



if 'hs' in engwords:
	print("yes")

engwords1 = [x for x in word_list if len(x)==1]
engwords2 = [x for x in word_list if len(x)==2]
engwords3 = [x for x in word_list if len(x)==3]
engwords4 = [x for x in word_list if len(x)==4]
engwords5 = [x for x in word_list if len(x)==5]


for tup in list(combinations_with_replacement(char_set,1)):
	string = "".join(tup)
	temp = flag_text + string.encode()
	test2 = xor(temp,final[0:len(temp)])
	word = test2[len(test):].decode()
	if word in engwords1:
		print(test2)

for tup in list(combinations_with_replacement(char_set,2)):
	string = "".join(tup)
	temp = flag_text + string.encode()
	test2 = xor(temp,final[0:len(temp)])
	word = test2[len(test):].decode()
	if word in engwords2:
		print(test2)

for tup in list(combinations_with_replacement(char_set,3)):
	string = "".join(tup)
	temp = flag_text + string.encode()
	test2 = xor(temp,final[0:len(temp)])
	word = test2[len(test):].decode()
	if word in engwords3:
		print(test2)

for tup in list(combinations_with_replacement(char_set,4)):
	string = "".join(tup)
	temp = flag_text + string.encode()
	test2 = xor(temp,final[0:len(temp)])
	word = test2[len(test):].decode()
	if word in engwords4:
		print(test2)

# for tup in list(combinations_with_replacement(char_set,5)):
# 	string = "".join(tup)
# 	temp = flag_text + string.encode()
# 	test2 = xor(temp,final[0:len(temp)])
# 	word = test2[len(test):].decode()
# 	if word in engwords5:
# 		print(test2)

# for r in range(1,7):
# 	list(combinations_with_replacement())

# key = xor(ct,)


# text = xor(final,b"")
# print(text)


def only_english_words(word):
	char_set = string.ascii_letters + string.digits + '_{' 
	return all((True if x in char_set else False for x in word))





# for word in word_list:
# 	if word[0] != 't':
# 		continue
# 	test = b"this_is_not_" + word.encode()
# 	text = xor(final[0:len(test)],test)

# 	if only_english_words(text.decode()):
# 		print(text)






from Crypto.Util.number import *
import json
from pwn import *

def sample(r):
	r.sendline('{"option":"reset"}')
	r.recvline()
	r.sendline('{"option":"get_sample"}')
	dictionary = json.loads(r.recvline().decode().strip())
	return dictionary['a'],dictionary['b']

IP = "socket.cryptohack.org"
PORT = 13390

r = remote(IP, PORT)
print("connected")

q = 127

dect = {}
for i in range(28):
	dect[i] = set()


lest = [68, 44, 106, 63, 32, 36, 16, 72, 77, 55, 43, 113, 5, 91, 93, 13, 116, 23, 55, 64, 113, 112, 93, 116, 88, 38, 57, 74]
# print(len(lest)) #28

print(r.recvline())

a,b = sample(r)

while a != lest:
	a,b = sample(r)

finala = a
finalb = b

print(finala,finalb)

for j in range(400):

	netsum = 0
	checkerflag = -1
	a1,b1 = sample(r)
	for i in range(len(finala)):
		val = a1[i] - finala[i]
		if val != 0:
			netsum += val
			checkerflag = i

	if checkerflag != -1:
		sect = set()
		for i in range(1,6):
			poss = (inverse(netsum,q) * (b1 - finalb + i-3))%q
			sect.add(poss)
		if len(dect[checkerflag]) == 0:
			dect[checkerflag] = dect[checkerflag] | sect
		else:
			dect[checkerflag] = dect[checkerflag] & sect


print(dect)

''' {0: {99}, 1: {114}, 2: {121}, 3: {112}, 4: {116}, 5: {111}, 6: {123}, 7: {102}, 8: {52}, 9: {117}, 10: {108}, 11: {116}, 12: {95}, 13: {52}, 14: {116}, 15: {116}, 16: {97}, 17: {99}, 18: {107}, 19: {53}, 20: {95}, 21: {48}, 22: {110}, 23: {95}, 24: {108}, 25: {119}, 26: {51}, 27: {125}}
'''

dect = {0: {99}, 1: {114}, 2: {121}, 3: {112}, 4: {116}, 5: {111}, 6: {123}, 7: {102}, 8: {52}, 9: {117}, 10: {108}, 11: {116}, 12: {95}, 13: {52}, 14: {116}, 15: {116}, 16: {97}, 17: {99}, 18: {107}, 19: {53}, 20: {95}, 21: {48}, 22: {110}, 23: {95}, 24: {108}, 25: {119}, 26: {51}, 27: {125}}
flag = ""
for i in range(28):
	flag += chr(next(iter(dect[i])))

print(flag)

''' crypto{f4ult_4ttack5_0n_lw3} '''







''' Welcome to the LWE sample generator! Retrieve a sample using the 'get_sample' option, or reset the distribution using the 'reset' option.
{"option":"get_sample"}
{"a": [68, 44, 106, 63, 82, 36, 16, 72, 77, 55, 43, 113, 5, 91, 93, 13, 116, 23, 55, 64, 113, 112, 93, 116, 88, 38, 57, 74], "b": 58}
{"option":"reset"}
{"success": "The distribution has been reset"}
{"option":"get_sample"}
{"a": [68, 44, 106, 63, 32, 36, 16, 72, 77, 55, 43, 113, 5, 91, 93, 13, 116, 23, 55, 43, 113, 112, 93, 116, 88, 38, 57, 74], "b": 3}
{"option":"reset"}
{"success": "The distribution has been reset"}
{"option":"get_sample"}
{"a": [68, 44, 106, 63, 32, 36, 16, 72, 77, 55, 43, 113, 5, 91, 93, 13, 116, 23, 55, 64, 113, 59, 93, 116, 88, 38, 57, 74], "b": 96}

'''

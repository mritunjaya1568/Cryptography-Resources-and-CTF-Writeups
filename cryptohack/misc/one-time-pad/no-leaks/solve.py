from pwn import *
from Crypto.Util.number import *
import base64
import json

def bencode(input):
	return base64.b64encode(input)

def bdecode(input):
	return base64.b64decode(input)

def check():
	for i in range(20):
		print(dect[i])

dect = {}
for i in range(20):
	dect[i] = set()
	for j in range(256):
		dect[i].add(j)


IP = "socket.cryptohack.org"
PORT = 13370

r = remote(IP,PORT)
print("connected")

print(r.recvline())

for i in range(2000):
	r.sendline('{"msg": "request"}')
	ct = r.recvline().decode().strip()
	ct = json.loads(ct)
	try:
		string = bdecode(ct["ciphertext"])
		for j in range(len(string)):
			dect[j].discard(string[j])
	except:
		print("fail")

print(dect)

''' {0: {99}, 1: {114}, 2: {121}, 3: {112}, 4: {116}, 5: {111}, 6: {123}, 7: {117}, 8: {110}, 9: {114}, 10: {52}, 11: {110}, 12: {100}, 13: {48}, 14: {109}, 15: {95}, 16: {48}, 17: {55}, 18: {112}, 19: {125}}
'''

dect2 = {0: {99}, 1: {114}, 2: {121}, 3: {112}, 4: {116}, 5: {111}, 6: {123}, 7: {117}, 8: {110}, 9: {114}, 10: {52}, 11: {110}, 12: {100}, 13: {48}, 14: {109}, 15: {95}, 16: {48}, 17: {55}, 18: {112}, 19: {125}}

flag = ""
for i in range(len(dect2)):
	for j in dect2[i]:
		flag += chr(j)



''' crypto{unr4nd0m_07p} '''


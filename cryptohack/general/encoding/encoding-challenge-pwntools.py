#!/usr/bin/python3
from pwn import *
import codecs
import base64
import json
from Crypto.Util.number import long_to_bytes
HOST="socket.cryptohack.org"
PORT=13377
conn=remote(HOST,PORT)
while 1>0:
	str1=conn.recvuntil('\n')
	str1=json.loads(str1.decode())#when we do loads of received input this comes of type dict so we can use dict['type'] on it
	print(str1)
	print(type(str1))
	if str1['type']=='base64':
		decoded=base64.b64decode(str1['encoded'].encode()).decode()
	elif str1['type']=='hex':
		decoded=bytes.fromhex(str1['encoded']).decode()
	elif str1['type']=='rot13':
		decoded=codecs.decode(str1['encoded'],'rot_13')
	elif str1['type']=='bigint':
		decoded=long_to_bytes(int(str1['encoded'],16)).decode()
	elif str1['type']=='utf-8':
		decoded=""
		for i in str1['encoded']:
			decoded+="".join(chr(i))
	output=json.dumps({"decoded": decoded})
	print(output)
	conn.send(output)
	#here is the flag
	#{'flag': 'crypto{3nc0d3_d3c0d3_3nc0d3}'}

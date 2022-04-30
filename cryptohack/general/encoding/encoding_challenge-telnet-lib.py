#!/usr/bin/python3
'''Now you've got the hang of the various encodings you'll be encountering, let's have a look at automating it.

Can you pass all 100 levels to get the flag?

The 13377.py file attached below is the source code for what's running on the server. The pwntools_example.py file provides the start of a solution using the incredibly convenient pwntools library. which you can use if you like. pwntools however is incompatible with Windows, so telnetlib_example.py is also provided.

For more information about connecting to interactive challenges, see the FAQ. Feel free to skip ahead to the cryptography if you aren't in the mood for a coding challenge!

Connect at nc socket.cryptohack.org 13377'''
import telnetlib
import base64
import codecs
import json
from Crypto.Util.number import long_to_bytes
HOST="socket.cryptohack.org"
PORT=13377
tn=telnetlib.Telnet(HOST,PORT)

while 1>0:
	str1=tn.read_until(b'\n')
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
	tn.write(output.encode())
#{'flag': 'crypto{3nc0d3_d3c0d3_3nc0d3}'}
# so here is the flag 
#enjoy it

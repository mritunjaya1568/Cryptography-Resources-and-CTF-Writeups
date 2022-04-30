#!/usr/bin/python3.8
import telnetlib
import json

HOST="socket.cryptohack.org"
PORT="11112"

tn=telnetlib.Telnet(HOST,PORT)
#print(tn.read_all().decode('ascii'))
print(tn.read_until(b"ok.\n"))
print(tn.read_until(b"\n"))

request={"buy":"flag"}
print(type(request))
print(request)
request2=json.dumps(request)
print(type(request2))
print(request2)
request2=request2.encode()+b'\n'
tn.write(request2)
line=tn.read_until(b"\n")
print(line)
print(line.decode())
print(line.decode('ascii'))
print(json.loads(line.decode()))

#output for this
'''b"Welcome to netcat's flag shop!\nWhat would you like to buy?\nI only speak JSON, I hope that's ok.\n"
b'\n'
<class 'dict'>
{'buy': 'flag'}
<class 'str'>
{"buy": "flag"}
b'{"flag": "crypto{sh0pp1ng_f0r_fl4g5}"}\n'
{"flag": "crypto{sh0pp1ng_f0r_fl4g5}"}

{"flag": "crypto{sh0pp1ng_f0r_fl4g5}"}

{'flag': 'crypto{sh0pp1ng_f0r_fl4g5}'}
'''


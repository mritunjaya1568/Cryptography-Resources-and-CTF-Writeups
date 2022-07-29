from pwn import *
from Crypto.Util.number import *
import json

HOST = "socket.cryptohack.org"
PORT = 13399

r = remote(HOST , PORT)
print(r.recvline())

ct = b'\x00' * 28

r.sendline('{"option":"reset_password","token":"00000000000000000000000000000000000000000000000000000000"}')
print(r.recvline())


# CFB8 is not bijective for repeating bytes, hence zero will not come up occasionally

for i in range(256):
	password = chr(i) * 8
	send = {"option":"authenticate", "password" : password}
	r.sendline(json.dumps(send))
	print(r.recvline())



''' b'{"msg": "Welcome admin, flag: crypto{Zerologon_Windows_CVE-2020-1472}"}\n'
'''
# flag = crypto{Zerologon_Windows_CVE-2020-1472}




# {"option":"authenticate" , "password" : "hello" }
# {"option":"reset_connection"}

# {"option":"reset_password","token":"hex_value"}


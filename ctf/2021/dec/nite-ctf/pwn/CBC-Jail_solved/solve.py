# nc cbc-jail.challenge.cryptonite.team 1337

from pwn import *
import os, base64, sys
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad


host = "cbc-jail.challenge.cryptonite.team"
port = 1337

LOCAL = False

if LOCAL:
    host = "localhost"
    port = 1337

r = remote(host,port)
print("connected")


lest = r.recvlines(6)
print(lest)
ct = lest[-1].decode()
ct = bytes.fromhex(ct)
IV = ct[0:16]
ct = ct[16:]


pt = b'trapped_forever'
pt = pad(pt,16)


print(f"plaintext:{pt}")
print(f"IV:{IV}", len(IV))
print(f"ciphertext:{ct}",len(ct))


def functor(msg):
	msg = pad(msg,16)
	iv = xor(xor(msg,IV),pt)
	inp = iv + ct
	inp = inp.hex()
	return inp




while True:
	print(r.recvuntil(b">>"))
	inp = input()
	inp = inp.encode()
	inp = functor(inp)
	r.sendline(inp)


# r.interactive()
print("Bye bye")
r.close()



'''[+] Opening connection to cbc-jail.challenge.cryptonite.team on port 1337: Done
connected
[b'== proof-of-work: disabled ==', b'Welcome to Prison.', b'A mad cryptographer thought it would be cool to mess your shell up.', b'Lets see if you can "crack" your way out of here', b"As a gift we'll give you a sample encryption", b'c718b2698e418e5c91e185e556a007d8633b04def32933ef23d4b76f4fd27cd3']
plaintext:b'trapped_forever\x01'
IV:b'\xc7\x18\xb2i\x8eA\x8e\\\x91\xe1\x85\xe5V\xa0\x07\xd8' 16
ciphertext:b'c;\x04\xde\xf3)3\xef#\xd4\xb7oO\xd2|\xd3' 16
b'>>'
banned=[]
b'>>'
a=os.listdir()
b'>>'
print(a)
b"['flag.txt', 'server.py', 'nite{Th3__gr3at_esc4p3}']\n>>"
 
'''



''' We can also get the KEY '''
'''set the IV to IV xor pad("print(KEY)") xor ciphertext 
when you send this IV along with the old ciphertext it will become print(KEY)'''
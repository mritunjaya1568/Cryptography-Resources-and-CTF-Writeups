from Crypto.PublicKey import RSA
from Crypto.Util.number import *

f = open("private.pem",'rb')
val = f.read()
x = val.find(b"\xe2\x9d\x8c")
part1 = val[0:x]
part2 = val[x+3:]

for i in range(1,129):
	part = part1+chr(i).encode()+part2
	try:
		key = RSA.import_key(part)
		n = key.n
		e = key.e
		d = key.d
		print(n,e,d,sep="\n")
		ct = open("flag.enc","rb")
		ct = bytes_to_long(ct.read())
		print(ct)
		ct = pow(ct,d,n)
		ct = long_to_bytes(ct)
		print(ct)
	except:
		pass


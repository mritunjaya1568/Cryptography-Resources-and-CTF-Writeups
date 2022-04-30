import os
import zlib
import sys
def keystream():
	key = os.urandom(2)
	#print(key)
	index = 0
	while 1:
		index+=1
		if index >= len(key):
			key += zlib.crc32(key).to_bytes(4,'big')
		yield key[index]
ciphertext = []
k=keystream()

#print(sys.getsizeof(k))
print(next(k))

# with open("plain","rb") as f:
# 	plain = f.read()
# 	assert b"actf{" in plain
# 	k = keystream()
# 	for i in plain:
# 		ciphertext.append(i ^ next(k))
# with open("enc","wb") as g:
# 	g.write(bytes(ciphertext))
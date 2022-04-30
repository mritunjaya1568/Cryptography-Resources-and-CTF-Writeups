#!/usr/bin/python3
import sys
sub_str="character"
for i in range(256):	
	key=i
	file1_b = bytearray(open(sys.argv[1], 'rb').read())
	size = len(file1_b)
	xord_byte_array = bytearray(size)
	for j in range(size):
		xord_byte_array[j] = file1_b[j] ^ (key)
	string=xord_byte_array.decode()
	start=0
	while 1>0:
		if string.find(sub_str,start)==-1:
			break
		else:
			index=string.find(sub_str,start)
			x=index
			print(f"key is={chr(key)}",index,sep=":",end=" ")
			print(string[x-5:x+10])
			start=index+1
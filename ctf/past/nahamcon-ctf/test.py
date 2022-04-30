import sys
sub_str="character"
key=102
file1_b =bytearray(open(sys.argv[1], 'rb').read())
size = len(file1_b)
xord_byte_array =bytearray(size)
key=102
for i in range(size):
	xord_byte_array[i] = file1_b[i] ^ (key)
string=xord_byte_array.decode()
print(string)
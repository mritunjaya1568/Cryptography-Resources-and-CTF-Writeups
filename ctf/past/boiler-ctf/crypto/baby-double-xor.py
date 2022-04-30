from pwn import xor
str1=open("chal.enc","rb").read()
str2=b"e\x0b\r\xf6"
str3=xor(str1,str2)
str4="".join(chr(ch) for ch in str3)
print(str4)
# str2=str2.encode()
# for i in range(len(str1)):
# 	key=xor(str1[i:i+len(str2)],str2)
# 	msg=xor(str1,key)
# 	str4=""
# 	str4="".join(chr(ch) for ch in msg)
# 	for x in str4:
# 		if "bctf{" in x:
# 			print(x)

	# if str2.decode() in str4:
	# 	print(key,str4)
#print(xor(str1,str2).decode())
# 
# str5="".join(chr(ch) for ch in p2)
# print(str5)





# def fun(string):
# 	for i in string:
# 		if ord(i)>0x7F and ord(i)<0x2F:
# 			return False
# 	return True

	



# 	ab ab ab ab ab 

# 	xyz xyz xyz

# 	ababab ababab ababab
# 	xyzxyz xyzxyz xyzxyz




# ab ab ab ab
# cd cd cd cd
# a^c b^d a^c b^d 
# m=abcdefgh


# "bctf{"


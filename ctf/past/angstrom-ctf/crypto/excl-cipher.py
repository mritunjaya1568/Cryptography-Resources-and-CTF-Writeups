from pwn import xor
str1="ae27eb3a148c3cf031079921ea3315cd27eb7d02882bf724169921eb3a469920e07d0b883bf63c018869a5090e8868e331078a68ec2e468c2bf13b1d9a20ea0208882de12e398c2df60211852deb021f823dda35079b2dda25099f35ab7d218227e17d0a982bee7d098368f13503cd27f135039f68e62f1f9d3cea7c"
str2="actf{"
str1=bytes.fromhex(str1)
str2=str2.encode()
for i in range(len(str1)):
	key=xor(str1[i:i+len(str2)],str2)
	msg=xor(str1,key)
	# # print(msg)
	# for ch in msg:
	#  	print(chr(ch),end="")
	str4=""
	str4="".join(chr(ch) for ch in msg)
	if str2.decode() in str4:
		print(key,str4)
#print(xor(str1,str2).decode())
# 
p2=b'\xedH\x85]f'
# str5="".join(chr(ch) for ch in p2)
# print(str5)
from pwn import xor

f = open("flag.yarc",'rb').read()

print(f)

lest=f[286:1000].strip(b"\x00").split(b"<")[1:]
lest.remove(b"")

flag = b''

i = 0
while i < 1000:
	try:
		print(i)
		char = xor(lest[i+1][0],lest[i+2][0])
		print(char)
		flag += char
		i += 3
	except:
		i += 2

print(flag)









# flag{m33t_me_\nn_7h3_ar3n4}
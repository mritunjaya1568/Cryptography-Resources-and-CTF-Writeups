import base64

sect = set()
lest = []
lest2 = []

for i in range(1,256):
	val1 = i ^ (i>>4)
	val2 = val1 ^ (val1>>3)
	val3 = val2 ^ (val2>>2)
	val = val3 ^ (val3>>1)
	# print(i, val)
	lest.append(i)
	sect.add(val)
	lest2.append(val)

assert len(lest) == len(sect)

dect = dict(zip(lest2, lest))

string = 'NWIyYjdmMDUyMzczMDU2MTFmMzM2ODIxNGQzYTYwMWQ0MzI1NzQwZg=='
string = base64.b64decode(string).decode()
# string = '780d4f28640d4d2373316304463561'

flag = []
for i in range(0,len(string),2):
	val = dect[int(string[i:i+2],16)]
	if i == 0:
		flag.append(val)
	else:
		flag.append(val ^ last_char)

	last_char = int(string[i:i+2],16)

print(flag)
ans = "".join(chr(i) for i in flag)
print(ans)

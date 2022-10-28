import base64

sect = set()
lest = []
lest2 = []

for i in range(1,256):
	val = i
	val = val ^ (val>>1) ^ (val>>2) ^ (val>>3) ^ (val>>4)
	# print(i, val)
	lest.append(i)
	sect.add(val)
	lest2.append(val)

assert len(lest) == len(sect)

dect = dict(zip(lest2, lest))

string = 'NWIyYjdmMDUyMzczMDU2MTFmMzM2ODIxNGQzYTYwMWQ0MzI1NzQwZg=='
# string = base64.b64decode(string).decode()

flag = []
for i in range(len(string)):

	val = dect[ord(string[i])]
	if i == 0:
		flag.append(val)
	else:
		flag.append(val ^ last_char)

	last_char = ord(string[i])

print(flag)
ans = "".join(chr(i) for i in flag)
print(ans)

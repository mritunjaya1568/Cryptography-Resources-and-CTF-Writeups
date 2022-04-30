pat = b'\x0f\xb6\x45\xff\x3a\x45\xfe\x75\x14'
pat2 = b'\x0f\xb6\x45\xff\x3a\x45\xfe\x90\x90'
f = open('n33dl3', 'rb')
data = f.read()
f.close()
res = data.replace(pat, pat2)
p = open('needle_pat', 'wb')
p.write(res)
p.close()
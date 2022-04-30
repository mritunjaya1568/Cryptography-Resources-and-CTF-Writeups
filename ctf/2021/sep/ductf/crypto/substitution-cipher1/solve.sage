P.<x> = PolynomialRing(ZZ)
f = 13*x^2 + 3*x + 7


dest = {}
for i in range(256):
	dest[chr(f.substitute(i))] = chr(i)


ct = "𖿫𖝓玲𰆽𪃵𢙿疗𫢋𥆛🴃䶹𬑽蒵𜭱𫢋𪃵蒵🴃𜭱𩕑疗𪲳𜭱窇蒵𱫳"
flag = ""

for i in ct:
	flag+= dest[i]

print(flag)




'''flag = DUCTF{sh0uld'v3_us3d_r0t_13}'''
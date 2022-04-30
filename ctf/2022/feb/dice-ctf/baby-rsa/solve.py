from Crypto.Util.number import *
from sympy import nthroot_mod
from sympy.ntheory.modular import crt

n = 57996511214023134147551927572747727074259762800050285360155793732008227782157
e = 17
ct = 19441066986971115501070184268860318480501957407683654861466353590162062492971
p = 172036442175296373253148927105725488217
q = 337117592532677714973555912658569668821


assert p*q == n

lest1 = nthroot_mod(ct,e,p,True)
lest2 = nthroot_mod(ct,e,q,True)

result = []

for i in lest1:
	for j in lest2:
		result.append(crt([p,q],[i,j]))

for i in result:
	if b'dice' in long_to_bytes(i[0]):
		print(long_to_bytes(i[0]))




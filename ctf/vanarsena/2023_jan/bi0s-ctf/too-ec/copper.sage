f = open('data.txt','r')

ct = []
for row in f.readlines():
	ct.append(int(row.strip()))

output = 0xb4a8f1786f16b0ad10a2b5c4fdb020a192e963cf61eb3adb6eb55c41c41430a7313c158164b717516ae1f11e8f7b2df85b0d1843a519fd016894623384781eeed8e75f9bd38608d3fa734190ccde2b454e7de484b1600872b4fad839265656067b003c3f33c77345e8f55aa33234ac1b1e4d83d2f487ea1a042d4bdea3748bd3

for index,i in enumerate(ct):
    P.<x> = PolynomialRing(Zmod(output), implementation='NTL')
    bound = 256^15
    f = i + 256^25 * x + 256^40 * int('e078e75b3313660ec08eefcdfe98ca82ecea4f3483ce9055',16)
    if f.monic().small_roots(X = bound, beta = 0.5) != []:
    	print(f.monic().small_roots(X = bound, beta = 0.5))
    	break
    print(index)
    



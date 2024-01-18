from Crypto.Util.number import *
import itertools



N = 0xb4a8f1786f16b0ad10a2b5c4fdb020a192e963cf61eb3adb6eb55c41c41430a7313c158164b717516ae1f11e8f7b2df85b0d1843a519fd016894623384781eeed8e75f9bd38608d3fa734190ccde2b454e7de484b1600872b4fad839265656067b003c3f33c77345e8f55aa33234ac1b1e4d83d2f487ea1a042d4bdea3748bd3
# p1 = e078e75b3313660ec08eefcdfe98ca82ecea4f3483ce9055?????????05fa57d82f??????????525966d8eca5d968b96ca03e60f1b0a13cbd??????????ac39b

a1 = 284714395592149985031071990064722603855564247389538236878682710552855514777811243873118923924323181542656848585973193167859733308878913768997124222623467
b1 = 6691650159000762838310818461581190062553047897575015587337603592580333224793723463850872931945734336439769314392536267909443115859245856541836553263948753

a2 = 501825392150441176175728536671705829555714973361100909579834429968064243697851483241083792599402881866011389914665565694449484329836527749246854277502643
b2 = 1291619760902660387903505043454584215818295063211936290200646344457970633763165896027212915277161704232069970670816281868294804457737375861177780690688002


# def small_roots(f, bounds, m=1, d=None):
# 	if not d:
# 		d = f.degree()

# 	R = f.base_ring()
# 	N = R.cardinality()
	
# 	f /= f.coefficients().pop(0)
# 	f = f.change_ring(ZZ)

# 	G = Sequence([], f.parent())
# 	for i in range(m+1):
# 		base = N^(m-i) * f^i
# 		for shifts in itertools.product(range(d), repeat=f.nvariables()):
# 			g = base * prod(map(power, f.variables(), shifts))
# 			G.append(g)

# 	B, monomials = G.coefficient_matrix()
# 	monomials = vector(monomials)

# 	factors = [monomial(*bounds) for monomial in monomials]
# 	for i, factor in enumerate(factors):
# 		B.rescale_col(i, factor)

# 	B = B.dense_matrix().LLL()

# 	B = B.change_ring(QQ)
# 	for i, factor in enumerate(factors):
# 		B.rescale_col(i, 1/factor)

# 	H = Sequence([], f.parent().change_ring(QQ))
# 	for h in filter(None, B*monomials):
# 		H.append(h)
# 		I = H.ideal()
# 		if I.dimension() == -1:
# 			H.pop()
# 		elif I.dimension() == 0:
# 			roots = []
# 			for root in I.variety(ring=ZZ):
# 				root = tuple(R(root[var]) for var in f.variables())
# 				roots.append(root)
# 			return roots

# 	return []

# def trivariate():
# 	print('Trivariate')
# 	bounds = (256^12,256^12,256^12,256^40)
# 	roots = tuple(randrange(bound) for bound in bounds)
# 	R = Integers(N)
	P.<x1, x2, x3> = PolynomialRing(R)
	p1 = int('c39b',16) + 256^2 * x3 + 256^8 * int('25966d8eca5d968b96ca03e60f1b0a13cb',16) + 256^25 * x2 + int('5fa57d82',16) *256^31 + 256^35*x1 + int('e078e75b3313660ec08eefcdfe98ca82ecea4f3483ce9055',16)*256^40
# 	q_front = int('ce08ba7d6b366c75847888090d388765888a3e028dcf227d',16)*256^40 + x4
# 	f = p1 * q_front - N
# 	print(small_roots(f, bounds))


# trivariate()



# # F.<x> = PolynomialRing(Zmod(256^25), implementation = 'NTL')
# # pol = 65536*x + 235941247057522614797042100300692330333800001787473707451291
# # pol.monic().small_roots(X=256^12)

# F.<x> = PolynomialRing()


int('c39b',16) + 256^2 * x3 + 256^8 * int('25966d8eca5d968b96ca03e60f1b0a13cb',16)

q_front = int('ce08ba7d6b366c75847888090d388765888a3e028dcf227d',16)*256^40
q_last = int('7ed5b041dc38561bbf10e85a9815605c95caf7574aefb12829',16)

# q_front + 256^25 * y + q_last


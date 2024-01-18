from Crypto.Util.number import *
from Crypto.Cipher import AES
import itertools

base= 1.582865871833962350672487559906539350957045416218604029623801809371663187120135885773063504257759077083569730916957342287410122618714508676572477981771741910358410930757789936535603770759077822533963997825559582891735692273934906638208523910403941880272794583604745417406979461840307679511885662587
mod= 2.622057554292119810464839589891119413682754951431623162816821703800790587070414250230295532961429093446135752671783218055608956901393935694701119434775235840422641497164906951936899979932146072383121390810206221897429600856554539772305369549710288888325526487021329012097540833128568511729752229214
new_base= -0.8476433448954187054724265679077740799227260890294155582018935938514611938418638905500305109792958619920222495821341257165266698620566820476342332700555752487047762519584784225717894517675125559580182003624145689288072916543718840670420827333241007797418444791851958301131513893479094664507855619210
ciphertext='a756399aaa85cb6de7d2541eb35d64ae00491b9d84bdc655f508384a4d1a92da44320f4d76f7a931ca93cb58a7d384360e826fb8c02c03a329d2c313589f19ef'


def small_roots(f, bounds, m=1, d=None):
	if not d:
		d = f.degree()

	R = f.base_ring()
	N = R.cardinality()
	
	f /= f.coefficients().pop(0)
	f = f.change_ring(ZZ)

	G = Sequence([], f.parent())
	for i in range(m+1):
		base = N^(m-i) * f^i
		for shifts in itertools.product(range(d), repeat=f.nvariables()):
			g = base * prod(map(power, f.variables(), shifts))
			G.append(g)

	B, monomials = G.coefficient_matrix()
	monomials = vector(monomials)

	factors = [monomial(*bounds) for monomial in monomials]
	for i, factor in enumerate(factors):
		B.rescale_col(i, factor)

	B = B.dense_matrix().LLL()

	B = B.change_ring(QQ)
	for i, factor in enumerate(factors):
		B.rescale_col(i, 1/factor)

	H = Sequence([], f.parent().change_ring(QQ))
	for h in filter(None, B*monomials):
		H.append(h)
		I = H.ideal()
		if I.dimension() == -1:
			H.pop()
		elif I.dimension() == 0:
			roots = []
			for root in I.variety(ring=ZZ):
				root = tuple(R(root[var]) for var in f.variables())
				roots.append(root)
			return roots

	return []

# EXPO = 10^296
# BASE = next_prime(int(base * EXPO))
# MOD = int(mod * EXPO)
# NEW_BASE = int(new_base * EXPO)
# P.<x, y> = PolynomialRing(Integers(MOD))
# f = BASE * x + y - NEW_BASE

# bound = (2^128, 2^128)
# small_roots(f,bound)


# 128 bits of key(n), 300 bits of decimal
M = Matrix(QQ,[[0,0,mod],[0,1/2^(128 + 300),base],[5,0,new_base]])
Mred = M.LLL()

# see the row with 1st element equal to 5, 2nd element n//2^428 and last will be noise, which is a linear combination of mod, base and new_base with a coefficient of 1
val = 298245319794214612287659658058198469151
key = long_to_bytes(val)
print(AES.new(key, AES.MODE_ECB).decrypt(bytes.fromhex(ciphertext)))

# b'BSidesIndore{Inverse_Inverse_Inserse_Inverse!!!!:)}\r\r\r\r\r\r\r\r\r\r\r\r\r'
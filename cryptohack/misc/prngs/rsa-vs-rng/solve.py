from Crypto.Util.number import *
from gmpy2 import iroot

MOD = 2**512
a = 2287734286973265697461282233387562018856392913150345266314910637176078653625724467256102550998312362508228015051719939419898647553300561119192412962471189
b = 4179258870716283142348328372614541634061596292364078137966699610370755625435095397634562220121158928642693078147104418972353427207082297056885055545010537
ct = {"N": 95397281288258216755316271056659083720936495881607543513157781967036077217126208404659771258947379945753682123292571745366296203141706097270264349094699269750027004474368460080047355551701945683982169993697848309121093922048644700959026693232147815437610773496512273648666620162998099244184694543039944346061, "E": 65537, "ciphertext": "04fee34327a820a5fb72e71b8b1b789d22085630b1b5747f38f791c55573571d22e454bfebe0180631cbab9075efa80796edb11540404c58f481f03d12bb5f3655616df95fb7a005904785b86451d870722cc6a0ff8d622d5cb1bce15d28fee0a72ba67ba95567dc5062dfc2ac40fe76bc56c311b1c3335115e9b6ecf6282cca"}

lest = []
N = int(ct["N"])
E = int(ct["E"])
ciphertext = int(ct["ciphertext"],16)

def functor(a,b,c):
	a, b, c = [Mod(val, MOD) for val in [a,b,c]]
	det = b^2 - 4*a*c 
	try:
		rts = det.nth_root(2,all = True)
		for rt in rts:
			rt1,rt2 = ((-1 * int(b) + rt) * inverse(int(a), MOD))%MOD, ((-1 * int(b) - rt) * inverse(int(a), MOD))%MOD
			if int(rt1) % 2 ==0 and int(rt2) % 2 ==0:
				rt1, rt2 = int(rt1)//2, int(rt2)//2
				if Mod(a * rt1 ^ 2 + b * rt1 + c, MOD) == 0 and Mod(a * rt2 ^ 2 + b * rt2 + c, MOD) == 0:
					if isPrime(rt1) or isPrime(rt2):
						print(rt1, rt2)
			# if int(rt1) % 2 == 0:
			# 	rt1 = int(rt1) // 2
			# 	if isPrime(rt1):
			# 		print(rt1)

			# if int(rt2) % 2 == 0:
			# 	rt2 = int(rt2) // 2
			# 	if isPrime(rt2):
			# 		print(rt2)


	except:
		print("error")

# we are getting confirmed primes below 1000 iterations
z1 = 1
z2 = 0
c = N

for x in range(1,1000):
	print(x)
	z2 = (z2 + b * z1) % MOD
	z1 = (z1 * a) % MOD
	functor(z1, z2, -c)




def functor2(a,b,c):
	a, b, c = [Mod(x,MOD) for x in [a,b,c]]
	b = b * inverse(int(a), MOD)
	c = c * inverse(int(a), MOD)
	a = 1
	det = b^2 - 4 * c
	rts = det.nth_root(2,all = True)
	for rt in rts:
		rt1, rt2 = int(Mod(-1 * int(b) + rt, MOD))//2 , int(Mod(-1 * int(b) -rt,MOD))//2
		if Mod(a * rt1 ^ 2 + b * rt1 + c, MOD) == 0 and Mod(a * rt2 ^ 2 + b * rt2 + c, MOD) == 0:
			# print(rt1)
			lest.append((rt1,rt2))
		# if Mod(a * rt2 ^ 2 + b * rt2 + c, MOD) == 0:
		# 	# print(rt2)
		# 	lest.append(rt2)


### given by grhkm in cryptohack discord, ctf challenges
### for quadratic equations modulo p, you can use legendre symbol here
### quadratic residue
# def solve1(a, b, c, p):
#     # ax^2 + bx + c = 0 mod p
#     # x^2 + (b / a)x + (c / a) = 0
#     b = Mod(b, p) / a
#     c = Mod(c, p) / a
#     # (x + b'/2)^2 = b'^2 / 4 - c'
#     rhs = b^2 / 4 - c
#     try:
#         rt = rhs.nth_root(2)
#         r1, r2 = -b / 2 + rt, -b / 2 - rt
#         # if r1 == r2:
#         #     return r1
#         # if r1 > r2:
#         #     r1, r2 = r2, r1
#         return r1, r2
#     except:
#     	return 0,0
from Crypto.Util.number import *

MOD = 2**512
a = 2287734286973265697461282233387562018856392913150345266314910637176078653625724467256102550998312362508228015051719939419898647553300561119192412962471189
b = 4179258870716283142348328372614541634061596292364078137966699610370755625435095397634562220121158928642693078147104418972353427207082297056885055545010537
ct = {"N": 95397281288258216755316271056659083720936495881607543513157781967036077217126208404659771258947379945753682123292571745366296203141706097270264349094699269750027004474368460080047355551701945683982169993697848309121093922048644700959026693232147815437610773496512273648666620162998099244184694543039944346061, "E": 65537, "ciphertext": "04fee34327a820a5fb72e71b8b1b789d22085630b1b5747f38f791c55573571d22e454bfebe0180631cbab9075efa80796edb11540404c58f481f03d12bb5f3655616df95fb7a005904785b86451d870722cc6a0ff8d622d5cb1bce15d28fee0a72ba67ba95567dc5062dfc2ac40fe76bc56c311b1c3335115e9b6ecf6282cca"}

N = int(ct["N"])
E = int(ct["E"])
ciphertext = bytes.fromhex(ct["ciphertext"])
ciphertext = bytes_to_long(ciphertext)


def functor(a,b,c):
	a, b, c = [Mod(val, MOD) for val in [a,b,c]]
	det = b^2 - 4*a*c 
	try:
		rts = det.nth_root(2,all = True)
		for rt in rts:
			rt1,rt2 = (-b + rt) , (-b - rt)

			if int(rt1) % 2 == 0:
				rt1 = int(rt1)//2 * pow(a, -1, MOD)
				if Mod(a * rt1 ^ 2 + b * rt1 + c, MOD) == 0:
					# this is also working, and gcd is also working
					if isPrime(int(rt1)):
						return rt1 
					# if gcd(int(rt1), N) > 1:
					# 	return rt1

			if int(rt2) % 2 == 0:
				rt2 = int(rt2)//2 * pow(a, -1, MOD)
				if Mod(a * rt2 ^ 2 + b * rt2 + c, MOD) == 0:
					if isPrime(int(rt2)):
						return rt2
					# if gcd(int(rt2), N) > 1:
					# 	return rt2
	except:
		print("error")
		return -1
	return -1


# we are getting confirmed primes below 1000 iterations
z1 = 1
z2 = 0
c = N

for x in range(1,1000):
	print(x)
	z2 = (z2 + b * z1) % MOD
	z1 = (z1 * a) % MOD
	flag = functor(z1, z2, -c)
	if flag != -1:
		print("Got prime")
		break

p = int(flag)
q = N // p

phi = (p-1) * (q-1) # multiplication will convert it to sage ring integer

# so sage pow works like this, if exponent is sage ring integer(-1 is a sage ring integer),
#then base should also be a sage ring integer

## or vice versa, if exponent is integer, then it will expect the base to be an integer

### 1st method
d = pow(E,-1,phi) # -1 here will be a sage ring integer, so base should be a sage ring integer, and d also a sage ring integer
flag = pow(ZZ(ciphertext),d,N)
print(long_to_bytes(int(flag)))

### 2nd method
d = pow(E, -1, phi) # 
flag = pow(ciphertext, int(d), N) # exponent integer so , base is also integer
print(long_to_bytes(int(flag)))

## flag -> b'crypto{pseudorandom_shamir_adleman}'
n = 95341235345618011251857577682324351171197688101180707030749869409235726634345899397258784261937590128088284421816891826202978052640992678267974129629670862991769812330793126662251062120518795878693122854189330426777286315442926939843468730196970939951374889986320771714519309125434348512571864406646232154103
e = 3
c = 63476139027102349822147098087901756023488558030079225358836870725611623045683759473454129221778690683914555720975250395929721681009556415292257804239149809875424000027362678341633901036035522299395660255954384685936351041718040558055860508481512479599089561391846007771856837130233678763953257086620228436828

from Crypto.Util.number import *
from gmpy2 import iroot


print("Trying 1st method")

val = inverse(256,n)
val = pow(val,3,n)

## this method was for checking if the flag len is <= 42 bytes, then we can easily get the flag
## just by doing the cube root thingy
for i in range(101):
	ct = (c * pow(val,i,n) ) % n
	flag = iroot(ct,3)
	print(flag[1],i)
	if flag[1] == True:
		print("Flag Found :")
		print(long_to_bytes(int(flag[0])))

print("1st method failed")

# Wrong solution, showing why it's going wrong

print("Trying 2nd method now")

## you dont need to bruteforce since the given flag is already of known length
## flag is of 43 bytes -> which means 43 * 8 = 344

## to take cube root, 3 * m < 1024, m < 341 , so divide flag by 256 again so it will be now
## 42 * 8 = 336 which is less than 1024 so can try doing that


inv_256 = inverse(256,n)

ct = (c * pow(inv_256,58 * 3,n) ) % n

from gmpy2 import iroot

## imagine flag = 256 * m1 + m0 
## so when we divide it by 256, it will be m1 + m0 * inv_256 , but the problem here is 
## m1 is of 42 bytes but not inv_256 , (m0 * inv_256) and here inv_256 will be around 1024 bytes
## so cant say in which range everything lies
## so this method of dividing it again by 256 is wrong

## this m1 is wrong
m1 = int(iroot(ct,3)[0])

ct2 = (c * pow(inv_256, 57 * 3, n) ) % n

for i in range(256):
	if pow( (256 * m1 + i), 3, n) == ct2 :
		print("Found m0 : ", i)
		m0 = i
		break

try:
	flag = 256 * m1 + m0
	print(long_to_bytes(flag))
except:
	print("m0 not found")
	for i in range(10000):
		if pow( (m1 * 256 + i) ,3, n) == ct2:
			print("Found m0 :", i)
			m0 = i
			break

print("2nd method failed")


# 3rd method - and the correct one

print("Trying 3rd method now")

inv_256 = inverse(256,n)
cipher = (c * pow(inv_256, 57 * 3, n) )%n

## since (flag)^3 -> 43 * 8 * 3 = 1032 bits , and we know that after removing 
## all null padding, (flag)^3 = cipher mod n
## (flag)^3 = k * n + cipher 
## 1032 bits = 1024 bits * k + (<1024 bits)
## so k will be around 8 bits 
## so just by bruteforcing it will get us the flag

for k in range(256 * 4):
	if iroot(k*n + cipher,3)[1] == True:
		flag = iroot(k*n + cipher,3)[0]
		print(long_to_bytes(flag))
		break

print("Got the flag")

## flag = b'crypto{n0n_574nd4rd_p4d_c0n51d3r3d_h4rmful}'

# Sources

# 1- https://en.wikipedia.org/wiki/ElGamal_encryption
# 2- https://crypto.stackexchange.com/questions/76048/security-properties-of-elgamal-encryption-variants
# 3- https://crypto.stackexchange.com/questions/54919/information-leak-in-elgamal-encryption-with-message-in-base-group?rq=1

# main 4- https://crypto.stackexchange.com/questions/54907/elgamal-in-mathbb-z-p-with-g-not-a-generator-of-mathbb-z-p

# Extra 1 - https://www.scitepress.org/Papers/2020/98171/98171.pdf


# p = (q-1)//2 (prime) -> {h^2mod q, h->Zn*}

# pow(2,p,q) != 1
# pow(256,p,q) == 1 (in prime order subgroup G) # since its a prime order then 256 is also a generator

# If ct is in order G (is a QR) then message will be in order G(is a QR)
# and same for NQR

# z = pow(256,e,q) (QR) 
# mb = 2*z (QR*NQR = NQR)
# mb = 4*z (QR*QR = QR)

from Crypto.Util.number import *
f = open("output.txt","r")

q = 117477667918738952579183719876352811442282667176975299658506388983916794266542270944999203435163206062215810775822922421123910464455461286519153688505926472313006014806485076205663018026742480181999336912300022514436004673587192018846621666145334296696433207116469994110066128730623149834083870252895489152123
g = 104831378861792918406603185872102963672377675787070244288476520132867186367073243128721932355048896327567834691503031058630891431160772435946803430038048387919820523845278192892527138537973452950296897433212693740878617106403233353998322359462259883977147097970627584785653515124418036488904398507208057206926


i = 0 
string = ""
for line in f.readlines():
	i += 1
	if i & 1:
		continue
	msg = line.strip('\n)').split('=')[-1]
	val = int(msg,16)
	if pow(val,(q-1)//2,q) == 1:
		string += "1"
	else:
		string += "0"

string = string[::-1]
flag = int(string,2)
print(long_to_bytes(flag))

''' b'crypto{s0m3_th1ng5_4r3_pr3served_4ft3r_encrypti0n}'
'''

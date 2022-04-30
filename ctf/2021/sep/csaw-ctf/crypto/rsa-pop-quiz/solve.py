import math
from Crypto.Util.number import *
from gmpy2 import iroot
from pwn import remote
import owiener

#owiener.attack(e,n)

r = remote('crypto.chal.csaw.io',5008)
vals = []

def recv(variables):
	vals.clear()
	print(r.recvline().decode(),end="")
	print(r.recvline().decode(),end="")
	for i in range(variables):	
		vals.append(int(r.recvline().decode().split(' ')[-1]))
	print(r.recvline().decode(),end="")
	print(r.recvline().decode(),end="")
	return vals

def send(msg):
	r.sendline(str(msg).encode())

def recvlsboracle(n,e,ct):
	l = 0
	h = n
	pow2 = pow(2,e,n)
	ctdash = ct
	while l<h:
		mid = (l+h)//2
		ctdash = (pow2*ctdash)%n
		send(ctdash)
		print(r.recvline().decode(),end="")
		bit = int(r.recvline().decode().split(' ')[-1])
		if bit == 0:
			h = mid-1
		else :
			l =mid+1
		print(r.recvline().decode(),end="")
		send("yes")
		print(r.recvline().decode(),end="")
		print(r.recvline().decode(),end="")
		print(r.recvline().decode(),end="")

	print(l,h)

n,e,ct = recv(3)
flag1 = "Wiener wiener chicken dinner"
send(flag1)
r.recvline()


n,e,ct = recv(3)
flag2 = "Who came up with this math term anyway?"
send(flag2)
r.recvline()


n,e,ct = recv(3)
send(2)
print(r.recvline().decode(),end="")
print(r.recvline().decode(),end="")
print(r.recvline().decode(),end="")
send("no")
flag3 = "Totally did not mean to put an oracle there"
print(r.recvline().decode(),end="")
print(r.recvline().decode(),end="")
send(flag3)
r.recvline()

n,e,d0,c,d0bits,nBits = recv(6)
flag4 = "I'll be careful next time to not leak the key"
send(flag4)
r.recvline()

print(r.recvline())
print(r.recvline())

'''b'Congrats on passing the RSA Pop Quiz! Here is your flag: flag{l00K5_L1K3_y0u_H4v3_p4223D_7h3_D1ff1Cul7_r54_p0p_Kw12_w17H_fLy1N9_C0L0r2}\r\n'
'''

'''
flag = flag{l00K5_L1K3_y0u_H4v3_p4223D_7h3_D1ff1Cul7_r54_p0p_Kw12_w17H_fLy1N9_C0L0r2}'''









# nc crypto.chal.csaw.io 5008

# 1st-> weiner attack -> Wiener wiener chicken dinner

# 2nd-> p and p+6 -> Who came up with this math term anyway?


#1st script

# use weiner attack given in same directory 


# 2nd script 
# N = 98849079753891610385359313518244571174683802367423935604012838075499205143248020659182723206592419739280625951637366762179332470614473182098562017509939220747611257618869093500924201684133808351017014724892089705994568125603084522044146938440778019072811897506049982570258964889291956464688786580795764167227
# e = 65537
# ct = 27211461887570765051176575950430587123498958057044894867176169714565479211310782051980837381473082880643303084179088250888253932603952475328465345039376607690912031549325291298542351254600804624972879199046644537478154583656251106545266733430655445282822180136794941360902246082211617629343246626237470619271

# val , flag = iroot(N+9,2)
# if flag == True:
# 	print(flag)
# 	p = val-3
# 	q = val+3

# d = inverse(e,(p-1)*(q-1))

# flag = long_to_bytes(pow(ct,d,N)).decode()
# print(flag)


#3rd script 


# n,e,ct = recv()
# recvlsboracle(n,e,ct)

# ''' values of l and h 
# 11819604691415013740290041634617104468706207541839193261702186718464597800034150809357795443827288666677 11819604691415013740290041634617104468706207541839193261702186718464597800034150809357795443827288666676
# '''

# '''flag = b'Totally did not mean to put an oracle there'
# '''





# direction for 4th
'''using the 

halfdPartialKeyRecoveryAttack

 function from https://github.com/ValarDragon/CTF-Crypto/blob/master/RSA/RSATool.py

 More specifically
I adjusted the functionality a bit

def floorSqrt(n):
    x = n
    y = (x + 1) // 2
    while y < x:
        x = y
        y = (x + n // x) // 2
    return x

def halfdPartialKeyRecoveryAttack(d0,d0BitSize,nBitSize,n,e):
        """
            Recovers full private key given more than half of the private key. Links:
            http://www.ijser.org/researchpaper/Attack_on_RSA_Cryptosystem.pdf
            http://honors.cs.umd.edu/reports/lowexprsa.pdf
        """
        test = pow(3, e, n)
        test2 = pow(5, e, n)
        if(d0BitSize < nBitSize//2):
            return "Not enough bits of d0"
        # The idea is that ed - k(N-p-q+1)=1 by definitions (1)
        # d < totient(N) since its modInv(e,Totient(n)), so k can't be bigger than e
        # Therefore k is on range(1,e)
        # But we don't have totient(N), we have N, so its only an approximation
        # Proofs are in the links, but if you switch totientN with just N in the above,
        # and set d' = (k*N + 1)/e ,
        # the maximum error in d' is 3*sqrt(nBitSize) bits
        # Thats less than d/2, so we can just replace the least significant bits with d0
        # and get plaintext
        dlst = []
        for k in range(1,e):
            # This is guaranteed to be accurate to nBitSize^(1/3),
            # so we replace last bits with d
            d = ((k * n + 1) // e)
            
            # Chop of last d0 bits of d, and put d0 there.
            d >>= d0BitSize
            d <<= d0BitSize
            d |= d0
            
            dlst += [d]
            # This condition must be true from modulo def. (1) And avoids computing many modpows
            if((e * d) % k == 1):
                # Were testing that d is valid by decoding two test messages
                if pow(test, d, n) == 3:
                    if pow(test2, d, n) == 5:
                        # From (1)
                        totientN = (e*d - 1) // k
                        #totient(N) = (p-1)(q-1) = n - p - q + 1
                        # p^2 - p^2 - N + N = 0
                        # p^2 - p^2 - pq + N = 0
                        # p^2 + (-p -q)p + N = 0
                        # p^2 + (totient(N) -n -1) + N = 0
                        # Solving this quadratic for variable p:
                        b = totientN - n - 1
                        discriminant = b*b - 4*n
                        #make sure discriminant is perfect square
                        root = floorSqrt(discriminant)
                        if(root*root != discriminant):
                            continue
                        p = (-b + root) // 2
                        q = n // p
                        #print("[*] Factors are: %s and %s" % (self.p,self.q))
                        print('done')
                        return p,q
            
        return dlst
    
ds = halfdPartialKeyRecoveryAttack(d0=d0, d0BitSize=d0bits, nBitSize=nBits, n=N, e=e)

for d in ds:
    print(long_to_bytes(pow(c,d,N)))

e was just 17 so we can just brute-force through all possible d's
as there are only 17 possibilities'''
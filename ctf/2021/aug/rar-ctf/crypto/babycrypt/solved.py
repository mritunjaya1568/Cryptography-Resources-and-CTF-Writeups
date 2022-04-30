from Crypto.Util.number import inverse, bytes_to_long, long_to_bytes,isPrime
from gmpy2 import iroot
from pwn import *
# n=5501183509237861347256943002671444643574305456079677052830763427020560124217600557678202261496217769388912321451279871238246452165983636272799167438568189
# e=65537
# hint=18775947657866045029836951806366646248505151077565834565260667689087656741989
# ct=1268980459135864683103114612952471166388734025892616409881040826585956469386898949830714526820915646055069516478527399363973967283012752081459969729126267

#wrong-solution
# val=n-hint
# (A,cor)=iroot(n,2)
# count=0
# if cor==True:
# 	phi=A*(A-1)
# else:
# 	while 1>0:
# 		if val%A==0 and isPrime(val//A+1):
# 			q=val//A+1
# 			p=n//q
# 			phi=(p-1)*(q-1)
# 			break
# 		else:
# 			A+=1
# 			count+=1
# print(count)
# d=inverse(e,phi)
# m=pow(ct,d,n)
# print(long_to_bytes(m).decode())


#-correct solution
def functor(e,n,hint,ct):
	if n%hint==0:
		p=hint
		q=n//hint
		print("k is p\n")
	else:
		(c,d)=iroot((hint-1)*(hint-1)+4*n,2)
		if d==True:
			q=(c-hint+1)//2
			p=n//q
			print("k is p+1\n")
		else:
			print("-1")
	if p==q:
		phi=p*(p-1)
	else:
		phi=(p-1)*(q-1)
	d=inverse(e,phi)
	m=pow(ct,d,n)
	return long_to_bytes(m).decode()


HOST="193.57.159.27"
PORT=36208
conn=remote(HOST,PORT)
while 1>0:
	e,n=conn.recvline()[8:].decode().strip("()\n").split(',')
	e=int(e)
	n=int(n)
	hint=int(conn.recvline()[5:].decode().strip())
	ct=int(conn.recvline()[2:].decode().strip())
	string=functor(e,n,hint,ct)
	print(string)
	conn.sendline(string)


#flag=rarctf{g3n3r1c_m4th5_equ4t10n_th1ng_ch4ll3ng3_5a174f54e6}

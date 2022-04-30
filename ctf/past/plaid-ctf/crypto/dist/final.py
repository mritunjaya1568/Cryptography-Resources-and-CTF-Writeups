#!/usr/bin/python3
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto.Util.number import isPrime
from sympy import factorint
from gmpy2 import iroot
from z3 import *
from sage import *
import sys
z=16158503035655503426113161923582139215996816729841729510388257123879913978158886398099119284865182008994209960822918533986492024494600106348146394391522057566608094710459034761239411826561975763233251722937911293380163746384471886598967490683174505277425790076708816190844068727460135370229854070720638780344789626637927699732624476246512446229279134683464388038627051524453190148083707025054101132463059634405171130015990728153311556498299145863647112326468089494225289395728401221863674961839497514512905495012562702779156196970731085339939466059770413224786385677222902726546438487688076765303358036256878804074494
f=open("public.pem","rb")
key=RSA.importKey(f.read())
n=key.n
e=key.e
lest=[]
p1=0
p2=0
with open("listfile.txt",'r') as f:
	for line in f:
		current=line[:-1]
		lest.append(current)
def check(i):
	global p1
	global p2
	ppq=z+2*int(i)
	if ppq**2-4*n>0:
		pmq=iroot(ppq**2-4*n,2)[0]
		p=(ppq+pmq)//2
		if(n%p==True):
			p1=p
			p2=n//p
			return True
		else:
			return False
for i in lest:
	if check(i):
		print(p1,q2,sep="\n")
#!/usr/bin/python3
import base64
from Crypto.PublicKey import RSA 
from Crypto.Cipher import PKCS1_v1_5
'''key=RSA.generate(2048)
#print(key)
f=open('mykey.pem','wb')
f.write(key.exportKey('PEM'))
f.close()
f=open('mykey.pem','rb')
key=RSA.importKey(f.read())
print(key)
'''

'''
f=open("pem2.pem","rt")
string=""
for x in f:
	string+=x
val1=string.find("M")
string=string[val1:-val1+1]
final=base64.b64decode(string.encode('utf-8'))
print(("".join(chr(i) for i in final)))'''

f=open("pem2.pem","rb")
key=RSA.importKey(f.read())
print(key.has_private())
#Supplied keypair.pem is a private RSA key which can be confirmed by the .has_private() method.
#Therefore, it has all the RSA components ['n', 'e', 'd', 'p', 'q', 'u'] as class variables.
print(key.n)
print(key.p)
print(key.q)
assert key.p*key.q==key.n
print(key.d)




#2nd method
#openssl rsa -noout -text -in pem2.pem
#CONVERT HEX FROM PRIVATEEXPONENT TO DECIMAL
#
from Crypto.PublicKey import RSA

f = open("trans.pem",'r')

key = RSA.import_key(f.read())

print(key.n)
print(key.e)

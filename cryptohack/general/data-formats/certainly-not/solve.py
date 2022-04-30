from Crypto.PublicKey import RSA

f = open("cert2.pem","r")

key = RSA.import_key(f.read())
print(key)

print(key.n)
print(key.e)

# der files ko read karne ke liye bytes format use karna padega
f2 = open("cert.der","rb")

key2 = RSA.import_key(f2.read())
print(key2)

print(key2.n)
print(key2.e)



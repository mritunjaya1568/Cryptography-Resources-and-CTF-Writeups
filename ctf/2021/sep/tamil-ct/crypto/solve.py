from Crypto.PublicKey import RSA

f = open("key1", "r")
key = RSA.import_key(f.read())
print(key)
print(key.n)
print(key.e)


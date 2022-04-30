from Crypto.PublicKey import RSA

f = open("bruce-public.pub","r")

key = RSA.import_key(f.read())

print(key)
print(key.n)
print(key.e)


# 2nd solution 

# # We convert the ssh public key to PEM format and store it in a file called "bruce_rsa.pem"
# ssh-keygen -f bruce_rsa.pub -e -m pem > bruce_rsa.pem

# Finally, retrieve the modulo with the following code:

# from Crypto.PublicKey import RSA

# f = open('bruce_rsa.pem', 'r')
# pubkey = RSA.import_key(f.read())

# print(pubkey.n)
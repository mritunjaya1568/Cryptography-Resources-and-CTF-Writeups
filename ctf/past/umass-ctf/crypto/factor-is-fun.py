import hashlib
lest="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghikjlmnopqrstuvwxyz_@{}+-$*()"
string="UMass-"
str2=hashlib.sha256(string.encode('utf-8')).hexdigest()
print(str2)

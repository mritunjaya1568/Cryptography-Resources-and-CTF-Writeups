import hashlib
string="UMass-"
str2=hashlib.sha256(string.encode('utf-8')).hexdigest()
print(str2)
import jwt
import requests
import base64
from Crypto.PublicKey import RSA
import hashlib
from Crypto.Util.number import *

print(jwt.__version__)

# our first task is to recover the public key first ,
# then it's the same question as RSA-OR-HMAC-part-1


# username = 'manny'

# r = requests.get(f'http://web.cryptohack.org/rsa-or-hmac-2/create_session/{username}')
# encoded = r.json()["session"]

# print(encoded)

# lest = list(encoded.split("."))
# header = lest[0]
# payload = lest[1]
# sign = lest[2]

# print(header)
# print(payload)
# print(sign)


def create_session(username,key):
    encoded = jwt.encode({'username': username, 'admin': False}, key, algorithm='RS256')
    return {"session": encoded.decode()}


# private = RSA.generate(2048)
# f = open("private.pem","wb")
# f.write(private.export_key('PEM'))
# f.close()

# f = open('private.pem','r')
# priv_key = RSA.import_key(f.read())

# to convert private to public key - just use this function .publickey()

# pub_key = priv_key.publickey()
# f = open("public.pem","wb")
# f.write(pub_key.export_key('PEM'))
# f.close()

# f = open("public.pem","rb")
# pub_key = RSA.import_key(f.read())
# print(pub_key.n)
# print(pub_key.e)


f = open("private.pem","rb")
priv_pem = f.read()
n = RSA.import_key(priv_pem).n
e = RSA.import_key(priv_pem).e
d = RSA.import_key(priv_pem).d
print(n,e,d)

print(create_session('manny',priv_pem))

token = 'eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOmZhbHNlfQ.VWtO2Q_H5QcYbhrCDRwX386fEd_KYGI9Fvj9LhYDgR94e1nMlnnYQs9fn6weviZkfaguwzd-huAaBCZwWZz-EyeOfnrd8UYGB_Z_pq2euEmLgtB4zNpsIubQmvfxicgUz_5JEHuVNV6bUk89dIyAGuaHHStmWau3GTBydk4dV_CrPQpxbqyqiBmLA71YWsfZQOZmUrGL79rEqwLZjrLcYFFzqGSgglVJbPYS1OId4kQ2Wh200L-PNV7qDYClBf_Hi4Og7OxPDltINVofis7D14BGGEVD-OUDtQJATlYBVWx9KhyHrYnNwbwKXDrK0EINfawcN4LhR5hHN4Wef79vTA'

head_payload = hashlib.sha256(b'eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOmZhbHNlfQ').digest()
sign = pow(bytes_to_long(head_payload),d,n)
sign = long_to_bytes(sign)
z = base64.b64encode(sign).decode().strip("=").replace('+', '-').replace('/', '_')
print(z, len(z))

print("  Hello   ")


from Crypto.Signature import pkcs1_15
from Crypto.Hash import SHA256
key2 = RSA.import_key(open('private.pem').read())
h = SHA256.new(head_payload)
print(h)
signature = pkcs1_15.new(key2).sign(h)
print(signature)
z = base64.b64encode(signature).decode().strip("=").replace('+', '-').replace('/', '_')
print(z, len(z))



token = b'eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOmZhbHNlfQ.VWtO2Q_H5QcYbhrCDRwX386fEd_KYGI9Fvj9LhYDgR94e1nMlnnYQs9fn6weviZkfaguwzd-huAaBCZwWZz-EyeOfnrd8UYGB_Z_pq2euEmLgtB4zNpsIubQmvfxicgUz_5JEHuVNV6bUk89dIyAGuaHHStmWau3GTBydk4dV_CrPQpxbqyqiBmLA71YWsfZQOZmUrGL79rEqwLZjrLcYFFzqGSgglVJbPYS1OId4kQ2Wh200L-PNV7qDYClBf_Hi4Og7OxPDltINVofis7D14BGGEVD-OUDtQJATlYBVWx9KhyHrYnNwbwKXDrK0EINfawcN4LhR5hHN4Wef79vTA'from Crypto.Cipher import PKCS1_v1_5
RSA.sign(token, msg.pkcs1_15,)

head_payload = hashlib.sha256(b'eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOmZhbHNlfQ').digest()
sign = pow(bytes_to_long(head_payload),d,n)
sign = long_to_bytes(sign)
z = base64.b64encode(sign).decode().strip("=").replace('+', '-').replace('/', '_')
print(z, len(z))

print("  Hello   ")





import base64
def b64urldecode(b64):
    return base64.urlsafe_b64decode(b64+("="*(len(b64) % 4)))

jwt0 = 'eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOmZhbHNlfQ.VWtO2Q_H5QcYbhrCDRwX386fEd_KYGI9Fvj9LhYDgR94e1nMlnnYQs9fn6weviZkfaguwzd-huAaBCZwWZz-EyeOfnrd8UYGB_Z_pq2euEmLgtB4zNpsIubQmvfxicgUz_5JEHuVNV6bUk89dIyAGuaHHStmWau3GTBydk4dV_CrPQpxbqyqiBmLA71YWsfZQOZmUrGL79rEqwLZjrLcYFFzqGSgglVJbPYS1OId4kQ2Wh200L-PNV7qDYClBf_Hi4Og7OxPDltINVofis7D14BGGEVD-OUDtQJATlYBVWx9KhyHrYnNwbwKXDrK0EINfawcN4LhR5hHN4Wef79vTA'
jwt0_sig_bytes = b64urldecode(jwt0.split('.')[2])
print(len(jwt0_sig_bytes))


head_payload = 'eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOmZhbHNlfQ'
from Crypto.Hash import SHA256
from Crypto.Signature import PKCS1_v1_5 
sha256_0=SHA256.new(head_payload.encode('ascii'))
padded0 = PKCS1_v1_5.EMSA_PKCS1_V1_5_ENCODE(sha256_0, 256)
print(padded0)

import jwt
import requests
import base64

print(jwt.__version__)

username = 'manny'

r = requests.get(f'http://web.cryptohack.org/rsa-or-hmac-2/create_session/{username}')
encoded = r.json()["session"]

print(encoded)

lest = list(encoded.split("."))
header = lest[0]
payload = lest[1]
sign = lest[2]

print(header)
print(payload)
print(sign)



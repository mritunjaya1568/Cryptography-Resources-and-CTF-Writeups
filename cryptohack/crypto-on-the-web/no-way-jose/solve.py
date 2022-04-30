import requests
import base64
import json
import jwt

def jwt_id(token):
	id_b64 = token.replace('-', '+').replace('_', '/')
	header = id_b64.split('.')[0] + "==="
	payload = id_b64.split('.')[1] + "==="
	sign = id_b64.split('.')[-1] + "==="
	print(header,payload,sign)

	header = base64.b64decode(header.encode())
	payload = base64.b64decode(payload.encode())
	sign = base64.b64decode(sign.encode())

	print(header,payload,sign)


# unsecured jwt
def create_session(username):
    encoded = jwt.encode({'username': username, 'admin': True},key = "",algorithm = 'none')
    return {"session": encoded.decode()}


username = 'manny'
r = requests.get(f'https://web.cryptohack.org/no-way-jose/create_session/manny')
session_id = r.json()["session"]


jwt_id(session_id)


r2 = requests.get(f'https://web.cryptohack.org/no-way-jose/authorise/{session_id}')
print(r2.json())


fraud_id = create_session('manny')["session"]
print(fraud_id)


r2 = requests.get(f'https://web.cryptohack.org/no-way-jose/authorise/{fraud_id}')
print(r2.json())


'''{'response': 'Welcome admin, here is your flag: crypto{The_Cryptographic_Doom_Principle}'}
'''

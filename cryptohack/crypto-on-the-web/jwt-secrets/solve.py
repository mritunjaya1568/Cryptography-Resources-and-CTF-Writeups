import jwt
import requests


def create_session(username):
    encoded = jwt.encode({'username': username, 'admin': True},key = "secret",algorithm = 'HS256')
    return {"session": encoded.decode()}

username = 'manny'
r = requests.get(f'https://web.cryptohack.org/jwt-secrets/create_session/{username}')
session_id = r.json()['session']
print(session_id)


r2 = requests.get(f'https://web.cryptohack.org/jwt-secrets/authorise/{session_id}')
print(r2.json())

fraud_id = create_session(username)["session"]

r2 = requests.get(f'https://web.cryptohack.org/jwt-secrets/authorise/{fraud_id}')
print(r2.json())



'''{'response': 'Welcome admin, here is your flag: crypto{jwt_secret_keys_must_be_protected}'}
'''

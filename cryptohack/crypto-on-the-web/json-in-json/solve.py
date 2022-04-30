import requests 
import json
import jwt

username = "manny" + '", "admin": "' + "True"

body = '{' \
          + '"admin": "' + "False" \
          + '", "username": "' + str(username) \
          + '"}'

print(body)

print(json.loads(body))

r = requests.get(f'http://web.cryptohack.org/json-in-json/create_session/{username}')
token = r.json()["session"]

print(token)

r2 = requests.get(f'http://web.cryptohack.org/json-in-json/authorise/{token}/')
print(r2.json())




''' {"admin": "False", "username": "manny", "admin": "True"}
{'admin': 'True', 'username': 'manny'}
eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJhZG1pbiI6IlRydWUiLCJ1c2VybmFtZSI6Im1hbm55In0.vwSWKFrEH-1v5VaH-8O1U7B-6qB6Da16EE1yqjhAKmY
{'response': 'Welcome admin, here is your flag: crypto{https://owasp.org/www-community/Injection_Theory}'}
'''


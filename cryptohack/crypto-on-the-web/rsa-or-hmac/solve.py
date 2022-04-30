from Crypto.PublicKey import RSA
import jwt 
import requests

print(jwt.__version__)

def create_session(username,key):
	encoded = jwt.encode({'username':username, 'admin':True},key = key,algorithm = 'HS256')
	return {"session":encoded.decode()}

user = "manny"
r = requests.get(f'http://web.cryptohack.org/rsa-or-hmac/create_session/{user}')

session_id = r.json()["session"]
print(session_id)


r2 = requests.get(f'http://web.cryptohack.org/rsa-or-hmac/get_pubkey/')
pub_key = r2.json()["pubkey"]


# pub_key = RSA.import_key(pub_key)
# print(pub_key.has_private())

# n = pub_key.n
# e = pub_key.e

# print(n,e)

token = create_session(user,pub_key)["session"]
print(token)


r2 = requests.get(f'http://web.cryptohack.org/rsa-or-hmac/authorise/{token}')
print(r2.json())


'''1.5.0
eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOmZhbHNlfQ.V3W5Y5io9euKhZCu8BCRZMQ2rF1iIeFbes03FYrXDnyf4ymbvxFfwupJ5TeukQJ4GaIb17e3bE0pUmct4QStBbYJX4IwTXKvFXbFP3-KSgAawcQVGL59Pws2ahmkZr38Rq-7Ag5FBKxBEEeR2gQb9IiXVmZulEWhsVzeY2voExwvS4_dOXzYvfna9RTnUruZDvXjBj-ifFwAXB8kEvpufcayuZAADkYWvS6457mJJSvOtdD6Y8el7cMFwKQ4x4bA30t9c4Gp68EBS1ppZdfY22n9C3WkBy4Xh-f4X16pdyWpwxulgLE01_y_Cw2kmPH9AEaRZLQyqxcJNtaBtB97Wg
eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1c2VybmFtZSI6Im1hbm55IiwiYWRtaW4iOnRydWV9.Z_9RocZIhbNTX2j3Y-V-Qs0NKUwkd-eXg7k0mP2S9Gw
{'response': 'Welcome admin, here is your flag: crypto{Doom_Principle_Strikes_Again}'}
'''

''' downgrade jwt to 1.5.0 by 
pip3 install pyjwt==1.5.0

bcz updated versions will not allow to make hs256 signature from rsa key
'''


''' to upgrade again 
pip3 install pyjwt==2.3.0'''

'''
when running this code with update versions then it will give error 
jwt.exceptions.InvalidKeyError: The specified key is an asymmetric key or x509 certificate and should not be used as an HMAC secret.
'''




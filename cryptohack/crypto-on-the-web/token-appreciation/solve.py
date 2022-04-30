import jwt
import base64

encoded_jwt = jwt.encode({ "some": "payload" }, "val" , algorithm = "HS256")

# this returns in bytes format
print(encoded_jwt)


data = jwt.decode(encoded_jwt, "val" , algorithm = ["HS256"])
print(data)


# encoded_flag = b'eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJmbGFnIjoiY3J5cHRve2p3dF9jb250ZW50c19jYW5fYmVfZWFzaWx5X3ZpZXdlZH0iLCJ1c2VyIjoiQ3J5cHRvIE1jSGFjayIsImV4cCI6MjAwNTAzMzQ5M30.shKSmZfgGVvd2OSB2CGezzJ3N6WAULo3w9zCl_T47KQ'

# flag = jwt.decode(encoded_flag ,algorithm = ["HS256"])

# print(flag)


header = b'eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9'
payload = b'eyJmbGFnIjoiY3J5cHRve2p3dF9jb250ZW50c19jYW5fYmVfZWFzaWx5X3ZpZXdlZH0iLCJ1c2VyIjoiQ3J5cHRvIE1jSGFjayIsImV4cCI6MjAwNTAzMzQ5M30='
print(len(payload))

header = base64.b64decode(header).decode()
print(header)

payload = base64.b64decode(payload)
print(payload)

'''{"typ":"JWT","alg":"HS256"}
b'{"flag":"crypto{jwt_contents_can_be_easily_viewed}","user":"Crypto McHack","exp":2005033493}'''



''' flag = crypto{jwt_contents_can_be_easily_viewed}'''

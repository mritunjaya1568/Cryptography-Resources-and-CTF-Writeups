import base64
import requests

# get username and add it to the payload and base64 encode it
username_raw = input("Username: ")
username_with_string = '{"username":"'+username_raw+'","admin": true}'
encodedBytes = base64.b64encode(username_with_string.encode("utf-8"))
encodedUsr = str(encodedBytes, "utf-8").rstrip("=")

# add the payload to the header
string = "eyJ0eXAiOiJKV1QiLCJhbGciOiJub25lIn0"+"."+encodedUsr
string += "."

print(f"Final Token(Don't forget the dot at the end): {string}")


r2 = requests.get(f'https://web.cryptohack.org/no-way-jose/authorise/{string}')
print(r2.json())


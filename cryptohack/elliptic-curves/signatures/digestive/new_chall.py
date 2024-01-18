import hashlib
import json
import string
from ecdsa import SigningKey
from Crypto.Util.number import long_to_bytes, bytes_to_long

SK = SigningKey.generate() # uses NIST192p
VK = SK.verifying_key
order = int(SK.privkey.order)

class HashFunc:
    def __init__(self, data):
        self.data = data

    def digest(self):
        # return hashlib.sha256(data).digest()
        return long_to_bytes ( int(bytes_to_long(self.data) % order) )



def sign(username):
    sanitized_username = "".join(a for a in username if a in string.ascii_lowercase)
    msg = json.dumps({"admin": False, "username": sanitized_username})
    signature = SK.sign(
        msg.encode(),
        hashfunc=HashFunc,
    )

    # remember to remove the backslashes from the double-encoded JSON
    return {"msg": msg, "signature": signature.hex()}


def verify(msg, signature):
    try:
        VK.verify(
            bytes.fromhex(signature),
            msg.encode(),
            hashfunc=HashFunc,
        )
    except:
        return {"error": "Signature verification failed"}

    verified_input = json.loads(msg)
    if "admin" in verified_input and verified_input["admin"] == True:
        return {"flag": FLAG}
    else:
        return {"error": f"{verified_input['username']} is not an admin"}
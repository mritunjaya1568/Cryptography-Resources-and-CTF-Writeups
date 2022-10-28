from Crypto.Util.number import bytes_to_long as bl, inverse
from fastecdsa.curve import secp256k1
from base64 import urlsafe_b64decode, urlsafe_b64encode
from hashlib import sha256
from json import loads, dumps


user1 = ('manny','manny')
token1 = 'eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyIjoibWFubnkifQ.75J83TiCMONIDtDLvDQ8FKHa4wx7DNHkauX-Izu11S_1zHInYw5FyTymStGNXi_1n6pZOCmIAx7WL5qtQ2xX_Q'

user2 = ('manny2','manny2')
token2 = 'eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyIjoibWFubnkyIn0.75J83TiCMONIDtDLvDQ8FKHa4wx7DNHkauX-Izu11S-LRPkqXc9d61brKbg8RHt0rDgFFWF-nOBi63U93X3dIA'



# token = jwt.sign({"user": username})
# token1  = jwt.sign({"user":"manny"})
# token2  = jwt.sign({"user":"manny2"})


# token that we have to sign - jwt.sign({"user":"admin"})


G = secp256k1.G
order = secp256k1.q
# k - private key

# private
# public = G * private



def b64decode(msg: str) -> bytes:
    if len(msg) % 4 != 0:
        msg += "=" * (4 - len(msg) % 4)
    return urlsafe_b64decode(msg.encode())


def b64encode(msg: bytes) -> str:
    return urlsafe_b64encode(msg).decode().rstrip("=")


def _sign(msg):
    z = sha256(msg.encode()).digest()
    z = bl(z)
    r = (k * G).x
    s = inverse(k, order) * (z + r * k) % order 
    return r, s

def sign(data):
    header = b64encode(
        dumps({"alg": "ES256", "typ": "JWT"}).replace(" ", "").encode()
    )
    data = b64encode(dumps(data).replace(" ", "").encode())
    print(header,data)
    r, s = _sign(header + "." + data)
    signature = r.to_bytes(32, "little") + s.to_bytes(32, "little") # 256 bits only , but everything will be stored reverse
    # int.from_bytes(b64decode(b64encode(p.to_bytes(32,"little"))),"little") - will be p again
    return header + "." + data + "." + b64encode(signature)

def _verify(r, s, msg):
    if not (1 <= r < order and 1 <= s < order):
        return False

    z = sha256(msg.encode()).digest()
    z = bl(z)

    u1 = z * inverse(s, order) % order
    u2 = r * inverse(s, order) % order

    p = u1 * G + u2 * public

    return r == p.x

# return true if the token signature matches the data
def verify(data, signature):
    r = int.from_bytes(signature[:32], "little")
    s = int.from_bytes(signature[32:], "little")

    return _verify(r, s, data)

def decode(token):
    _header, _data, _signature = token.split(".")
    header = loads(b64decode(_header)) # will convert a valid json string to python dictionary
    data = loads(b64decode(_data))
    signature = b64decode(_signature)
    print(header, data , signature)

    # if header["alg"] != "ES256":
    #     raise Exception("Algorithm not supported!")

    # if not self.verify(_header + "." + _data, signature):
    #     raise Exception("Invalid signature")

    # return {"user": data["user"]}


print(token1)

# print(sign({"user":"manny"}))

signature1 = '75J83TiCMONIDtDLvDQ8FKHa4wx7DNHkauX-Izu11S_1zHInYw5FyTymStGNXi_1n6pZOCmIAx7WL5qtQ2xX_Q'
sig1 = b64decode(signature1)
r1 = int.from_bytes(sig1[:32], "little")
s1 = int.from_bytes(sig1[32:], "little")
print("Order of curve: ",order)
print("r1 and s1:",r1,s1,sep="\n")

msg1 = "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyIjoibWFubnkifQ"
z1 = sha256(msg1.encode()).digest()
z1 = bl(z1)

print(z1)

from Crypto.Util.number import inverse
k = (z1 * inverse(s1-r1,order)) % order

t2 = sign({"user":"manny2"})
print(t2)
print(token2)

final_token = sign({"user":"admin"})
print(final_token)

# maple{3ll1pt!c_c2rv3s_f7w!!!}










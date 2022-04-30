# So we could simply use some tool to load that public key for us. However not only would that be absolutely no fun, but we would also learn nothing! Nooooooo ><

# A quick google search and following links on how to decode ssh-rsa files are enough. As described in the challenge description, such a file is composed of several lines of the form:

# "ssh-rsa" <keydata> <user>
# Where <keydata> is some base 64 thingy and <user> is the name of the user. (no joke!)

# Actually, <keydata> is more than random garbage! It's a sequence of parts organized like this:

# <length: 4 bytes><data: length bytes>
# In our case, these parts are in the following order:

# algorithm (duplicate of ssh-rsa)
# exponent
# modulus
from base64 import b64decode
with open('bruce-public.pub', 'r') as file:
    raw = file.read()

_, keydata, _ = raw.split()
keydata = b64decode(keydata)

parts = []
while keydata:
    length = int.from_bytes(keydata[:4], 'big')
    parts.append(keydata[4:4+length])
    keydata = keydata[4+length:]

_, e, n = [int.from_bytes(part, 'big') for part in parts]
print(f'{e = }')
print(f'{n = }')


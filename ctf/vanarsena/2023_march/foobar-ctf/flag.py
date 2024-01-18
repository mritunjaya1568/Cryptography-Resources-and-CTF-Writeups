import hashlib

from secret import S_BOX, I


h = hashlib.new('sha256')
h.update(bytes(S_BOX[I]).hex().encode())
print(h.hexdigest())
# Enclose the hexdigest in GLUG{}

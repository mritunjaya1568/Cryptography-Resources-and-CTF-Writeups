from itertools import product
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad
c=bytes.fromhex('6fd517100da106de23879a6b95308b61574d98e72a33376ac874645ff3c71384ab6b95125851305ac011ccdbe1408488e7d39a52066176feb2b2622ab54a0749f0173c24390020d27c4321e3f4f911afa2b546ddbb889fca77ca442bc463f162')
alphabet = b'0123456789abcdef'
const = b'cyb3rXm45!@#'

pt=pad(b'aaaaaaaaaaaaaaaa',16)
ct=bytes.fromhex("13c870366c786740fe06e4f75e38eea77a50ea6c00039a64be9879ac75572ee2")

key=[bytes(i) for i in product(alphabet,repeat=4)]
x1,y1={},{}
x2,y2=set(),set()
for k in key:
    t1=AES.new(const+k,AES.MODE_ECB).encrypt(pt)
    t2=AES.new(k+const,AES.MODE_ECB).decrypt(ct)
    x1[t1]=k
    y1[t2]=k
    x2.add(t1)
    y2.add(t2)

crr=x2.intersection(y2).pop()

key1=const+x1[crr]
key2=y1[crr]+const

print(AES.new(key1,AES.MODE_ECB).decrypt(AES.new(key2,AES.MODE_ECB).decrypt(c)).decode().strip())
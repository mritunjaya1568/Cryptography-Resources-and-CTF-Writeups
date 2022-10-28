from Crypto.Util.number import *
from Crypto.PublicKey import RSA
from pwn import *

f = open("pubkey.pem","rb")
key = RSA.import_key(f.read())
print(key.n)
print(key.e)


n = key.n
e = key.e
ct = int('375e87268b1a9421f410c4d6e8abe18315375631e1550c978011410b3785c3aa13cbde12227b908481152924286f70f8cfaec8592efe5cdb86fc80647dfff8755523d6068736de5918f676557b59ea54260174b539853decd0c569b2353ce954e7fb3954639636ccdc5f6ef366697e609cf6b1e2261e45a9f1a8d8ade9582d59d2f003f11d308536d2a1673caf987f200d8f7e9cde2b15dfe5c12f32e7c09cab99e30b3d2589d89e6bef339844533df3e7c29c0dc0266344ee8a6df4cba6286265554e29948b4c0a2146e30b5aa9979db89ae7ad2a1f9082862ee405510f9f2e38a19dd0ad94f24ca7a1deaf1013879a06f99c0bdb2ea3138d68b6804c9ea1e4',16)

# nc 52.59.124.14 10006


m_1 = 1

r = remote("52.59.124.14","10006")
print(r.recvlines(4))



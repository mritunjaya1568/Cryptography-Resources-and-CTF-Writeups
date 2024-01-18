from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto.Util.Padding import pad,unpad

# password - explorer
secret_code = "explorer"
key1 = RSA.import_key(open("priv1.key").read())
key1_pub = RSA.import_key(open("pub1.key").read())

key2 = RSA.import_key(open("priv2.key").read())
key2_pub = RSA.import_key(open("pub.key").read())

cipher_rsa1 = PKCS1_OAEP.new(key1)
cipher_rsa2 = PKCS1_OAEP.new(key2)

file_in = open("dump2",'rb').read()
aes_key = open("dump3",'rb').read()


cipher_rsa1.decrypt(file_in)
cipher_rsa2.decrypt(file_in)


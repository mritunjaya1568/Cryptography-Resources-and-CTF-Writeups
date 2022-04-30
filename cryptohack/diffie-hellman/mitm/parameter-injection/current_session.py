# coding: utf-8
dect = {"p": "0xffffffffffffffffc90fdaa22168c234c4c6628b80dc1cd129024e088a67cc74020bbea63b139b22514a08798e3404ddef9519b3cd3a431b302b0a6df25f14374fe1356d6d51c245e485b576625e7ec6f44c42e9a637ed6b0bff5cb6f406b7edee386bfb5a899fa5ae9f24117c4b1fe649286651ece45b3dc2007cb8a163bf0598da48361c55d39a69163fa8fd24cf5f83655d23dca3ad961c62f356208552bb9ed529077096966d670c354e4abc9804f1746c08ca237327ffffffffffffffff", "g": "0x02", "A": "0x521a3ed2b9aa12d01858401b9a7936e3d8db923d9699fbdb2bc9149cdfc4edd30ade93c95b3abd41f06f1327863d9b528b2f9d14eb3ac62f7bec1cd68c5709f02b333b0556c3ffd33431480508aa32912dd9cb6cda950fce7902435f6edc166f89ff16e018e87e2d3dfc9af3a700649d216b4f2bf6ff56c4daefef587a7991d8ad0925c6aeacf2577d84e092269d07015f4ae078eed147fd3bf3510e4cc0bab943bc3779430b5d8a12a7f396eb8b1f525883ade714c3bd1071ea7bcc77d45089"}
p = int(dect["p"],16)
g = int(dect["g"],16)
A = int(dect["A"],16)
print(p)

e = 65537
E = pow(g,e,p)
E = hex(E)
print(E)
dect2 = {"iv": "310db4fa0a6a4676585249a1524a0d62", "encrypted_flag": "d9bf42b215e5d1de3f056db7dce05292032b520ac11f1ca12c92876e83a40f93"}
iv = int(dect2["iv"],16)
secret = int(dect2["encrypted_flag"],16)
iv 
secret
iv = dect2["iv"]
iv
ciphertext = dect2["encrypted_flag"]
ciphertext
def decrypt_flag(shared_secret: int, iv: str, ciphertext: str):
    # Derive AES key from shared secret
    sha1 = hashlib.sha1()
    sha1.update(str(shared_secret).encode('ascii'))
    key = sha1.digest()[:16]
    # Decrypt flag
    ciphertext = bytes.fromhex(ciphertext)
    iv = bytes.fromhex(iv)
    cipher = AES.new(key, AES.MODE_CBC, iv)
    plaintext = cipher.decrypt(ciphertext)

    if is_pkcs7_padded(plaintext):
        return unpad(plaintext, 16).decode('ascii')
    else:
        return plaintext.decode('ascii')
        
s_secret = pow(A,e,p)
decrypt_flag(s_secret,iv,ciphertext)
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
import hashlib
decrypt_flag(s_secret,iv,ciphertext)
def is_pkcs7_padded(message):
    padding = message[-message[-1]:]
    return all(padding[i] == len(padding) for i in range(0, len(padding)))
    
decrypt_flag(s_secret,iv,ciphertext)
'crypto{n1c3_0n3_m4ll0ry!!!!!!!!}'
get_ipython().run_line_magic('save', 'current_session ~0/')

# coding: utf-8
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
import hashlib


def is_pkcs7_padded(message):
    padding = message[-message[-1]:]
    return all(padding[i] == len(padding) for i in range(0, len(padding)))


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
        
decrypt_flag(1,"9a70b92a196b08917589e6bcdd64e6ef","30e3d46d703bc3b02bf33ef48052caf9edb9554e1ac4a37fb24eceb7fd4dc38f4b8cc148022e3e7b3c4b51a6a65d72454df160eb019a4809b682d76b08230ea8cb5f51cd08fbe62da1a54fa34529afa1")
secret = "0xe598548d32b69e12d158a328e40b5113e40f2f7e8148209f3056415e62ffcb25e15c4f10ed7ad66ed85b33b66e894a8e51a6804f929e0e877299cebc963eff7d8104d442d38f652fa9d9dea1592e2076bc1647f5e8a421430e59f6f22ec53fe401cc60bd7f77f291b0c8b58e383406f46e9a198ac4a424c005c1f824ef7213366a73a2ad60b122bb03735649adff5514af1a4a413d303b2077abe01b4c497d10e75adbeb638dcbcafb83822381a513e0931ec4512b02f9bbf853ae84166455f2"
secret = int(secret,16)
secret
decrypt_flag(secret,"5375c473f1a35cfca8f693dd4bf50753","7b2ae2b0b52ff39b3024d584041e479149a3ec014be7a4bffe5a2725a5a9b07c")
'crypto{n07_3ph3m3r4l_3n0u6h}'
get_ipython().run_line_magic('ls', '')
get_ipython().run_line_magic('save', 'current-session ~0/')

# coding: utf-8
dect = {"p": "0xde26ab651b92a129", "g": "0x2", "A": "0x8181a568687a4104"}
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
        
secret = 12916154016552966759
iv = 59ebee33e88e40bee3720ac0f861a457
iv = '59ebee33e88e40bee3720ac0f861a457'
ct = '1aa447fa1007547fa8d5b1df72124c374d82136e735d5b88d36204ced5845157'
decrypt_flag(secret,iv,ct)
crypto{d0wn6r4d35_4r3_d4n63r0u5}
get_ipython().run_line_magic('save', 'current-session-ipython ~0/')

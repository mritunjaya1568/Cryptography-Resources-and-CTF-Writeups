from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
from Crypto.Util.number import *
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



# ➜  additive nc socket.cryptohack.org 13380
# Intercepted from Alice: {"p": "0xffffffffffffffffc90fdaa22168c234c4c6628b80dc1cd129024e088a67cc74020bbea63b139b22514a08798e3404ddef9519b3cd3a431b302b0a6df25f14374fe1356d6d51c245e485b576625e7ec6f44c42e9a637ed6b0bff5cb6f406b7edee386bfb5a899fa5ae9f24117c4b1fe649286651ece45b3dc2007cb8a163bf0598da48361c55d39a69163fa8fd24cf5f83655d23dca3ad961c62f356208552bb9ed529077096966d670c354e4abc9804f1746c08ca237327ffffffffffffffff", "g": "0x02", "A": "0x13ebb7cb3eb6a015f35ae6d7a3035cf0acd1b178d95a50d8cc8084b6917b9a7b0aaddaaf31a5faa77b79cbd7179115559295729e1db0ffb77b51be7528dfd3d61e1e7a23f013f7268924f07528e032241b678e5fef65e17c921e0c373f60e71730a5ab6beac7fff2ab7e7a649f4febd50bc22089b69b653e7ba479e3373750af7743e84fad27a25f32b9385ef0929d963ccdd3258aa4adff9e7f40613861044bbda1799844864d77e42154967a73a8b8acf0fc7643d73e579fe50bf1ab1e797"}
# Intercepted from Bob: {"B": "0x770566c351b11e755babcdefe899e9baa2000752d9551acb5027976f4ca55f912092c225eebecb9d0db70d56bbc2a5a99c036afd457256926f1fc633f252e4314ef4f27e7e1cc22f20a8ffbd96a2421b1ba35446a3f85f6e6f64bcc57a98b8f6cf4924f417bf3954f1783617922d23b3d4c2afd4442e1981325848dfcd70c0a8ca18f3f16fc27e2cf83186ebdea70664705e3ea8ebef72968ebcafe1c83e2991b573cbfe254f8a362003fd2059907a4e8e7bf6bde51ee32889ee919a7ae7db0f"}
# Intercepted from Alice: {"iv": "d8ccce707387f33d515338e789d2ac7f", "encrypted": "d8de7f4191a1d9873e3fc3177f8a60ef26c1b316c1a07d2f11424802e190e4dff21bc013a5c4ad709c00ba50975555e6"}

iv = "d8ccce707387f33d515338e789d2ac7f"
encrypted = "d8de7f4191a1d9873e3fc3177f8a60ef26c1b316c1a07d2f11424802e190e4dff21bc013a5c4ad709c00ba50975555e6"
dect = {"p": "0xffffffffffffffffc90fdaa22168c234c4c6628b80dc1cd129024e088a67cc74020bbea63b139b22514a08798e3404ddef9519b3cd3a431b302b0a6df25f14374fe1356d6d51c245e485b576625e7ec6f44c42e9a637ed6b0bff5cb6f406b7edee386bfb5a899fa5ae9f24117c4b1fe649286651ece45b3dc2007cb8a163bf0598da48361c55d39a69163fa8fd24cf5f83655d23dca3ad961c62f356208552bb9ed529077096966d670c354e4abc9804f1746c08ca237327ffffffffffffffff", "g": "0x02", "A": "0x13ebb7cb3eb6a015f35ae6d7a3035cf0acd1b178d95a50d8cc8084b6917b9a7b0aaddaaf31a5faa77b79cbd7179115559295729e1db0ffb77b51be7528dfd3d61e1e7a23f013f7268924f07528e032241b678e5fef65e17c921e0c373f60e71730a5ab6beac7fff2ab7e7a649f4febd50bc22089b69b653e7ba479e3373750af7743e84fad27a25f32b9385ef0929d963ccdd3258aa4adff9e7f40613861044bbda1799844864d77e42154967a73a8b8acf0fc7643d73e579fe50bf1ab1e797"}
dect2 = {"B": "0x770566c351b11e755babcdefe899e9baa2000752d9551acb5027976f4ca55f912092c225eebecb9d0db70d56bbc2a5a99c036afd457256926f1fc633f252e4314ef4f27e7e1cc22f20a8ffbd96a2421b1ba35446a3f85f6e6f64bcc57a98b8f6cf4924f417bf3954f1783617922d23b3d4c2afd4442e1981325848dfcd70c0a8ca18f3f16fc27e2cf83186ebdea70664705e3ea8ebef72968ebcafe1c83e2991b573cbfe254f8a362003fd2059907a4e8e7bf6bde51ee32889ee919a7ae7db0f"}

p = int(dect["p"],16)
g = int(dect["g"],16)
A = int(dect["A"],16)



B = int(dect2["B"],16)

secret = (A*B*inverse(g,p))%p
print(secret)


print(decrypt_flag(secret,iv,encrypted))


''''crypto{cycl1c_6r0up_und3r_4dd1710n?}'''






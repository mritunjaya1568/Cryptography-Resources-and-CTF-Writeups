from Crypto.Util.Padding import unpad
from Crypto.Cipher import AES

key_len = 2
bs = 16

iv = bytes.fromhex("1df49bc50bc2432bd336b4609f2104f7")
ct = bytes.fromhex("a40c6502436e3a21dd63c1553e4816967a75dfc0c7b90328f00af93f0094ed62")

# bruteforce key with starting 2 bytes random and last 14 bytes 0x0e
for i in range(0, 2**16):
    key = i.to_bytes(2, "big") + b"\x0e" * 14
    print(key, len(key))
    cipher = AES.new(key, AES.MODE_CBC, iv)
    pt = cipher.decrypt(ct)
    if pt.startswith(b"cvctf{"):
        print(pt)
        break


# cvctf{b4by_AES_s1mpL3}

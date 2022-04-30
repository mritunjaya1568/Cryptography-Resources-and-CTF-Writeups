import requests

r = requests.get('https://aes.cryptohack.org/paper_plane/encrypt_flag/')

dest = r.json()
print(dest)

ct = dest["ciphertext"]
m0 = dest["m0"]
c0 = dest["c0"]

print(ct)
print(m0)
print(c0)

# ct = bytes.fromhex(ct)
# m0 = bytes.fromhex(m0)
# c0 = bytes.fromhex(c0)

# print(ct)
# print(m0)
# print(c0)


r2 = requests.get(f'https://aes.cryptohack.org/paper_plane/send_msg/{ct}/{m0}/{c0}')
print(r2.json())
	
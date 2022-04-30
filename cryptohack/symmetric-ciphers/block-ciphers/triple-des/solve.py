import requests
import os


''' Use weak keys '''
'''
links 
https://discord.com/channels/882956764079882282/882956764520280118
https://en.wikipedia.org/wiki/Weak_key
https://en.wikipedia.org/wiki/Data_Encryption_Standard
https://en.wikipedia.org/wiki/Triple_DES
'''

key = 'FEFEFEFEFEFEFEFE' + '0101010101010101'

r = requests.get(f'https://aes.cryptohack.org/triple_des/encrypt_flag/{key}')
ct = r.json()["ciphertext"]
print(ct)


r = requests.get(f'https://aes.cryptohack.org/triple_des/encrypt/{key}/{ct}')
pt = r.json()["ciphertext"]
pt = bytes.fromhex(pt)
print(pt)

''' b'crypto{n0t_4ll_k3ys_4r3_g00d_k3ys}\x06\x06\x06\x06\x06\x06'
'''


# solution by codecrafting , one of the best solutions which is easily understood

import requests, sys

solution = "crypto{"
chars = 'ABCDEFGHIJKLMNOPQRTSUVWXYZ0123456789_abcdefghijklmnopqrstuvwxyz}'
invalid_char = ';'

while True:
    p = (solution + invalid_char) * 2
    r = requests.get("https://aes.cryptohack.org/ctrime/encrypt/" + p.encode('ascii').hex()).json()
    sample = len(r['ciphertext'])
    for c in chars:
        r = requests.get("https://aes.cryptohack.org/ctrime/encrypt/" + ((solution + c) * 2).encode('ascii').hex()).json()
        if len(r['ciphertext']) < sample:
            solution += c
            print(solution)
            if c == "}":
                print("Solution Found!", solution)
                sys.exit()
            break
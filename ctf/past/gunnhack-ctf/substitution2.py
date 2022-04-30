from binascii import hexlify
from random import shuffle
from secret import generate_message


def generate_challenge(flag):
    message = generate_message(flag)

    encoded = hexlify(message.encode()).decode()  # encoding string to bytes and then bytes to string
    hex_chars = "0123456789abcdef"
    shuffled = list(hex_chars)
    shuffle(shuffled)
    shuffled = ''.join(shuffled)

    table = str.maketrans(hex_chars, shuffled)
    ciphertext = encoded.translate(table)

    with open("substitution2.txt", 'w') as f:
        f.write(ciphertext + '\n')

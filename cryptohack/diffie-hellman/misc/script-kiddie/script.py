from Crypto.Cipher import AES
import hashlib
import secrets


def header():
    print("""  _____  _  __  __ _
 |  __ \(_)/ _|/ _(_)
 | |  | |_| |_| |_ _  ___
 | |  | | |  _|  _| |/ _ \
 | |__| | | | | | | |  __/
 |_____/|_|_| |_| |_|\___|
 | |  | |    | | |
 | |__| | ___| | |_ __ ___   __ _ _ __
 |  __  |/ _ \ | | '_ ` _ \ / _` | '_ \
 | |  | |  __/ | | | | | | | (_| | | | |
 |_|  |_|\___|_|_|_| |_| |_|\__,_|_| |_|

                                        """)


def is_pkcs7_padded(message):
    padding = message[-message[-1]:]
    return all(padding[i] == len(padding) for i in range(0, len(padding)))


def pkcs7_unpad(message, block_size=16):
    if len(message) == 0:
        raise Exception("The input data must contain at least one byte")
    if not is_pkcs7_padded(message):
        return message
    padding_len = message[-1]
    return message[:-padding_len]


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
    return pkcs7_unpad(plaintext).decode('ascii')


def generate_public_int(g, a, p):
    return g ^ a % p


def generate_shared_secret(A, b, p):
    return A ^ b % p


def goodbye():
    print('Goodbye!')


def main():
    header()
    print('[-] Collecting data from Alice')
    p = int(input('> p: '))
    q = (p - 1) // 2
    g = int(input('> g: '))
    A = int(input('> A: '))
    print('[+] All data collected from Alice')

    print('[+] Generating public integer for alice')
    b = secrets.randbelow(q)
    B = generate_public_int(g, b, p)
    print(f'[+] Please send the public integer to Alice: {B}')
    print('')
    input('[+] Press any key to continue')
    print('')

    print('[+] Generating shared secret')
    shared_secret = generate_shared_secret(A, b, p)

    query = input('Would you like to decrypt a message? (y/n)\n')
    if query == 'y':
        iv = input('[-] Please enter iv (hex string)\n')
        ciphertext = input('[-] Please enter ciphertext (hex string)\n')
        flag = decrypt_flag(shared_secret, iv, ciphertext)
        print(f'[+] Flag recovered: {flag}')
        goodbye()
    else:
        goodbye()


if __name__ == '__main__':
    main()

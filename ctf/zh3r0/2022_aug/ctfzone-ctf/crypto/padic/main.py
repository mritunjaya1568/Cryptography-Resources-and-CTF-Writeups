import padic
import argparse


def encrypt_block(plaintext: str, key: str, p=5, block=1):
    pt_padic = padic.Padic(p, 128)
    k_padic = padic.Padic(p, 128)
    cyphertext = []
    plaintext_blocked = []
    block_i = 0
    pt_block = 0
    k_temp = 0

    for pt in plaintext:
        pt_block = (pt_block << 8) | ord(pt)
        block_i += 1
        if block_i == block:
            plaintext_blocked.append(pt_block)
            block_i = 0
            pt_block = 0
    if block_i != 0:
        pt_block <<= 8 * (block - block_i)
        plaintext_blocked.append(pt_block)

    for k in key:
        k_temp = (k_temp << 8) | ord(k)
    k_padic.initialize_by_value(k_temp)

    for pt in plaintext_blocked:
        pt_padic.initialize_by_value(pt)
        cyphertext.append(pt_padic / k_padic)
    return cyphertext

def decrypt_block(cyphertext: list, key: str, p=5, block=1):
    pt_padic = padic.Padic(p, 128)
    k_padic = padic.Padic(p, 128)
    res = ""
    k_temp = 0

    for k in key:
        k_temp = (k_temp << 8) | ord(k)
    k_padic.initialize_by_value(k_temp)

    for ct_padic in cyphertext:
        pt_padic = ct_padic * k_padic
        pt_blocked = pt_padic.get_value()
        pt_temp = []
        for _ in range(block):
            pt_temp.append(pt_blocked & 255)
            pt_blocked >>= 8
        pt_temp.reverse()
        for pt in pt_temp:
            res += chr(pt)
    res = res.rstrip('\x00')
    return res

def main():
    mode = ""
    plaintext_file = ""
    cyphertext_file = ""
    key_file = ""
    plaintext = ""
    cyphertext = []
    key = ""
    p = 0
    block = 1

    parser = argparse.ArgumentParser(description='Very strong cypher')
    parser.add_argument('-p', type=int, required=True, help='Prime module')
    parser.add_argument('--block', type=int, default=1, help='Size of block')
    parser.add_argument('-d', action="store_true", help='Decryption mode. Default mode is encryption')
    parser.add_argument('--input-file', type=str, required=True, help='Input file')
    parser.add_argument('--output-file', type=str, required=True, help='Output file')
    parser.add_argument('--key-file', type=str, required=True, help='Key file')
    args = parser.parse_args()

    p = args.p
    block = args.block

    if args.d:
        mode = "decrypt"
        plaintext_file = args.output_file
        cyphertext_file = args.input_file
        key_file = args.key_file
    else:
        mode = "encrypt"
        plaintext_file = args.input_file
        cyphertext_file = args.output_file
        key_file = args.key_file
  
    if mode == "encrypt":
        with open(plaintext_file, "r") as f:
            plaintext = f.read()
        with open(key_file, "r") as f:
            key = f.read()
        cyphertext = encrypt_block(plaintext, key, p, block)
        with open(cyphertext_file, "w") as f:
            for ct in cyphertext:
                f.write(ct.dump() + "\n")
    elif mode == "decrypt":
        with open(cyphertext_file, "r") as f:
            for ct in f.readlines():
                c = padic.Padic.undump(ct, p)
                cyphertext.append(c)
        with open(key_file, "r") as f:
            key = f.read()
        plaintext = decrypt_block(cyphertext, key, p, block)
        with open(plaintext_file, "w") as f:
            f.write(plaintext)

if __name__ == "__main__":
    main()

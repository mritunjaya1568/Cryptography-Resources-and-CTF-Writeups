import os
import sys
import time

from secret import S_BOX, I
from archive import GhOST


S_BOX: list[list[int]]

TRIALS = 300
PROMPT = """
AVAILABLE OPTIONS!

[E]ncrypt msg (hex)
[D]ecrypt msg (hex)
[B]ust key (hex)
[F]avourite (hex)
[H]elp
[Q]uit
"""

gh = GhOST(0x00010203, S_BOX)

def  main():
    try:
        welcome = "WELCOME TO GhOST RESEARCH INSTITUTE\n"
        for char in welcome:
            time.sleep(0.1)
            sys.stdout.write(char)
            sys.stdout.flush()

        print(PROMPT)

        for t in range(TRIALS):
            choice = input(f"{t:0>3} > ").rstrip()
            match choice:
                case 'E':
                    pt = int.from_bytes(
                        bytes.fromhex(input('Msg to encrypt: ')), 'big'
                    ) % 2 ** (gh.block_size)
                    ct = gh.encrypt(pt)
                    print(ct.to_bytes(8, 'big').hex())
                    print()
                case 'D':
                    ct = int.from_bytes(
                        bytes.fromhex(input('Msg to decrypt: ')), 'big'
                    ) % 2 ** (gh.block_size)
                    pt = gh.decrypt(ct)
                    print(pt.to_bytes(8, 'big').hex())
                    print()
                case 'B':
                    key = int.from_bytes(
                        bytes.fromhex(input('Key: ')), 'big'
                    ) % 2 ** (gh.block_size // 2)
                    z = gh.round_function(
                        gh.key ^ key
                    ) & (
                        + 2**(gh.block_size // 2)
                        - 2**(gh.block_size * 9 // 32)
                        + 2**(gh.block_size * 7 // 32)
                        - 1
                    )
                    gh.key = key
                    print(z.to_bytes(4, 'big').hex())
                case 'F':
                    print(I.to_bytes(1, 'big').hex())
                case 'H':
                    print(PROMPT)
                case 'Q':
                    print('OK BYE :)')
                    exit(0)
                case _:
                    print('Bruuh')
                    exit(1)

    except KeyboardInterrupt:
        print('\nInterrupted')
        try:
            sys.exit(0)
        except SystemExit:
            os._exit(0)
    except EOFError:
        print('\nEOF')
        try:
            sys.exit(0)
        except SystemExit:
            os._exit(0)

if __name__ == "__main__":
    main()

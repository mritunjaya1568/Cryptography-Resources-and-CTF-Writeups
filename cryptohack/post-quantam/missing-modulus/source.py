#!/usr/bin/env python3

import listener
import numpy as np
from random import SystemRandom
import builtins


FLAG = b'crypto{??????????????????????????????????????}'

random = SystemRandom()

# dimension
n = 512
# plaintext modulus
p = 257
# ciphertext modulus
q = 6007
# message scaling factor
delta = int(round(q/p))

sigma = 3.8
normal = lambda: round(random.gauss(0, sigma))
uniform = lambda: random.randrange(q) - q//2
dtype = np.int64

def sample(shape, dist):
    return np.fromfunction(np.vectorize(lambda *_: dist()), shape).astype(dtype)

S = sample((n,), uniform)

def encrypt(m):
    A = sample((n,), uniform)
    e = sample((1,), normal)[0]
    b = A @ S + m * delta + e
    return A.tolist(), b.tolist()


class Challenge:
    def __init__(self):
        self.before_input = "Would you like to encrypt your own message, or see an encryption of a character in the flag?\n"

    def challenge(self, your_input):
        if 'option' not in your_input:
            return {'error': 'You must specify an option'}

        if your_input['option'] == 'get_flag':
            if "index" not in your_input:
                return {"error": "You must provide an index"}
                self.exit = True

            index = int(your_input["index"])
            if index < 0 or index >= len(FLAG) :
                return {"error": f"index must be between 0 and {len(FLAG) - 1}"}
                self.exit = True

            A, b = encrypt(FLAG[index])
            return {"A": str(list(A)), "b": str(int(b))}

        elif your_input['option'] == 'encrypt':
            if "message" not in your_input:
                return {"error": "You must provide a message"}
                self.exit = True

            message = int(your_input["message"])
            if message < 0 or message >= p:
                return {"error": f"message must be between 0 and {p - 1}"}
                self.exit = True

            A, b = encrypt(message)
            return {"A": str(list(A)), "b": str(int(b))}

        return {'error': 'Unknown action'}

builtins.Challenge = Challenge
listener.start_server(port=13412)

from Crypto.Random.random import getrandbits
import random
from utils import listener

SEED = getrandbits(32)
FLAG = b'crypto{????????????????????}'
q = 127


class Challenge():
    def __init__(self):
        self.before_input = f"Welcome to the LWE sample generator! Retrieve a sample using the 'get_sample' option, or reset the distribution using the 'reset' option.\n"
        self.rand = random.Random(SEED)

    def challenge(self, your_input):
        if not "option" in your_input:
            return {"error": "You must send an option to this server"}

        elif your_input["option"] == "reset":
            self.rand.seed(SEED)
            return {"success": "The distribution has been reset"}

        elif your_input["option"] == "get_sample":
            a = []
            for i in range(len(FLAG)):
                a.append(self.rand.randint(0, q - 1))

            e = self.rand.randint(-1, 1)

            self.rand.seed(getrandbits(32))
            if self.rand.randint(0, 1):
                a[self.rand.randint(0, len(a) - 1)] = self.rand.randint(0, q - 1)

            b = 0
            for (i, j) in zip(a, FLAG):
                b += i * j
            b += e
            b %= q

            return {"a": a, "b": b}

        else:
            return {"error": "Invalid option"}


"""
When you connect, the 'challenge' function will be called on your JSON
input.
"""
listener.start_server(port=13390)

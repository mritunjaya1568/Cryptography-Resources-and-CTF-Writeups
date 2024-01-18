import random

I = random.randint(0, 7)
S_BOX = []

FAVOURITE_ROW: list[int] = # REDACTED #

base_row = [i for i in range(16)]

for i in range(8):
    random.shuffle(base_row)
    S_BOX.append([*base_row])
try:
    for i in range(8):
        assert S_BOX[i] is not FAVOURITE_ROW
except AssertionError:
    exit()

S_BOX[I] = FAVOURITE_ROW

del FAVOURITE_ROW

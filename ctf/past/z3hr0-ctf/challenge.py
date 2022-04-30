import os
import random
from secret import flag

for i in range(624):
    #stabilizing outputs
    print(random.random())

for i in range(1000):
    if int(input())!=round(random.random()):
        exit(1)

print(flag)

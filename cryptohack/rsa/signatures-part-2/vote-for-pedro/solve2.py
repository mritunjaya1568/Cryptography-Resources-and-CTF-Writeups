from sage.all import *

val = 1750572331061789800727934052618831
z = Mod(val,2^120).nth_root(3)
print(z)

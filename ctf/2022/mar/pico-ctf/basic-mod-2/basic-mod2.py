# coding: utf-8
get_ipython().run_line_magic('ls', '')
def functor(i):
    lest = []

    lest.append(1)
    lest.append(2)
    lest.append(3)
    lest.append(4)

    for i in range(4,ITERS+1):
        lest.append(55692*lest[i-4] - 9549*lest[i-3] + 301*lest[i-2] + 21*lest[i-1])
    return lest[ITERS]    
    
def functor(i):
    lest = []

    lest.append(1)
    lest.append(2)
    lest.append(3)
    lest.append(4)

    for i in tqdm(range(4,ITERS+1)):
        lest.append(55692*lest[i-4] - 9549*lest[i-3] + 301*lest[i-2] + 21*lest[i-1])
    return lest[ITERS]    
    
from tqdm import tqdm
get_ipython().run_line_magic('ls', '')
ITERS = int(2e7)
ITERS
functor(ITERS)
350 372 192 354 139 337 67 311 392 338 241 414 180 277 379 294 128 117 250 404 336 350 386 350 372 192 354 139 337 67 311 392 338 241 414 180 277 379 294 128 117 250 404 336 350 386 
lest = [350,372,192,354,139,337,67,311,392,338,241,414,180,277,379,294,128,117,250,404,336,350,386]
for i in range(len(lest)):
    lest[i]= lest[i] % 41
    
lest
from Crypto.Util.number import *
lest2 = []
for i in range(len(lest1)):
    lest2.append(inverse(lest1[i],41))
    
for i in range(len(lest)):
    lest2.append(inverse(lest[i],41))
    
lest2
len(lest2)
dect = {}
for i in range(1,27):
    dect[i] = ord(96+i)
    
ord('A')
for i in range(1,27):
    dect[i] = chr(96+i)
    
    
dect
for i in range(27,37):
    dect[i] = chr(i + 21)
    
    
    
dect
dect[37] = '_'
lest2
string2 = ""
for i in lest2:
    string2 += dect[i]
    
string2
get_ipython().run_line_magic('save', 'basic-mod-2 0')
get_ipython().run_line_magic('save', '0 basic-mod2')
get_ipython().run_line_magic('save', 'basic-mod2')
get_ipython().run_line_magic('save', 'basic-mod2 ~0')
get_ipython().run_line_magic('save', 'basic-mod2 ~0/')

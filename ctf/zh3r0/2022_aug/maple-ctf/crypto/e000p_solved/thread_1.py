P = 2 ** 414 - 17
d = 3617 

def on_curve(p):
    x, y = p
    return (x * x + y * y) % P == (1 + d * x * x * y * y) % P

def inv(x):
    return pow(x, -1, P)

def add(p1, p2):
    x1, y1 = p1
    x2, y2 = p2
    x = ( (x1 * y2 + y1 * x2) % P * inv((1 + d * x1 * x2 * y1 * y2)%P) )% P
    y = ( (y1 * y2 - x1 * x2)%P * inv((1 - d * x1 * x2 * y1 * y2)%P) ) % P
    return (x , y)

def sub(p1, p2):
    x1, y1 = p1
    x2, y2 = p2
    x2 = -1 * x2
    x = ( (x1 * y2 + y1 * x2) % P * inv((1 + d * x1 * x2 * y1 * y2)%P) )% P
    y = ( (y1 * y2 - x1 * x2)%P * inv((1 - d * x1 * x2 * y1 * y2)%P) ) % P
    return (x,y)



def mul(x: int, base):
    ans = (0,1)
    cur = base
    while x > 0:
        if x & 1:
            ans = add(cur, ans)
        x >>= 1
        cur = add(cur, cur)
    return ans

base = (17319886477121189177719202498822615443556957307604340815256226171904769976866975908866528699294134494857887698432266169206165, 34)
assert(on_curve(base))

order = 2 ** 411 - 33364140863755142520810177694098385178984727200411208589594759

bm = (1 << 412) - 1
bm ^= ((1 << 22) -1) << 313
bm ^= ((1 << 22) -1) << 13
bm ^= 1 << 196

enc = (29389900956614406804195679733048238721927197300216785144586024378999988819550861039522005309555174206184334563744077143526515, 35393890305755889860162885313105764163711685229222879079392595581125504924571957049674311023316022028491019878405896203357959)
hint = 323811241263249292936728039512527915123919581362694022248295847200852329370976362254362732891461683020125008591836401372097



string1 = '1111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000001111111111111'
string2 = string1[::-1]
lest = []
for i in range(len(string2)):
    if string2[i] == '0':
        lest.append(i)
print(lest)

arr = [0,1]
from itertools import product
var = list(product(arr,repeat = 22))
print(var)

lest1 = []
val1 = mul(2 ** 13,base)  
lest1.append(val1)

for i in range(21):
    val1 = mul(2,val1)
    lest1.append(val1)

lest2 = []
val2 = mul(2 ** 313,base)
lest2.append(val2)

for i in range(21):
    val2 = mul(2,val2)
    lest2.append(val2)



l1 = {}
r1 = {}

print("Process started")


import threading 
from queue import Queue
# import hashlib
# from Crypto.Cipher import AES
# import requests
import time

flagger = True
cnt = 1


print_lock = threading.Lock()


def exampleJob(worker):
    global cnt
    s1 = (0,1)
    s2 = (0,1)

    for j in range(len(worker)):
        if worker[j] == 1:
            s1 = add(s1,lest1[j])
            s2 = add(s2,lest2[j])

    l1[s1] = worker
    r1[s2] = worker 

    with print_lock:
        print(cnt)
        cnt += 1


def threader():
    while flagger:
        worker = q.get()
        exampleJob(worker)
        q.task_done()


q = Queue()

for x in range(1000):
    t = threading.Thread(target = threader)

    t.daemon = True
    #it will die when the main thread dies
    t.start()

start = time.time()

for key in var:
    q.put(key)

q.join()

print('Entire job took :',time.time()-start)


print("Dictionary Made and starting the search for 1st case")

ct = sub(enc,mul(bm & hint,base))

# 1st case

# a23 = 0

for x in l1.keys():
    if sub(ct,x) in r1:
        print("Got the pair in 1st case with a23 = 0")
        print(l1[x],r1[sub(ct,x)])


print("1st search done")

# 2nd case

# a23 = 1 

ct2 = sub( ct, mul(2 ** 196, base) )

for x in l1.keys():
    if sub(ct2,x) in r1:
        print("Got the pair in 2nd case with a23 = 1")
        print(l1[x],r1[sub(ct2,x)])

print("2nd search done")









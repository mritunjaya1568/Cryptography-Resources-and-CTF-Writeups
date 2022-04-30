import random

q = 3329
R = Zmod(q)
N = 32
l = 2
d = 11
Rx.<x> = PolynomialRing(R)
Rq.<u> = Rx.quotient(x^N + 1)

flag = open('flag.txt').read()

def genA(base_ring, r, l):
    random.seed(r)
    A = Matrix(base_ring, [[base_ring([Integer(random.randint(0, q-1)) for _ in range(N)]) for _ in range(l)] for _ in range(l)])
    return A

def decode(base_ring, v):
    v = list(v).copy()
    for i, p in enumerate(v):
        coefs = p.list()
        for j, a in enumerate(coefs):
            coefs[j] = round((2/q)*Integer(a))%2
        v[i] = base_ring(coefs)
    return v

def small_secret():
    return Rq([randint(1, 4) for _ in range(N)])

def small_error():
    return Rq([randint(-4, -1) for _ in range(N)])

# In case you plebs think testing it locally will make it any easier
def keygen():
    global l
    r = Integer(random.getrandbits(N))
    A = genA(Rq, r, l)
    s = vector(Rq, [small_secret() for _ in range(l)])
    e = vector(Rq, [small_error() for _ in range(l)])
    t = A*s + e

    return (t, r), (s, e)

def encrypt(pk, m, r, e1):
    t, rh = pk
    t = vector(Rq, t)
    A = genA(Rq, rh, l)
    m = list(map(int, bin(m)[2:][::-1]))
    m = Rq(m)
    e2 = small_error()
    u = A.transpose()*r + e1
    v = t*r + e2 + (q//2)*m
    return (u, v)

def decrypt(sk, ct):
    u, v = ct
    m = decode(Rq, [v - sk*u])[0]
    m = m.list()[::-1]
    return int(''.join(map(str, m)), 2)

def verify_small_vector(v):
    return all([-6 <= i <= 6 for i in v[:-1]])

def flatten(u):
    b = []
    for i in u:
        j = i.list()
        j = j + [0]*(N-len(j))
        b += j
    return vector(R, b)

def unflatten(base_ring, v):
    v = list(v)
    return vector(base_ring, [base_ring(v[i*N: (i+1)*N]) for i in range(len(v)//N)])

def receive_vector():
    """
    What you want to input here is a vector of dimension l over Rq.
    The way to do that is to create your vector, call the function "flatten" on it,
    and then send the resulting list as comma separated integers
    e.g: if your vector is v, you need to send str(flatten(v)).replace("[", "").replace("]", "")
    """
    a = input("Enter vector: ")
    a = list(map(Integer, a.split(",")))
    
    if len(a) != N*l:
        print ("It's just a simple math challenge, no pwn trickery please")
        exit()

    if not verify_small_vector(a):
        print ("Is an error even an error if it's not small")
        exit()
    
    return unflatten(Rq, a)

pt = randint(0, 2^11)
print ("plaintext: ", pt)

s = receive_vector()
e = receive_vector()
rh = Integer(random.getrandbits(N))
A = genA(Rq, rh, l)
t = A*s + e

sk = (s, e)
pk = (t, rh)
print ("rh: ", rh)

r = receive_vector()
e1 = receive_vector()
dif = decrypt(sk[0], encrypt(pk, pt, r, e1))^^pt

if not dif:
    print("Try another day")
    exit()

print ("OK, you win. Here's your flag")
print (flag)
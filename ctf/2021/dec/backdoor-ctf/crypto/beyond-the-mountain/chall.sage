import random

q = 3329
R = Zmod(q)
N = 32
l = 2
d = 11
Rx.<x> = PolynomialRing(R)
Rq.<u> = Rx.quotient(x^N + 1)

flag =  open("flag.txt").read()

# My not so secret keys
# Static keys so you can precompute part of the solution to spare our poor VPS some load
t = vector(Rq, [3299*u^31 + 3045*u^30 + 2395*u^29 + 742*u^28 + 2092*u^27 + 22*u^26 + 2323*u^25 + 506*u^24 + 2532*u^23 + 5*u^22 + 1565*u^21 + 704*u^20 + 355*u^19 + 1766*u^18 + 1307*u^17 + 1148*u^16 + 1194*u^15 + 2260*u^14 + 1999*u^13 + 1188*u^12 + 731*u^11 + 68*u^10 + 847*u^9 + 2090*u^8 + 2514*u^7 + 3252*u^6 + 997*u^5 + 2271*u^4 + 731*u^3 + 1937*u^2 + 7*u + 2574, 2383*u^31 + 3121*u^30 + 963*u^29 + 1495*u^28 + 2776*u^27 + 2541*u^26 + 2516*u^25 + 2667*u^24 + 2772*u^23 + 114*u^22 + 1762*u^21 + 366*u^20 + 1343*u^19 + 2521*u^18 + 1678*u^17 + 3224*u^16 + 510*u^15 + 1594*u^14 + 3020*u^13 + 3145*u^12 + 1114*u^11 + 1823*u^10 + 1081*u^9 + 1737*u^8 + 2821*u^7 + 2202*u^6 + 2355*u^5 + 2238*u^4 + 745*u^3 + 266*u^2 + 887*u + 2731])
rh = 3428567257
s = vector(Rq, [4*u^31 + u^30 + 2*u^29 + u^28 + 4*u^27 + u^26 + 3*u^25 + 4*u^24 + 3*u^23 + u^22 + 2*u^21 + 4*u^20 + 3*u^19 + u^18 + u^17 + 3*u^16 + 2*u^15 + 2*u^14 + 4*u^13 + 4*u^12 + 2*u^11 + u^10 + u^9 + u^8 + u^7 + 2*u^6 + 4*u^5 + 2*u^4 + 3*u^3 + 4*u^2 + 3*u + 2, 4*u^31 + u^30 + 2*u^29 + 4*u^28 + u^27 + 3*u^26 + 2*u^25 + u^24 + u^23 + 3*u^22 + 4*u^21 + u^20 + u^19 + 4*u^18 + 3*u^17 + u^16 + u^15 + 3*u^14 + 3*u^13 + 3*u^12 + 3*u^11 + 3*u^10 + u^9 + 4*u^8 + 3*u^7 + 4*u^6 + 2*u^5 + 2*u^4 + u^3 + u^2 + 4*u + 4])
e = vector(Rq, [3325*u^31 + 5*u^30 + 3325*u^29 + 3325*u^28 + 3324*u^27 + 4*u^26 + 5*u^25 + 3324*u^24 + 3324*u^23 + 3324*u^22 + 5*u^21 + 3325*u^20 + 5*u^19 + 3325*u^18 + 5*u^17 + 3325*u^16 + 3326*u^15 + 3325*u^14 + 3328*u^13 + 3327*u^12 + 3325*u^11 + 3326*u^10 + 3327*u^9 + 3328*u^8 + 3327*u^7 + 3325*u^6 + 3325*u^5 + 3327*u^4 + 3326*u^3 + 3328*u^2 + 3328*u + 3325, 3325*u^31 + 5*u^30 + 5*u^29 + 3325*u^28 + 3325*u^27 + 4*u^26 + 3324*u^25 + 3325*u^24 + 3325*u^23 + 3324*u^22 + 3325*u^21 + 4*u^20 + 4*u^19 + 3325*u^18 + 3324*u^17 + 4*u^16 + 3325*u^15 + 4*u^14 + 5*u^13 + 4*u^12 + 3324*u^11 + 5*u^10 + 5*u^9 + 3324*u^8 + 5*u^7 + 4*u^6 + 5*u^5 + 3324*u^4 + 4*u^3 + 3324*u^2 + 5*u + 3325])

pk = (t, rh)
sk = (s, e)

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

for _ in range(5):
    pt = randint(0, 2^11)
    print ("plaintext: ", pt)
    challenge = 2^randint(0, 11)
    print ("challenge: ", challenge)
    r = receive_vector()
    e1 = receive_vector()
    dif = decrypt(sk[0], encrypt(pk, pt, r, e1))^^pt
    if dif != challenge:
        print ("So much for perfect correctness")
        exit()

print ("OK, you win. Here's your flag")
print (flag)
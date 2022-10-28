# use this link - https://doc.sagemath.org/html/en/reference/groups/sage/groups/generic.html


from Crypto.Util.number import *

p = 310717010502520989590157367261876774703
a = 2
b = 3

assert isPrime(p) == True

E = EllipticCurve(GF(p),[a,b])

# G = E.gen(0) # these both will be same only

G = E([179210853392303317793440285562762725654,105268671499942631758568591033409611165])

Pub_alice = E([280810182131414898730378982766101210916,291506490768054478159835604632710368904])



priv_alice = discrete_log(Pub_alice,G,G.order(), operation = '+')

# priv_alice = discrete_log(Pub_alice,G,operation = '+')  this will also give the same answer


# another method 
priv_alice2 = G.discrete_log(Pub_alice)

assert priv_alice == priv_alice2

pub_bob = E([272640099140026426377756188075937988094,51062462309521034358726608268084433317])

shared_secret = (priv_alice * pub_bob)[0]

import decrypt

iv = '07e2628b590095a5e332d397b8a59aa7'
ct = '8220b7c47b36777a737f5ef9caa2814cf20c1c1ef496ec21a9b4833da24a008d0870d3ac3a6ad80065c138a2ed6136af'


print(decrypt.decrypt_flag(shared_secret, iv, ct))




# flag = crypto{n07_4ll_curv3s_4r3_s4f3_curv3s}







'''Since the order of the Elliptic curve is not prime, we solve the DLP for each prime power that factors it and then use CRT'''


'''The title of the challenge gives us a clue, as usual. The elliptic curve we're dealing with has poorly chosen parameters, and the generator's order is smooth (i.e. only has small prime factors). This means we can compute the discrete logarithm of any point using the Pohlig-Hellman algorithm. Sage even has this built in: the default algorithm for taking discrete logarithms is a combination of Pohlig-Hellman and baby-step giant-step. The running time of the algorithm is less than a minute on my laptop.'''





'''
Some examples in the group of points of an elliptic curve over a finite field:

    Discrete logs:

F = GF(37^2,'a')

E = EllipticCurve(F,[1,1])

F.<a> = GF(37^2,'a')

E = EllipticCurve(F,[1,1])

P = E(25*a + 16 , 15*a + 7 )

P.order()
672

Q = 39*P; Q
(36*a + 32 : 5*a + 12 : 1)

discrete_log(Q,P,P.order(),operation='+')
39
'''

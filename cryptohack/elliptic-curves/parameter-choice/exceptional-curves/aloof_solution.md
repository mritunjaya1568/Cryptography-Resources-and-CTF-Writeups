<!-- Solving discrete logarithm on anomalous elliptic curves

An elliptic curve E
defined over Fp whose cardinality is also p

is an anomalous curve, and the discrete logarithm problem becomes trivial.

The idea is to transfer the problem from the elliptic curve E
to the additive group of the field Fp, that is finding a group isomorphism φ:E→Fp

. Several methods have been proposed, and we present one of them below.
Augmented point addition

The idea is to construct an augmented point addition:

    each point P

on the curve is associated with a value α in Fp: [P,α]
;
the addition of two points P
and Q given as [P,α] and [Q,β] is computed in the as follows: [P,α]⊕[Q,β]=[P+Q,α+β+a0(P,Q)], where a0(P,Q) is the slope of the line going through P and Q or the tangent at P if P=Q (and if P=−Q or if either of them is the infinity point, the function a0 returns the value 0

    ).

Transfering the discrete logarithm problem

Given a point P
, we define the value φ(P) as follow. We compute the scalar multiplication pP (which results in the infinity point O) using the augmented addition, by initializing with [P,0] (using any algorithm such as the classic double-and-add): p[P,0]=[P,0]⊕⋯⊕[P,0]=[O,α]. And we set φ(P)=α

.

Now, knowing P
and Q, we are looking for λ such that Q=λP. We compute φ(P)=α and φ(Q)=β as explained above. Since φ is a group homomorphism, we have β=φ(Q)=φ(λP)=λφ(P)=λα, so the value we are looking for is λ=βα−1, computed in the field Fp

. -->
Code

The code is written for SageMath (version 9.0).

p = 0xa15c4fb663a578d8b2496d3151a946119ee42695e18e13e90600192b1d0abdbb6f787f90c8d102ff88e284dd4526f5f6b6c980bf88f1d0490714b67e8a2a2b77
a = 0x5e009506fcc7eff573bc960d88638fe25e76a9b6c7caeea072a27dcd1fa46abb15b7b6210cf90caba982893ee2779669bac06e267013486b22ff3e24abae2d42
b = 0x2ce7d1ca4493b0977f088f6d30d9241f8048fdea112cc385b793bce953998caae680864a7d3aa437ea3ffd1441ca3fb352b0b710bb3f053e980e503be9a7fece

E = EllipticCurve(GF(p), [a, b])
q = E.cardinality()
assert(p == q)

# base point
G = E(0x39f15e024d44228fd11c58a71c312fd64167c7d249d5677da0dfb4b9c3ed0f90701837a5e77b5a2b74433d7fbe027cd0c73b5aa7b300f7384521af0dc283dc6d,
      0x5f3636a89167a6fbb7b7d1ad97d11c70756835b5f1273e20c06d9e022d74648ec22a3f92c378196d137c3f2027a67381be79e1c0d65cd9b61211a77a3842c8b2)

# Alice's public key point
A = E(0x5aa8b5cf3124c552881ba67c14c863bb2ff30d960fe41b61123d2025cdddf0ea75e92d76326be9fb09b9a32373fc278ac8d5cf5ca83b9e517ce347c6879bef51,
      0x2e3ddec1b35930b1039351b2814252186b30ce27ce15eda4351428868ae8593ab8c61c034ba10041cce205d7f7102c292f30ac5f3d2a2c2f3a463d837df070cd)

# Bob's public key point
B = E(0x7f0489e4efe6905f039476db54f9b6eac654c780342169155344abc5ac90167adc6b8dabacec643cbe420abffe9760cbc3e8a2b508d24779461c19b20e242a38, 
  0xdd04134e747354e5b9618d8cb3f60e03a74a709d4956641b234daa8a65d43df34e18d00a59c070801178d198e8905ef670118c15b0906d3a00a662d3a2736bf)


def a0(P, Q): 
    if P[2] == 0 or Q[2] == 0 or P == -Q: 
        return 0 
    if P == Q: 
        a = P.curve().a4() 
        return (3*P[0]^2+a)/(2*P[1]) 
    return (P[1]-Q[1])/(P[0]-Q[0]) 

def add_augmented(PP, QQ):
    (P, u), (Q, v) = PP, QQ
    return [P+Q, u + v + a0(P,Q)]

def scalar_mult(n, PP):
    t = n.nbits()
    TT = PP.copy()
    for i in range(1,t):
        bit = (n >> (t-i-1)) & 1
        TT = add_augmented(TT, TT)
        if bit == 1:
            TT = add_augmented(TT, PP)
    return TT

def solve_ecdlp(P,Q,p):
    R1, alpha = scalar_mult(p, [P,0])
    R2, beta  = scalar_mult(p, [Q,0])
    return ZZ(beta*alpha^(-1))
    

nA = solve_ecdlp(G,A,p)
nB = solve_ecdlp(G,B,p)

assert(nA*G == A)
assert(nB*G == B)

print("Alice's private key: {:x}".format(nA))
print("Bob's private key: {:x}".format(nB))

<!-- Some references

[1] : Evaluation of discrete logarithms in a group of p-torison points of an elliptic curve in characteristic p

[2] : On the discrete logarithm in the divisor class group of curves -->
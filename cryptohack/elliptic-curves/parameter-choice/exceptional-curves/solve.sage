# http://www.monnerat.info/publications/anomalous.pdf

# check cryptohack solutions for this - you will find multiple good approaches there


from Crypto.Util.number import *

p = '0xa15c4fb663a578d8b2496d3151a946119ee42695e18e13e90600192b1d0abdbb6f787f90c8d102ff88e284dd4526f5f6b6c980bf88f1d0490714b67e8a2a2b77'
a = '0x5e009506fcc7eff573bc960d88638fe25e76a9b6c7caeea072a27dcd1fa46abb15b7b6210cf90caba982893ee2779669bac06e267013486b22ff3e24abae2d42'
b = '0x2ce7d1ca4493b0977f088f6d30d9241f8048fdea112cc385b793bce953998caae680864a7d3aa437ea3ffd1441ca3fb352b0b710bb3f053e980e503be9a7fece'

p = int(p,16)
a = int(a,16)
b = int(b,16)

E = EllipticCurve(GF(p), [a, b])
G = E.gens()[0]
print(G)

assert p == G.order()

b_x = '0x7f0489e4efe6905f039476db54f9b6eac654c780342169155344abc5ac90167adc6b8dabacec643cbe420abffe9760cbc3e8a2b508d24779461c19b20e242a38'
b_y = '0xdd04134e747354e5b9618d8cb3f60e03a74a709d4956641b234daa8a65d43df34e18d00a59c070801178d198e8905ef670118c15b0906d3a00a662d3a2736bf'

b_x = int(b_x,16)
b_y = int(b_y,16)

B = E(b_x, b_y)


a_x = 4748198372895404866752111766626421927481971519483471383813044005699388317650395315193922226704604937454742608233124831870493636003725200307683939875286865
a_y = 2421873309002279841021791369884483308051497215798017509805302041102468310636822060707350789776065212606890489706597369526562336256272258544226688832663757

A = E(a_x,a_y)
print(A)


from sage.all import EllipticCurve
from sage.all import Qp
from sage.all import ZZ


# Lifts a point to the p-adic numbers.
def _lift(E, P, gf):
    x, y = map(ZZ, P.xy())
    for point_ in E.lift_x(x, all=True):
        _, y_ = map(gf, point_.xy())
        if y == y_:
            return point_


def attack(G, P):
    """
    Solves the discrete logarithm problem using Smart's attack.
    More information: Smart N. P., "The discrete logarithm problem on elliptic curves of trace one"
    :param G: the base point
    :param P: the point multiplication result
    :return: l such that l * G == P
    """
    E = G.curve()
    gf = E.base_ring()
    p = gf.order()
    assert E.trace_of_frobenius() == 1, f"Curve should have trace of Frobenius = 1."

    E = EllipticCurve(Qp(p), [int(a) + p * ZZ.random_element(1, p) for a in E.a_invariants()])
    G = p * _lift(E, G, gf)
    P = p * _lift(E, P, gf)
    Gx, Gy = G.xy()
    Px, Py = P.xy()
    return int(gf((Px / Py) / (Gx / Gy)))

na = attack(G,A)

print(na)

shared_secret = (na * B)[0]
iv = '719700b2470525781cc844db1febd994'
ct = '335470f413c225b705db2e930b9d460d3947b3836059fb890b044e46cbb343f0'

import decrypt

print(decrypt.decrypt_flag(shared_secret,iv,ct))

# flag = crypto{H3ns3l_lift3d_my_fl4g!}








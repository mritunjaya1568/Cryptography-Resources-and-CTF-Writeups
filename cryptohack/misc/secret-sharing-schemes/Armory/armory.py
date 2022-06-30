#!/usr/bin/env python3

import hashlib

FLAG = b"crypto{???????????????????????}"
PRIME = 77793805322526801978326005188088213205424384389488111175220421173086192558047


def _eval_at(poly, x, prime):
    accum = 0
    for coeff in reversed(poly):
        accum *= x
        accum += coeff
        accum %= prime
    return accum


def make_deterministic_shares(minimum, shares, secret, prime):
    if minimum > shares:
        raise ValueError("Pool secret would be irrecoverable.")

    coefs = [secret]
    for i in range(1, shares + 1):
        coef = hashlib.sha256(coefs[i-1]).digest()
        coefs.append(coef)
    coefs = [int.from_bytes(p, 'big') for p in coefs]
    poly = coefs[:minimum]

    points = []
    for i in range(1, shares + 1):
        point = _eval_at(poly, coefs[i], prime)
        points.append((coefs[i], point))

    return points


shares = make_deterministic_shares(minimum=3, shares=7, secret=FLAG, prime=PRIME)
for share in shares:
    print(share)

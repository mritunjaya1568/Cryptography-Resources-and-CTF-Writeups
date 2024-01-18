def construct(rsa_components, consistency_check=True):
    class InputComps(object):
        pass

    input_comps = InputComps()
    for (comp, value) in zip(('n', 'e', 'd', 'p', 'q', 'u'), rsa_components):
        setattr(input_comps, comp, Integer(value))

    n = input_comps.n
    e = input_comps.e
    if not hasattr(input_comps, 'd'):
        key = RsaKey(n=n, e=e)
    else:
        d = input_comps.d
        if hasattr(input_comps, 'q'):
            p = input_comps.p
            q = input_comps.q
        else:
            # Compute factors p and q from the private exponent d.
            # We assume that n has no more than two factors.
            # See 8.2.2(i) in Handbook of Applied Cryptography.
            ktot = d * e - 1
            # The quantity d*e-1 is a multiple of phi(n), even,
            # and can be represented as t*2^s.
            t = ktot
            while t % 2 == 0:
                t //= 2
            # Cycle through all multiplicative inverses in Zn.
            # The algorithm is non-deterministic, but there is a 50% chance
            # any candidate a leads to successful factoring.
            # See "Digitalized Signatures and Public Key Functions as Intractable
            # as Factorization", M. Rabin, 1979
            spotted = False
            a = Integer(2)
            while not spotted and a < 100:
                k = Integer(t)
                # Cycle through all values a^{t*2^i}=a^k
                while k < ktot:
                    cand = pow(a, k, n)
                    # Check if a^k is a non-trivial root of unity (mod n)
                    if cand != 1 and cand != (n - 1) and pow(cand, 2, n) == 1:
                        # We have found a number such that (cand-1)(cand+1)=0 (mod n).
                        # Either of the terms divides n.
                        p = Integer(n).gcd(cand + 1)
                        spotted = True
                        break
                    k *= 2
                # This value was not any good... let's try another!
                a += 2
            if not spotted:
                raise ValueError("Unable to compute factors p and q from exponent d.")
            # Found !
            assert ((n % p) == 0)
            q = n // p

        if hasattr(input_comps, 'u'):
            u = input_comps.u
        else:
            u = p.inverse(q)

        # Build key object
        key = RsaKey(n=n, e=e, d=d, p=p, q=q, u=u)

    # Verify consistency of the key
    if consistency_check:

        # Modulus and public exponent must be coprime
        if e <= 1 or e >= n:
            raise ValueError("Invalid RSA public exponent")
        if Integer(n).gcd(e) != 1:
            raise ValueError("RSA public exponent is not coprime to modulus")

        # For RSA, modulus must be odd
        if not n & 1:
            raise ValueError("RSA modulus is not odd")

        if key.has_private():
            # Modulus and private exponent must be coprime
            if d <= 1 or d >= n:
                raise ValueError("Invalid RSA private exponent")
            if Integer(n).gcd(d) != 1:
                raise ValueError("RSA private exponent is not coprime to modulus")
            # Modulus must be product of 2 primes
            if p * q != n:
                raise ValueError("RSA factors do not match modulus")
            if test_probable_prime(p) == COMPOSITE:
                raise ValueError("RSA factor p is composite")
            if test_probable_prime(q) == COMPOSITE:
                raise ValueError("RSA factor q is composite")
            # See Carmichael theorem
            phi = (p - 1) * (q - 1)
            lcm = phi // (p - 1).gcd(q - 1)
            if (e * d % int(lcm)) != 1:
                raise ValueError("Invalid RSA condition")
            if hasattr(key, 'u'):
                # CRT coefficient
                if u <= 1 or u >= q:
                    raise ValueError("Invalid RSA component u")
                if (p * u % q) != 1:
                    raise ValueError("Invalid RSA component u with p")

    return key

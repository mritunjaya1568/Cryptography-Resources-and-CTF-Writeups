For in depth understanding of elliptic Curves - https://web.archive.org/web/20220412170936/https://crypto.stanford.edu/pbc/notes/elliptic/

Point addition and negation - https://curves.xargs.org/

# ECC wikipedia - https://en.wikipedia.org/wiki/Elliptic-curve_cryptography
## ECC crypto wiki - https://cryptography.fandom.com/wiki/Elliptic_curve_cryptography

# Another concern for ECC-systems is the danger of fault attacks, especially when running on smart cards (see, for example, Biehl et al.[21]). 

# Several classes of curves are weak and should be avoided:

    curves over {\displaystyle \mathbb {F} _{2^{m}}} with non-prime {\displaystyle m} are vulnerable to Weil descent attacks.[7][8]
    curves such that {\displaystyle n} divides {\displaystyle p^{B}-1} (where {\displaystyle p} is the characteristic of the field – {\displaystyle q} for a prime field, or {\displaystyle 2} for a binary field) for sufficiently small {\displaystyle B} are vulnerable to MOV attack[9][10] which applies usual DLP in a small degree extension field of {\displaystyle \mathbb {F} _{p}} to solve ECDLP. The bound {\displaystyle B} should be chosen so that discrete logarithms in the field {\displaystyle \mathbb {F} _{p^{B}}} are at least as difficult to compute as discrete logs on the elliptic curve {\displaystyle E(\mathbb {F} _{q})}.[11]
    curves such that {\displaystyle |E(\mathbb {F} _{q})|=q} are vulnerable to the attack that maps the points on the curve to the additive group of {\displaystyle \mathbb {F} _{q}}[12][13][14]



# https://crypto.stanford.edu/pbc/notes/elliptic/movattack.html



# Because not all points are generators, however, only the generator point can generate all the points on the curve.

# https://math.stackexchange.com/questions/3021935/what-is-p-adic-logarithmic-map-of-an-elliptic-curve-how-to-compute-it



# https://gist.github.com/pqlx/d0bdf2d0c4a2aa400b2b52d9bd9b7b65


# smart attack script in sage - https://crypto.stackexchange.com/questions/70454/why-smarts-attack-doesnt-work-on-this-ecdlp 






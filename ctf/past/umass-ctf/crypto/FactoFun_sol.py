# SAGE (!) I used a Jupyter Notebook with Sage integration
# I do not know how to integrate Sage into Python so I did it manually :)

# Imports
import hashlib
import numpy.random as npr




# Alphabet to get something copy-able
alp = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'

# Proof of Work function
def poww(pow_hash):
    
    while True:
        
        pow_try = b'UMass-' + ''.join(npr.choice(list(alp),32)).encode()
        #print(pow_try)
        pow_sha = hashlib.sha256(pow_try).hexdigest().encode()
        
        if pow_hash == pow_sha[:5]:
            
            return pow_try
    
poww(b'bd7f3')



# Put in received parameters
N = 83053629859775920711567812747186440767081481550602251188553309206324295681965330133627944485866485070999764911856916661666341055580506407138328928582102280441307404997028414990454411914585618511541665346003685339249951173834579019444763896855008180436531017231173187615328630282433643469979677583481033456767

precv = "11011101000001010000101110000011????????0000111000110101111001110101111110101000000101101100110100101100011111011100010011111101100100001010100010101010110010110011001111111110111110001111100000100110100100011000001111000001101100010111000111011110001101010001001010111000101010011011011101100011011001110011110011110101001100111010100111110000011101110001111110110011001111101011100000100001001111000010011111110000????????11001001????????0001111000100110010100000010011010100110????????010100111010010111111001"
pmsb = precv[:-96] + '0'*96



def factor_lattice(N, nearp, howclose, t, k):
    """Finds p very quickly if p has about half as many bits as N and half of
    the leading bits of p are known.

    Source: http://facthacks.cr.yp.to/lattice.html
    """
    R.<x> = PolynomialRing(ZZ)
    f = howclose * x + nearp
    M = matrix(t)
    for i in range(t):
        M[i] = (f ^ i * N ^ max(k - i, 0)).coefficients(sparse=False) + [0] * (t - 1 - i)
    M = M.LLL()
    Q = sum(z * (x / howclose) ^ i for i, z in enumerate(M[0]))
    for r, multiplicty in Q.roots():
        if nearp + r > 0:
            g = gcd(N, nearp + r)
            if g > 1: return [g, N / g]
    return [1, N]

# If we ignore the first set of ???????? we are left with most MSBs of p, so we can factor it easily with lattices
# So let's do that for all 2**8 = 256 possibilities of the first ?-block
for i in range(0,256):

    ptry = pmsb.replace('????????','{:08d}'.format(int(bin(i)[2:])))

    facco = factor_lattice(N, int(ptry,2), 2**96, 8, 4)
    
    if facco[0] != 1:
        print(facco)
        p,q = facco

# Sanity check to calm the nerves
assert p*q == N

# Phi
phi = (p-1)*(q-1)
print(phi)

# Decryption key
d = pow(0x10001, -1, phi)
print(d)

# Flag: UMASS{0n1y_4_f3w_m0r3_y34rs_t1ll_sh0rs}
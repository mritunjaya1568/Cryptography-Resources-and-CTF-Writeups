from Crypto.Util.number import long_to_bytes

# generic version of Newton's method for the kth root of n
# (integer approximation)
def iroot(k, n):
    x, y = n, n + 1
    while x < y:
        y = x
        z = (k - 1) * y + (n // pow(y, k - 1))
        x = z // k
    return x

e = 3
ct = 243251053617903760309941844835411292373350655973075480264001352919865180151222189820473358411037759381328642957324889519192337152355302808400638052620580409813222660643570085177957
print(long_to_bytes(iroot(3, ct)).decode())
# dimension
n = 64
# plaintext modulus
p = 257
# ciphertext modulus
q = 0x10001
# bound for error term
error_bound = int(floor((q/p)/2))
# message scaling factor
delta = int(round(q/p))

exec(open('output.txt').read())

S = vector(GF(q),S)
A = vector(GF(q),A)

flag = round(((b - int(A * S)) %q )/delta)
print(flag)
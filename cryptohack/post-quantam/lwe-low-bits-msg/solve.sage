f = exec(open("output.txt").read())

# dimension
n = 64
# plaintext modulus
p = 257
# ciphertext modulus
q = 0x10001
# bound for error term
error_bound = int(floor((q/p)/2))

S = vector(GF(q),S)
A = vector(GF(q),A)

val = ZZ(b - A * S)

if val < q/2:
	print("positive range")
	m = val % p
else:
	print("Negative range")
	m = (val - q) % p 

print(m)


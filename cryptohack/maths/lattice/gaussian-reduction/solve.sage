v1 = vector(QQ,(846835985, 9834798552))
v2 = vector(QQ,(87502093, 123094980))

def gaussian_reduction(v1,v2):
	while True:
		if v2.norm() < v1.norm():
			v1,v2 = v2,v1
		mu = round( v2.inner_product(v1) / v1.inner_product(v1) )
		if mu == 0:
			return v1,v2
		v2 = v2 - mu * v1

x1,x2 = gaussian_reduction(v1,v2)
print(x1.inner_product(x2))

# also x1 is the shortest non zero vector in the lattice,
# hence solving the svp
# 7410790865146821

assert x1 * x2 == x1.inner_product(x2)




def functor(v1,v2):
	while True:
		if v2.norm() < v1.norm():
			v1,v2 = v2,v1
		mu = floor( v2.inner_product(v1) / v1.inner_product(v1) )
		print(mu)
		if mu == 0:
			return v1,v2
		v2 = v2 - mu * v1


def modified_gauss(v1, v2):
	while True:
		if v2 * v2 < v1 * v1:
			v1, v2 = v2, v1
		mu = (v2 * v1) / (v1 * v1)
		print(mu)
		if mu <= (1/2):
			print("Got reduced basis")
			return v1, v2
		mu = floor(mu)
		v2 = v2 - mu * v1




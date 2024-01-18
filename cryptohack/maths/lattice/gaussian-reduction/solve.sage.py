

# This file was *autogenerated* from the file solve.sage
from sage.all_cmdline import *   # import sage library

_sage_const_846835985 = Integer(846835985); _sage_const_9834798552 = Integer(9834798552); _sage_const_87502093 = Integer(87502093); _sage_const_123094980 = Integer(123094980); _sage_const_0 = Integer(0)
v1 = vector(QQ,(_sage_const_846835985 , _sage_const_9834798552 ))
v2 = vector(QQ,(_sage_const_87502093 , _sage_const_123094980 ))

def gaussian_reduction(v1,v2):
	while True:
		if v2.norm() < v1.norm():
			v1,v2 = v2,v1
		mu = round( v2.inner_product(v1) / v1.inner_product(v1) )
		if mu == _sage_const_0 :
			return v1,v2
		v2 = v2 - mu * v1

x1,x2 = gaussian_reduction(v1,v2)
print(x1.inner_product(x2))

# 7410790865146821



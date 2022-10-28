from Crypto.Util.number import *

class Elliptic:
	def __init__(self,p,a,b):
		self.p = p
		self.a = a
		self.b = b

	# if this is true , that means the point is in E(Fp)
	# or we can also say that this point lies on the curve 
	def point_check(self,P1):
		return ((P1.y ** 2)% self.p == (P1.x**3 + P1.x * self.a + self.b)%self.p)

	def point_eq(self,P1,P2):
		if P1.x == P2.x and P1.y == P2.y :
			return True
		else:
			return False

	def point_noteq(self,P1,P2):
		return not (P1 == P2)

	def point_add(self,P1,P2):
		if P1.O != None:
			return P2
		elif P2.O != None:
			return P1
		x1,y1 = P1.x, P1.y
		x2,y2 = P2.x, P2.y
		if x1 == x2 and y1 == -y2:
			return Point(O = 'O')
		if P1 != P2:
			try:
				lambda1 = ((y2 - y1) * inverse(x2-x1,self.p))%self.p
			except Exception as e:
				print(str(e))
		else:
			try:
				lambda1 = ((3 * x1 * x1  + self.a) * inverse(2*y1,self.p))%self.p
			except Exception as e:
				print(str(e))
		x3 = (lambda1 * lambda1 - x1 - x2) % self.p
		y3 = (lambda1 * (x1 - x3) - y1) % self.p
		return Point(x3,y3)

	def point_mul(self, P1,k):
		if self.point_check(P1) and k > 0:
			Q = P1
			R = Point(O = 'O')
			while k > 0:
				if k & 1 == 1:
					R = self.point_add(R,Q)
				Q = self.point_add(Q,Q)
				k = k // 2
			return R
		else:
			print("Give a point on curve or give k > 0")

class Point:
	def __init__(self,x = None,y=None,O = None):
		if x != None and y != None:
			self.x = x
			self.y = y
			self.O = None
		elif O != None:
			self.O = 'O'

e1 = Elliptic(9739,497,1768)
G = Point(1804,5368)

q_x = 4726
# (x**3 + a * x + b )%p == y**2
# y**2 = z mod p
# since p = 3 mod 4 
# we know that one solution of y will be 
# z**((p+1)//4) mod p
# and this is how you will get both the solutions of y


z = ( q_x ** 3 + e1.a * q_x + e1.b ) % e1.p
assert e1.p % 4 == 3

q_y1 = pow(z, (e1.p+1)//4 ,e1.p)
q_y2 = e1.p - q_y1

# now since q_y2 = -1 * q_y1
# so if one point is P then other point will be -P
# so when multiplied with nb 
# one will P * nb
# another will be -1 * P * nb
# in short , if one is z then other one will be -z , which means only y value will be 
# different , x will be same and y1 + y2 = p

nb = 6534

P1 = Point(q_x,q_y1)
res1 = e1.point_mul(P1,nb)
if res1.O == None:
	print(res1.x,res1.y) # 1791 2181


P2 = Point(q_x,q_y2)
res2 = e1.point_mul(P2,nb)

print(e1.point_check(res2))
if res2.O == None:
	print(res2.x,res2.y) # 1791 7558


assert res1.x == res2.x
assert res1.y + res2.y == e1.p

import decrypt

iv = 'cd9da9f1c60925922377ea952afc212c'
ct = 'febcbe3a3414a730b125931dccf912d2239f3e969c4334d95ed0ec86f6449ad8'
shared_secret = res1.x

print(decrypt.decrypt_flag(shared_secret, iv, ct))

# flag - crypto{3ff1c1ent_k3y_3xch4ng3}


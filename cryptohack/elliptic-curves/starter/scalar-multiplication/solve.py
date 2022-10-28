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
P1 = Point(5323,5438)
res1 = e1.point_mul(P1,1337)
if res1.O == None:
	print(res1.x,res1.y) # 1089 6931 


P2 = Point(2339,2213)
k = 7863
res2 = e1.point_mul(P2,7863)

print(e1.point_check(res2))
if res2.O == None:
	print(res2.x,res2.y) # 9467 2742

# flag = crypto{9467,2742}






from Crypto.Util.number import *

x1,y1 = (5274,2841)
x2,y2 = (8669,740)

a = 497
b = 1768
p = 9739

# doing X + Y 
lambda1 = ((740-2841) * inverse(8669-5274,p))%p
print(lambda1) # 7039

x3 = (lambda1**2 - x1 -x2)%p
print(x3) # 1024

y3 = (lambda1 * (x1 - x3) - y1)%p
print(y3) # 4440


# doing X + X
lambda2 = ((3 * x1 * x1 + a) * inverse(2*y1,p))%p
print(lambda2) # 1267

x4 = (lambda2 ** 2 - 2 * x1)%p
print(x4) # 7284
 
y4 = (lambda2 * (x1 - x4) - y1)%p
print(y4) # 2107




# from collections import namedtuple
# point = namedtuple('point',['x','y'])


def addition_elliptic(p,a,b,P1,P2):
	pass





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

class Point:
	def __init__(self,x = None,y=None,O = None):
		if x != None and y != None:
			self.x = x
			self.y = y
			self.O = None
		elif O != None:
			self.O = 'O'

e1 = Elliptic(9739,497,1768)
P1 = Point(5274,2841)
P2 = Point(8669,740)

res1 = e1.point_add(P1,P1)
if res1.O == None:
	print(res1.x,res1.y)

res2 = e1.point_add(P1,P2)
if res2.O == None:
	print(res2.x,res2.y)


P = Point(493, 5564) 
Q = Point(1539, 4742) 
R = Point(4403,5202)

res3 = e1.point_add(e1.point_add(P,P),e1.point_add(Q,R))
if res3.O == None:
	print(res3.x, res3.y) # 4215 2162


# if this is true , that means the point is in E(Fp)
print(e1.point_check(res3))



# flag = crypto{4215,2162}




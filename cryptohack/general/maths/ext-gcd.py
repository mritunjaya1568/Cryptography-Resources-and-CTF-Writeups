#!/usr/bin/python3 
def egcd(A,B):
	global d,x,y
	if B==0:
		d=A
		x=1
		y=0
	else:
		egcd(B,A%B)
		temp=x
		x=y
		y=temp-(A//B)*y
	return d
p,q = 26513,32321
egcd(p,q)
print(d)
print(x)
print(y)
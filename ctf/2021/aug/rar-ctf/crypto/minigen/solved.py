from Crypto.Util.number import getPrime, inverse, bytes_to_long, long_to_bytes

# def p():
# 	i=1
# 	while True:
# 		yield (i*i+i+1)%727
# 		i+=1
# count=0
# for i in p():
# 	print(i)
# 	count+=1
# 	if count>20:
# 		break

# lest=[281,547,54,380,392,98,158,440,724,218,406,672,193,457,694,208,455,745,196,450,724]
# string='rarctf'
# a=ord(string[0])^(lest[0])
# b=ord(string[1])^(lest[1])
# def functor(a,b,count2):
# 	x=(b+2*((b-a)//2+1))%727
# 	print(x)
# 	count2+=1
# 	if(count2>20):
# 		return
# 	else:
# 		functor(b,x,count2)
# functor(3,7,0)

exec('def f(x):'+'yield((x:=-~x)*x+-~-x)%727;'*100)
g=f(id(f))
print(*map(lambda c:ord(c)^next(g),list(open('f').read())))


def functor(x):
	return (x*x+x+1)%727
lest=[281,547,54,380,392,98,158,440,724,218,406,672,193,457,694,208,455,745,196,450,724]
a=281^ord('r')
b=547^ord('a')
print(a,b,sep=":")
x=(inverse(2,727)*(b-a)-1)%727
# print(x)
# print(functor(x)^ord('r'))
string=""
for i in lest:
	string+=chr(i^functor(x))
	x+=1
print(string)



#flag-rarctf{pyg01f_1s_fun}



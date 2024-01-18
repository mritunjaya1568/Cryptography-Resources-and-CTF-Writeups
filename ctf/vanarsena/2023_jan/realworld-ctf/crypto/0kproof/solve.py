from pwn import *
from Crypto.Util.number import *
from py_ecc import bn128

G1,G2,curve_order = bn128.G1,bn128.G2,bn128.curve_order
add,neg, multiply = bn128.add,bn128.neg,bn128.multiply
FQ = bn128.FQ

HOST = '47.254.47.63'
PORT = 13337

r = remote(HOST, PORT)
print("connected")

print(r.recvlines(3))
lest = eval(r.recvline())

PKC = [(FQ(x),FQ(y)) for x,y in lest[0]]
PKCa = [(FQ(x),FQ(y)) for x,y in lest[1]]

'''sage: expand((x-1) * (x-2)* (x-3) * (x-4) )                              
x^4 - 10*x^3 + 35*x^2 - 50*x + 24'''
P3 = G1

P1 = multiply(PKC[0],24)
P1 = add(P1, neg(multiply(PKC[1],50)))
P1 = add(P1, multiply(PKC[2], 35))
P1 = add(P1, neg(multiply(PKC[3],10)))
P1 = add(P1, multiply(PKC[4], 1))

P2 = multiply(PKCa[0] , 24)
P2 = add(P2, neg(multiply(PKCa[1],50)))
P2 = add(P2, multiply(PKCa[2], 35))
P2 = add(P2, neg(multiply(PKCa[3],10)))
P2 = add(P2, multiply(PKCa[4], 1))

print(P1,P2,P3)
print(r.recvline())
r.sendline(str(P1) + str(" ") + str(P2) + str(" ") + str(P3))

print(r.interactive())

''' Congratulations,Here is flag:rwctf{How_do_you_feel_about_zero_knowledge_proof?}'''

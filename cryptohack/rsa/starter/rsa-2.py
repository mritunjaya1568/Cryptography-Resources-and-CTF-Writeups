#!/usr/bin/python3
p,q=17,23
N=p*q
e=0x10001
m=12
print(f"cipher-text:{pow(m,e,N)}")

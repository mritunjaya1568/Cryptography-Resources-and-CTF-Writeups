#!/usr/bin/python3
from pwn import xor 
a="a6c8b6733c9b22de7bc0253266a3867df55acde8635e19c73313"
b="37dcb292030faa90d07eec17e3b1c6d8daf94c35d4c9191a5e1e"
c="c1545756687e7573db23aa1c3452a098b71a7fbf0fddddde5fc1"
d="04ee9855208a2cd59091d04767ae47963170d1660df7f56f5faf"
a=bytes.fromhex(a)
b=bytes.fromhex(b)
c=bytes.fromhex(c)
d=bytes.fromhex(d)
flag=xor(a,c,d).decode()
print(flag)
#crypto{x0r_i5_ass0c1at1v3}

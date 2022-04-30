#!/usr/bin/python3
from Crypto.Util.number import long_to_bytes,bytes_to_long
from pwn import xor
string="0e0b213f26041e480b26217f27342e175d0e070a3c5b103e2526217f27342e175d0e077e263451150104"
string=bytes.fromhex(string)
print(string)
str2="crypto{"
str2=str2.encode()
#str3=xor(str2,string[0:len(str2)])
str3=xor(str2,string)#from here also we can see the starting part myXORke+y so it will be this only so enjoy
print(str3.decode())#here it comes out to be myXORke and we can interpret that it will be myXORkey only 
#so take this and do the xor and you are done
str4="myXORkey"
str5=xor(string,str4.encode())
print(str5)

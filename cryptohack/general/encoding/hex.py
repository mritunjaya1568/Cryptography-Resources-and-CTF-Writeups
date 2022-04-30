#!/usr/bin/python3

string="63727970746f7b596f755f77696c6c5f62655f776f726b696e675f776974685f6865785f737472696e67735f615f6c6f747d"
string2=bytes.fromhex(string)
string3=string2.decode('ascii')
print(string)
print(string2)
print(string3)

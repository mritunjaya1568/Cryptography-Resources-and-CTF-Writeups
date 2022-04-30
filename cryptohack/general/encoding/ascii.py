#!/usr/bin/python3 

lest=[99, 114, 121, 112, 116, 111, 123, 65, 83, 67, 73, 73, 95, 112, 114, 49, 110, 116, 52, 98, 108, 51, 125]
string="".join(chr(i) for i in lest)
print(string)

#chr(i) is used for converting integers to character
'''
encoding-
ascii- ASCII is a 7-bit encoding standard which allows the representation of text using the integers 0-127.
'''

#!/bin/usr/python3
'''Cryptosystems like RSA works on numbers, but messages are made up of characters. How should we convert our messages into numbers so that mathematical operations can be applied?

The most common way is to take the ordinal bytes of the message, convert them into hexadecimal, and concatenate. This can be interpreted as a base-16 number, and also represented in base-10.
'''

'''Cryptosystems like RSA works on numbers, but messages are made up of characters. How should we convert our messages into numbers so that mathematical operations can be applied?

The most common way is to take the ordinal bytes of the message, convert them into hexadecimal, and concatenate. This can be interpreted as a base-16 number, and also represented in base-10.
'''

'''To illustrate:
message: HELLO
ascii bytes: [72, 69, 76, 76, 79]
hex bytes: [0x48, 0x45, 0x4c, 0x4c, 0x4f]
base-16: 0x48454c4c4f
base-10: 310400273487'''

'''
Python's PyCryptodome library implements this with the methods Crypto.Util.number.bytes_to_long and Crypto.Util.number.long_to_bytes.'''

from Crypto.Util.number import *
string="HELLO"
string_in_bytes=bytes_to_long(string.encode())
print(string)
print(string_in_bytes)	

str_back_to_byte_string=long_to_bytes(string_in_bytes)
orig_str=str_back_to_byte_string.decode()
print(str_back_to_byte_string)
print(orig_str)

str2=11515195063862318899931685488813747395775516287289682636499965282714637259206269
print(long_to_bytes(str2).decode())


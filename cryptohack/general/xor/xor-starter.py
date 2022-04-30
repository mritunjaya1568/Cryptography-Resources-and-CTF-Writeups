#!/usr/bin/python3
string="label"
string2="".join(chr(ord(i)^(13)) for i in string)
print(string2)
#flag is crypto{aloha}
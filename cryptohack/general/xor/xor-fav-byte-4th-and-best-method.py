from pwn import xor
string="73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d"
#we know that same character will be used to do the xor again so we can calculate it very easily
string=bytes.fromhex(string)
x=string[0]
#we know the starting characters of the flag its crypto{ and we know it's the first character
y='c'
y=y.encode()
xor_byte=xor(x,y)
flag=xor(xor_byte,string)
print(flag.decode())
#here is our flag crypto{0x10_15_my_f4v0ur173_by7e}

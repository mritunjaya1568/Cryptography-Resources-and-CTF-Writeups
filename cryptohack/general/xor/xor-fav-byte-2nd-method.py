from pwn import *
a="73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d"
print(len(a))
a=int(a,16)
a=a.to_bytes(33,'big')
print(a)
for i in range(128):
		#print(i.to_bytes(1,'big'))
		print(xor(a,i.to_bytes(1,'big')).decode())
#flag=crypto{0x10_15_my_f4v0ur173_by7e}

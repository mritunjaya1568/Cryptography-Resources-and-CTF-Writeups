# from pwn import remote 

# HOST = "socket.cryptohack.org"
# PORT = 13371

# r = remote(HOST,PORT)
# print(r.recvuntil(": "))

# use eval in converting string to dictionary 
dect = eval(r.recvline().strip().decode())

r.recvline()



p = int(dect["p"],16)
g = int(dect["g"],16)
A = int(dect["A"],16)
print(p)

e = 65537
E = pow(g,e,p)
E = hex(E)
print(E)

{"B" :"0x239c5e7e3f1dfc5b0a8fda7d0ac3ea804d7db01d52de1623d00c8e0aa53a065e689f7626c163614b24ed4381a210e1b32c27827658e1c9e1051bf9ca7a880aaf55fe317f2a609e5567f90477ccd867823c4c45bff8a691661c2a709a9d104cc5c843d554b764ef2a91f1f8229d140e45080857906e2772f05124fba88c97b26303896b5a7f790792d38330a180cd1c1316d07d97f864ae41ff9bf8503ade3350af184e414a3697043d91d311ea0ab7574e2b558964890f19467e8da24862b8c8"}

iv = int(dect2["iv"],16)
secret = int(dect2["encrypted_flag"],16)



''' flag = crypto{n1c3_0n3_m4ll0ry!!!!!!!!} ''' 






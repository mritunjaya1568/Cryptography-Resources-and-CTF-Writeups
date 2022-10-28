from pwn import *

ct = 'b4b55c3ee34fac488ebeda573ab1f974bf9b2b0ee865e45a92d2f14b7bdabb6ed4872e4dd974e803d9b2ba1c77baf725'
ct = bytes.fromhex(ct)
print(ct , len(ct))

key = ct[32:]
key = xor(key , b'?')

key = xor(ct[:7],b'TFCCTF{') + key[7:]
flag = xor(ct , key)
print(flag)


# flag = TFCCTF{th3_tr41n_h4s_l3ft_th3_st4t10n} 
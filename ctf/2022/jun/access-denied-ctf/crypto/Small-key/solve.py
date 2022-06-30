from pwn import xor

ct = '763d32726973a23f79373473616ba86a60300e677634f734482a626f6e5ff22e636a327c2f5ff228240123242e6caa23483d6127765fff6d743a61212f38bb'
ct = bytes.fromhex(ct)
print(ct)

keydash = b"accessde"
key = xor(ct[0:8],keydash)
print(key,len(key))

pt = xor(ct,key)
print(pt)

#  b'accessdenied{kn0wn_pl41n_t3xt_4tt4ck5_4r3_r34lly_c00l_97cd0658}'


#!/usr/bin/env python3

# Imports
from pwn import remote

from Crypto.Util.number import long_to_bytes



# Connection
host = "crypto.2021.chall.actf.co"
port = 21602

s = remote(host, port)

context.log_level = 'debug'


# Get all 0-bit and 1-bit encrypted messages
s.recvuntil('[2]? ')
s.sendline('1')

s.recvuntil('encrypt: ')
s.sendline('0'*32)

in0_out_hex = s.recvuntil('\n', drop=True).decode()

s.recvuntil('[2]? ')
s.sendline('1')

s.recvuntil('encrypt: ')
s.sendline('f'*32)

in1_out_hex = s.recvuntil('\n', drop=True).decode()



# Simple encryption function
def rot(inp, state):
    k1,k2,k3 = state
    return ((((((inp & k1) ^ k1) & k2) ^ k2) & k3) ^ k3)



# Time to recover k1,k2,k3 (the key) for as much as we can :)
k1 = list('_'*128)
k2 = list('_'*128)
k3 = list('_'*128)

# Output of all 0 and all 1 input
in0_out = '{:0128b}'.format(int(in0_out_hex,16))
in1_out = '{:0128b}'.format(int(in1_out_hex,16))
print(in0_out)
print(in1_out)
print()

# Simple rules originating from the encryption function
# There is no bit shuffling so everything is treated bit-wise, very vulnerable (!)
for i in range(128):
    if (in0_out[i] == '1') or (in1_out[i] == '1'):
        k3[i] = '1'
    if in1_out[i] == '1':
        k2[i] = '0'
    if (in0_out[i] == '1') and (in1_out[i] == '0'):
        k1[i] = '1'
        k2[i] = '1'
        k3[i] = '1'

print(''.join(k1).replace('_','0'))
print(''.join(k2).replace('_','0'))
print(''.join(k3).replace('_','0'))

k1r = int(''.join(k1).replace('_','0'),2)
k2r = int(''.join(k2).replace('_','0'),2)
k3r = int(''.join(k3).replace('_','0'),2)



# Let's start encrypting ourselves, even though we don't know the full key >:)
s.recvuntil('[2]? ')
s.sendline('2')

while True:

	# Receive message
	s.recvuntil('this: ')
	inp = s.recvuntil('\n', drop=True).decode()

	# Send encrypted message
	s.sendline(''.join([long_to_bytes(rot(int(i,16),(k1r,k2r,k3r))).hex() for i in [inp[p:p+32] for p in range(0,len(inp),32)]]))

	# actf{no_bit_shuffling_is_trivial}
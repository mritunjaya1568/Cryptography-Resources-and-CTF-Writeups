from pwn import remote 

l = {}
while len(l) != 17:
    from pwn import remote
    re = remote('crypto.chal.csaw.io', 5008)
    re.recvuntil('What is the plaintext?\r\n')
    re.sendline('Wiener wiener chicken dinner')
    re.recvuntil('What is the plaintext?\r\n')
    re.sendline('Who came up with this math term anyway?')
    re.recvlines(5)
    re.sendline(str(1))
    re.recvlines(3)
    re.sendline('no')
    re.recvuntil('plaintext?\r\n')
    re.sendline('Totally did not mean to put an oracle there')
    for i in range(3):
        re.recvline()
    n = int(re.recvline().strip().split()[-1])
    re.recvline()
    re.recvline()
    c = int(re.recvline().strip().split()[-1])
    re.close()
    l[n] = c
    print(len(l))

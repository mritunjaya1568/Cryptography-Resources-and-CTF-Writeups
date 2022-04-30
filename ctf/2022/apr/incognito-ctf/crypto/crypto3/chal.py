#!/usr/bin/env python2
import os
from Crypto.PublicKey import RSA
from Crypto.Hash import MD5

buff = os.urandom(4096)
dfive = MD5.new()

flag = "redacted"

def rando(n):
  global buff
  rand = buff[:n]
  buff = buff[n:]
  while (len(buff) < 4096):
    dfive.update(os.urandom(4096))
    buff += buff + dfive.hexdigest()
  return rand

def main():
  rsa = RSA.generate(1024,rando)
  print("Key Created\n")
  print("Encrypted flag : \n")
  print rsa.encrypt(flag,"")[0].encode("hex")
  print("\n")
  while True:
    m = raw_input("Enter text : ")
    print("Encrypted text : \n")
    print rsa.encrypt(m,"")[0].encode("hex")
    print("\n")

main()


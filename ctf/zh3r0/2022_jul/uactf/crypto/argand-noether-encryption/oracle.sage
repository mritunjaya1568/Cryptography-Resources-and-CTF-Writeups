# **************************************************************#
# 		                 Redacted information:			        #	
# 			                 flag, n, M				            #
# **************************************************************#

def check(M):
  m = (M^n).n() - identity_matrix(2)

  if m[0,0]^2+m[0,1]^2+m[1,0]^2+m[1,1]^2 < 0.00001:
    return

  print("An error has occured. Please contact an admin about this.")
  quit()


def coefficients(m, length):
  seq = [m]

  while len(seq) < length:
    seq.append(seq[-1]*m)

  return seq


def encrypt(M, m, flag):
  m = coefficients(m, len(flag))

  s = identity_matrix(2)

  for c, a in zip(flag, m):
    s *= M^(c*a)

  return s.n()

def main():
  check(M)
  print("Hello! Welcome to Argand-Noether encryption oracle!")
  print(M.n())

  while True:
    m = int(input("\nPlease input a number m: "))
    enc = encrypt(M, m, flag)
    print(f"Under {m}, the flag gets encrypted to")
    print(enc)


if __name__ == "__main__":
  main()



''' Hello! Welcome to the Argand-Noether encryption oracle!
[0.999134408101731, -0.041598492126561],
[0.041598492126561 ,0.999134408101731]

Please input a number m: 1
Under 1, the flag gets encrypted to
[0.957878940978472 ,-0.287172307909310],
[0.287172307909310 ,0.957878940978473]


Please input a number m: 2
Under 2, the flag gets encrypted to
[-0.906063394634353, 0.423141967788195],
[-0.423141967788195 ,-0.906063394634353]

Please input a number m: 3
Under 3, the flag gets encrypted to
[-0.558809547420259 ,-0.829296020557173],
[0.829296020557173, -0.558809547420258]

Please input a number m: 10
Under 10, the flag gets encrypted to
[0.978435036725432 ,-0.206554784277931],
[0.206554784277931 ,0.978435036725432]

'''

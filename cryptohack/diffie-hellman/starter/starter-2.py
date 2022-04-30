# 1st method


from Crypto.Util.number import *

p = 28151
print(isPrime(p))
fp_elem = []
for i in range(1,p):
	fp_elem.append(i)

count = [0]*(p-1)

dest = dict(zip(fp_elem,count))
for i in fp_elem:
	print(i)
	dest2 = dest.copy()
	g = 1
	for j in range(1,p):
		g = (g*i)%p
		dest2[g] = dest2[g] + 1
	flag = True
	for j in range(1,p):
		if dest2[j] == 1:
			continue
		else:
			flag = False
			break
	if flag == True:
		print(f"our answer = {i}")
		break

# our answer is 7 

# 2nd method-> best solution

'''
Rather than using a set and checking if every element of Fp has been
generated, we can also rapidly disregard a number from being a generator
by checking if the cycle it generates is smaller in size than p.
If we detect a cycle before p elements, k can't be a generator of Fp.
'''

def is_generator(k, p):
  for n in range(2, p):
    if pow(k, n, p) == k:
      return False
  return True

p = 28151
for k in range(p):
  if is_generator(k, p):
    print(k) 

ans = 0
x = 1
while x!= 544:
	calculation = (x*(x+1)) + (2 *(x + 1))
	reversed_calc = int(str(calculation)[::-1])
	if reversed_calc%4 == 0:
		ans+=reversed_calc
	x+=1


print(ans)

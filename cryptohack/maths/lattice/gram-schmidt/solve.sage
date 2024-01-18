v1 = vector(RR, [4,1,3,-1])
v2 = vector(RR, [2,1,-3,4])
v3 = vector(RR, [1,0,-2,7])
v4 = vector(RR, [6,2,9,-5])

lest = [v1, v2, v3, v4]
for i in range(len(lest)):
	for j in range(i):
		lest[i] = lest[i] - (lest[i].inner_product(lest[j]))/(lest[j].inner_product(lest[j])) * lest[j]

print(lest[-1][1].n(digits = 5))

# 0.91611

print("2nd method")
# 2nd method 

M = matrix(QQ, [v1, v2, v3, v4])
val = M.gram_schmidt()[0][3][1].n(digits = 5)
print(val)

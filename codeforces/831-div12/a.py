t = int(input().strip())

for i in range(t):
	n = int(input().strip())
	lest = list(map(int,input().strip().split()))
	lest.sort()
	ans = lest[-1] - lest[0]
	ans += max(lest[1]-lest[0],lest[-1]-lest[-2])
	print(ans)


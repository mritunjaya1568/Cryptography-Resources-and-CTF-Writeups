from string import ascii_lowercase, digits

class Data:
    def __init__(self, x, y):
        self.x = x
        self.y = y
def interpolate(f: list, xi: int, n: int, mod:int) -> int:
    result = 0.0
    for i in range(n):
        term = f[i].y
        for j in range(n):
            if j != i:
                term = term * (xi - f[j].x) / (f[i].x - f[j].x)
        result += term
  
    return result%mod

CHARSET = "DUCTF{}_!?'" + ascii_lowercase + digits
n = len(CHARSET)

print(CHARSET)
print(n)

ct = "Ujyw5dnFofaou0au3nx3Cn84"

lest = []
for i in ct:
	lest.append(CHARSET.index(i))

print(lest)

string = "DUCTF{}"

char = []
for i in string:
	char.append(CHARSET.index(i))

print(char)

value = []

for i in range(6):
	value.append(lest[i])
value.append(lest[-1])

print(value)

f = []
for i in range(len(char)):
	f.append(Data(char[i],value[i]))


	

dest = {}
for i in range(len(CHARSET)):
		dest[int(interpolate(f,i,7,47))] = CHARSET[i]


flag = ""
for i in lest:
	flag+=str((dest[i]))

print(flag)



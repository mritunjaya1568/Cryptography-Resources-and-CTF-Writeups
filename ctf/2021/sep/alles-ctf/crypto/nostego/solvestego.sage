import pickle
with open("input.pickle","rb") as f:
    input = pickle.load(f)
with open("output.pickle","rb") as f:
    output = pickle.load(f)
v = [var(f'v{i}') for i in range(512*512)]
variables = []
for i in v:
    variables.append(i)
eqnlist = []
for p in range(len(input)):
    eqn=0
    for i in input[p]:
        eqn+=v[i]
    eqnlist.append(eqn == output[p])
x = solve(eqnlist,variables) 
print(x)


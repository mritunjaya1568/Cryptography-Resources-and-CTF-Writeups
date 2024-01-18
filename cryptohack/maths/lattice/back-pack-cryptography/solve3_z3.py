from z3 import *

N = 10
pubkey = [0,1,2,3,4,5,6,7,8,9]
ct = 45

msg = [BitVec(f'msg_{i}',1) for i in range(N)]
a=[i*j for i,j in zip(pubkey,msg)]

solver = Solver()
solver.add(sum(a)==ct)

if solver.check() == sat:
    model = solver.model()
    print(model)
else:
    print("No solution")
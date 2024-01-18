from z3 import *

def all_smt(s, initial_terms):
    def block_term(s, m, t):
        s.add(t != m.eval(t))
    def fix_term(s, m, t):
        s.add(t == m.eval(t))
    def all_smt_rec(terms):
        if sat == s.check():
           m = s.model()
           yield m
           for i in range(len(terms)):
               s.push()
               block_term(s, m, terms[i])
               for j in range(i):
                   fix_term(s, m, terms[j])
               yield from all_smt_rec(terms[i:])
               s.pop()
    yield from all_smt_rec(list(initial_terms))


output = 0xb4a8f1786f16b0ad10a2b5c4fdb020a192e963cf61eb3adb6eb55c41c41430a7313c158164b717516ae1f11e8f7b2df85b0d1843a519fd016894623384781eeed8e75f9bd38608d3fa734190ccde2b454e7de484b1600872b4fad839265656067b003c3f33c77345e8f55aa33234ac1b1e4d83d2f487ea1a042d4bdea3748bd3


N = 2 
selected = [BitVec(f'sel_{i}',1024) for i in range(N)]

solver = Solver()
solver.add((selected[0] * selected[1])== output)
solver.add(selected[0]&0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff000000000ffffffffff0000000000ffffffffffffffffffffffffffffffffffff0000000000fffff == 0xe078e75b3313660ec08eefcdfe98ca82ecea4f3483ce905500000000005fa57d82f0000000000525966d8eca5d968b96ca03e60f1b0a13cbd0000000000ac39b)
solver.add(selected[1]&0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 == 0)

# if solver.check() == sat:
# 	print(solver.model())

for model in all_smt(solver, selected):
    sel = [hex(model.eval(i,True).as_long()) for i in selected]
    


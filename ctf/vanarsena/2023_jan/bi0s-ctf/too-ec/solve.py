from z3 import *
import sys

sys.setrecursionlimit(30000000)

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
selected = [BitVec(f'sel_{i}',200) for i in range(N)]

solver = Solver()
solver.add((selected[0] * selected[1])&0xffffffffffffffffffffffffffffffffffffffffffffffffff == (output&0xffffffffffffffffffffffffffffffffffffffffffffffffff))
solver.add(selected[0]&0xfffffffffffffffffffffffffffffffffff0000000000fffff == 0x25966d8eca5d968b96ca03e60f1b0a13cbd0000000000ac39b)

ct = []
count = 0
f = open('data.txt','w')
for model in all_smt(solver, selected):
    low = [model.eval(i,True).as_long() for i in selected]
    count += 1
    f.write(str(low[0]) +'\n')
    print(count)
    # P.<x> = PolynomialRing(Zmod(output2), implementation='NTL')
    # bound = 256^15
    # f = low[0] + 256^25 * x + 256^40 * int('e078e75b3313660ec08eefcdfe98ca82ecea4f3483ce9055',16)
    # print(f.monic().small_roots(X = bound, beta = 0.5))


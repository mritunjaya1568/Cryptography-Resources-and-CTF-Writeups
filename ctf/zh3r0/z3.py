from z3 import *  
  
inp = [BitVec(f"i_{i}", 8) for i in range(8)]  
inp += [inp[0]] # repeat first character  

# The resulting array
result = [40, 49, 65, 48, 29, 24, 32]  # what's the last 40 for? idk
  
s = Solver()  

# The sums need to be the result
for i in range(7):  
    s.add(inp[i] + inp[i+1] + inp[i+2] == result[i])  

# chars in range 0 (NULL) to 26 ('Z')
for c in inp[:8]:  
    s.add(c >= 0)  
    s.add(c <= 26)  

# xorsum needs to be 13
c = 0  
for i in range(8):  
    c ^= inp[i]  
s.add(c == 13)  
  
while s.check() == sat:  
    # add 0x40 to make 1 be 'A' etc, as the numbering of the chars in the typesystem starts at 1  
    print("".join([chr(s.model()[i].as_long() + 0x40) for i in inp[:8]]))  
    s.add(Or(*[i != s.model()[i].as_long() for i in inp[:8]]))  
else:  
    print("No more solutions")
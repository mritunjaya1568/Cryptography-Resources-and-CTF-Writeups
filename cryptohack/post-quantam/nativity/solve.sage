from Crypto.Util.number import *
from sage.all import *
from sage.modules.free_module_integer import IntegerLattice

f = open("public_key.txt",'r')

pub_key = [list( map( int,line.strip().split() ) ) for line in f.readlines()]
pk_last = pub_key.pop()
A = pub_key[::]
pub_key.insert(0, pk_last)

M = matrix(ZZ, pub_key)
M = M.stack(2^16 * identity_matrix(512))

Mred = M.LLL()

functor = lambda x: (x>=(-100) and x<=100)
err_list = [row for row in Mred if row!=vector(ZZ,512) if all([functor(x) for x in row])]

add_err = vector(Zmod(2^16),vector(pk_last)+err_list[0])
sub_err = vector(Zmod(2^16),vector(pk_last)-err_list[0])

try:
    s = matrix(Zmod(2^16),A).solve_left(add_err)
except:
    s = matrix(Zmod(2^16),A).solve_left(sub_err)

f = open("ciphertexts.txt",'r')
ct = [list( map( int,line.strip().split() ) ) for line in f.readlines()]

sk = vector(list(-s) + [1])
decrypt = lambda x: int((vector(x)*sk)) & 1

flag = ''.join(str(i) for i in [decrypt(cip) for cip in ct])
print(long_to_bytes(int(flag,2)))

# crypto{flavortext-flag-coprime-regev-yadda-yadda}
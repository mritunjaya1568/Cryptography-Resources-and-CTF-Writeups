from typing import List
from secrets import randbelow
import string
import ast
from time import sleep

from pwn import *

ALLOWED_CHARS = string.ascii_lowercase + string.digits + "_"
P = len(ALLOWED_CHARS)
INT_TO_CHAR = {}
CHAR_TO_INT = {}
for _i, _c in enumerate(ALLOWED_CHARS):
    INT_TO_CHAR[_i] = _c
    CHAR_TO_INT[_c] = _i

R = IntegerModRing(P)

def gaussian_elimination(matrices):
    # 16x33 rows x cols
    rows = len(matrices)
    cols = len(matrices[0])
    current_row = 0
    current_col = cols-2 # 31
    while current_row < rows and current_col > rows:
        # eliminate rows below current_row on current_col
        pivot = matrices[current_row][current_col]
        if pivot == 0:
            # need to swap rows
            nonzero_row = current_row
            while nonzero_row < rows and matrices[nonzero_row][current_col] == 0:
                nonzero_row += 1
            if nonzero_row == rows:
                # all rows have this entry as 0
                current_col -= 1
                continue
            else:
                # swap nonzero_row and current_row
                ttmp = matrices[nonzero_row]
                matrices[nonzero_row] = matrices[current_row]
                matrices[current_row] = ttmp
                pivot = matrices[current_row][current_col]
        for j in range(cols):
            matrices[current_row][j] *= pow(pivot, -1, P) % P
        for j in range(current_row+1, rows):
            pivot = matrices[j][current_col]
            if pivot == 0:
                continue
            for k in range(cols):
                matrices[j][k] -= pivot * matrices[current_row][k]
                matrices[j][k] %= P
        current_row += 1
        current_col -= 1
    # print(matrices)
    if current_row < rows and matrices[current_row][rows] == 0:
        return matrices[current_row][:rows] + [matrices[current_row][-1]]
    else:
        return []

def get_shares(password: str, n: int, t: int) -> List[str]:
    ffes = [CHAR_TO_INT[c] for c in password]
    ffes += [randbelow(P) for _ in range(t - len(password))]
    result = []
    for _ in range(n):
        coeffs = [randbelow(P) for _ in range(len(ffes))]
        s = sum([x * y for x, y in zip(coeffs, ffes)]) % P
        coeffs.append(s)
        result.append("".join(INT_TO_CHAR[i] for i in coeffs))

    return result

pw_len = 16
password = "".join(INT_TO_CHAR[randbelow(P)] for _ in range(pw_len))
print(password)

# how about n < t :D
n = 16
t = 32

host, port = "139.162.61.222", 13371
io = remote(host, port)

output = []
while len(output) < 16:
    sleep(0.05)
    io.sendline("x")
    resp = io.recvline()
    i = ast.literal_eval(resp.decode('utf-8'))
    matrices = []
    for j in i:
        tmp = [CHAR_TO_INT[q] for q in j]
        matrices.append(tmp)
    res = gaussian_elimination(matrices)
    if len(res) > 0:
        # print("got one...")
        output.append(res)

# print(len(output))
# print(output)
M = Matrix(R, [stuff[:16] for stuff in output[:16]])
b = vector(R, [stuff[-1] for stuff in output[:16]])
out = M.solve_right(b)
result_pwd = "".join(INT_TO_CHAR[qq] for qq in out)
io.sendline(result_pwd)
print(io.recvline())
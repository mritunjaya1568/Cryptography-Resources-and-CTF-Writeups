line = input('>>> ')
flag="bctf{hello}"
if len(line) > 10:
    raise Exception()
try:
    eval(line)
except:
    pass
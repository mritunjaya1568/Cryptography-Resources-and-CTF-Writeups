def f(t):
    c = list(t)
    for i in range(len(t)):
        for j in range(i, len(t) - 1):
            c[j], c[j+1] = c[j+1], c[j]
    return "".join(c)

if __name__ == "__main__":
    flag = open("flag", "r").read()
    open("ciphertext", "w").write(f(flag))


def frev(t):
    c = list(t)
    for i in range(len(t)-1,-1,-1):
        for j in range(len(t)-2,i-1,-1):
            c[j], c[j+1] = c[j+1], c[j]
    return "".join(c)



# crypto 
# jumble -> KCTF{y0u_g0t_m3}

# programming
# loop in a loop -> KCTF{b451c_pr06r4mm1ng}
# something in common -> KCTF{24680}
# 


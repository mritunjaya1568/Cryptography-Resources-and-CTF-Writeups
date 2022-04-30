s = 'a[qjj7ahga2gc2jjg=qf/g.7xgm[qgpjo,g2fgog=q87f/tga=7vqm[2f,gpxff.g[o11qfq/gm[7x,[ahga2g1286q/gx1gv.g6q.n7ou/bgnxmgm[qg6q.=gcquqg2fgcq2u/g1jo8q=t3a2g/7f4mg6f7cgc[omg[o11qfq/bgnxmg2m4=g76o.g=2f8qga2g=mouqgomgm[qg6q.n7ou/gof.co.=galay33aoj=7ga24-qg[o/gog8ux=[g7fg.7xgp7ug.qou=bg/7g.7xgcofmgm7g,7g7xmgc2m[gvqa0rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr3aof.co.=bg[quqg2=gm[qgpjo,gai[71qpxjj.ayalgxmpjo,aza=xna=m2amxama27afa58a2a1[aqua5a2a5[aoua/aj.a56af7aca5[aqua]3'
mp = {}

for c in s:
    if c not in mp:
        mp[c] = 0
    mp[c] += 1

a = []
for x in mp.keys():
    a.append((mp[x], x))

a.sort(reverse=True)
# print(a)

sub = {'g': ' ', 'm': 'T', '[': 'H', 'q': 'E', 'a': '^', ']': ']', 'z': '[', 'x': 'U', 'p': 'F', 'j': 'L', 'o': 'A', ',': 'G', '2': 'I', 'f': 'N', '1': 'P', '/':'D', '7':'O', '=':'S', 'c': 'W', '.': 'Y', '8':'C', '6':'K', 'v': 'M', '4':'\'', 'n':'B', 'u':'R', '3':'.', '-':'V', 'b':',', '0':'/', 't':'.'}

t = ''
for c in s:
    if c in sub:
        t += sub[c]
    else:
        t += c

print(t)
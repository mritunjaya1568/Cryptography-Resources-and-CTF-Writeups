sage: f="Ujyw5dnFofaou0au3nx3Cn84"
....: from string import ascii_lowercase, digits
....: CHARSET = "DUCTF{}_!?'" + ascii_lowercase + digits
....: w1 = [CHARSET.index(i) for i in f]
....: n = len(CHARSET)
....: P.<x> = PolynomialRing(GF(n))
....: a,b,c,d,e,f=var("a b c d e f")
....: eq=[]
....: for i,j in zip(w1[:6]+[w1[-1]],range(7)):
....:     eq.append((j, i))
sage: f = P.lagrange_polynomial(eq)
sage: encrypt("DUCTF{", f)
'Ujyw5d'
sage: c = encrypt(CHARSET, f)
sage: c
"Ujyw5d4ajz0bcmfkCnD}z6u'CFCzxpw_'kszgohi83D!18b"
sage: d = {}
sage: for i, j in zip(c, CHARSET):
....:     d[i] = j
....:
sage: ''.join(d[i] for i in 'Ujyw5dnFofaou0au3nx3Cn84')
"D!CtF{go0d_0l'_l4gr4pg8}"
sage: DUCTF{go0d_0l'_l4gr4ng3}




```f = P.lagrange_polynomial(eq)```
Yeah it'll find a poly in P
And P is the polynomial ring over the finite field of size 47
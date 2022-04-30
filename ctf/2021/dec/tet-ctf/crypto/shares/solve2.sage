ALLOWED_CHARS = "abcdefghijklmnopqrstuvwxyz0123456789_"
P = len(ALLOWED_CHARS)
INT_TO_CHAR = {}
CHAR_TO_INT = {}
for _i, _c in enumerate(ALLOWED_CHARS):
    INT_TO_CHAR[_i] = _c
    CHAR_TO_INT[_c] = _i

lest = ['5sb4ic53bj0qpcvrrg2fcpcovd3h1f9h1', 'dcfh17kskdyvwq9hp025dx9g1xi7feohn', 'gen6c5dumsdoadj4vq5vqxk1i8dm5poi_', 'zf2kbezrh4atlgj3jwf8ue2sb7ykuuadp', '7bm42zei_rkx1n1r_grsbbp783epi128z', 'vf7u9bwmo9jity98am6yx6kw9d8tl0v_i', 'ehh85prtndj_p8xzcncdqo1m_vu2g0d2r', '_5eksi97gwvf0yombkrle6hri04pf8vws', 'x67y_yqag74qhpggtzwrxdaf6o0ozlc4t', 'ekh1n_2vwg7irftkd_do7i_6yby9sr7r6', 'xrd39f_xub8qfq7m2y2j98kqw_0bg8rxv', 'lsnx_216ry8kw2a9pgmbq09ngdwx_c13j', 'r3lt9un1gga8cuvuxugk9fzrmhiyqgnsc', 'wqzysevjheroxzvvhs6bzw9nvt6glexi1', 'yu6ntsca5ps9q2isr8td6m6vqyj2l0ooe', 'ccehfvdunrhqar8bwx09rlei64qjl6lpx']



count = 0
x = [var(f'x{i}') for i in range(16)]
variables = []
for i in x:
    variables.append(i)


eqnlist = []
for secret in lest:
	eqn = 0
	for i in range(16):
		eqn += (CHAR_TO_INT[secret[i]]) * variables[i]
	for i in range(16,32):
		variable = var(f'waste{count}')
		eqn += (CHAR_TO_INT[secret[i]]) * variable
		count += 1 
	eqnlist.append(eqn == CHAR_TO_INT[secret[-1]])

ans = solve(eqnlist,variables)
print(ans)


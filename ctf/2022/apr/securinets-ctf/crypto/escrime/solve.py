from Crypto.Util.number import *

n1 = 5285941989924581490741575774796326221790301948671605967204654261159288826022690654909746856601734294076351436205238123432817696904524845143908229601315593896823359605609172777227518764838488130850768836467030938547486936412484230693105639039311878853055295612388722273133638524917106191321503530749409311343663516633298043891444321772817485480644504762143353706512690041092791539952154332856635651319630479019844011333570438615137628705917690349203588170944935681
n2 = 5512656145670579765357132887430527554149315293720001536465226567777071834432904027590899542293511871806792894769506962601330354553170015126601443256295513753986998761021594415121386822360537570074896704547101502955980189351257681515387379761554807684880212096397524725819607628411147885452294832392886405475830663300445429053365129797792206619514994944481130684176571005780217091773969415001961227566026934419626425934895777818074251010427154279687683891897394401
e = 65537
c1 = 3792561290017712418676552700903779226679678307521013229152018077539055935181708693237786486418411190513573593312739874489485768872374239333562352570689090751306553033406629945001093355613620844532659507519582518955178617942044813600181673015763469247380587771641089223066734168709065596269187564842646397647564064090886856491267151338586218098150720579275673440512159074650632829004798635425409766385176472514086448897744502264325566940224093583630788193949908215
c2 = 3222093169881176821995152873609430742364413196826316856495679228145853706169389758246323802005549827444022148276365869623395771621464376723299960525487777645386674088866891887984766934440527885549168365996216682223515034398685244541695223412679979637178695229351272286453267599205874775267533781360269542834699741976380260822746797186755978820611721151719635986648586937891954519919600047846994285652165076540057377973800029963140392459328016771048953153246246886

k = GCD(n1-1,n2-1)
k = k // (32*3*5)

k = 12397002878565866184412236037259205021945058505472864688501145731895119789392433217522880454989374040698621943547773164450323280239641723319936790061247301
assert isPrime(k) == True




# val1 = (n1-1)//(2*k)
# val2 = (n2-1)/(2*k)


# continuation after this

''' ➜  escrime python3 -i solve.py
>>> k
12397002878565866184412236037259205021945058505472864688501145731895119789392433217522880454989374040698621943547773164450323280239641723319936790061247301
>>> p = 2*k
>>> p
24794005757131732368824472074518410043890117010945729377002291463790239578784866435045760909978748081397243887095546328900646560479283446639873580122494602
>>> z1 = (n1-1)//p
>>> z1
213194351961628323410640250299436960788359886929587113345762209809829423855024999962094009325245209672536694028079899839807292138623408884978037847433651740286355302126203499264783504990449444141975879450715618532183184491630743342513140642081358447968393957195886428362362692765091748943159494083855209235840
>>> n1
5285941989924581490741575774796326221790301948671605967204654261159288826022690654909746856601734294076351436205238123432817696904524845143908229601315593896823359605609172777227518764838488130850768836467030938547486936412484230693105639039311878853055295612388722273133638524917106191321503530749409311343663516633298043891444321772817485480644504762143353706512690041092791539952154332856635651319630479019844011333570438615137628705917690349203588170944935681
>>> z1//p
8598624766403679358536220605043156397367365233441651541165765628103828242598705490165149225988314691831376857613796994711677045197086227368539944201463353
>>> z1%p
185567091079318638899010084822879352586972122769615230007316785109653965915334
>>> p1 = 95971265180147710066061051534450010402798275399026509366050097833903796712423
>>> p2 = 89595825899170928832949033288429342184173847370588720641266687275750169202911
>>> assert (p*p1+1)*(p*p2+1) == n1
>>> prime1 = (p*p1 + 1)
>>> prime2 = (p*p2+1)
>>> assert prime1 * prime2 == n1
>>> z2 = (n2-1)//p
>>> z2
222338261903683021696099416898451835119881322198437726098904199168285000106491558219510728372048594521521773156243491391410303170598380658125414861727542971447708726515726572473691805622309604745176790063015026178200826921520839950633257521561975494529468136560506753454457607690186444910804573724914119137200
>>> z2//p
8967419951482820905745212474128945656913019142321716236233345919620988824214892705556907751251489264262795466660898490846856093033780881294894968373472233
>>> z2%p
192174294963580932824239721160767664508555533455478880808028030709705579750934
>>> r1 = 79798502366111536345344096221262949801598274563915413719949375218176736253783
>>> r2 = 112375792597469396478895624939504714706957258891563467088078655491528843497151
>>> r1 = (p*r1 +1)
>>> r2 = (p*r2 +1)
>>> assert r1*r2 == n2
>>> phi1 = (prime1 - 1)*(prime2 -1)
>>> d1 = inverse(e,phi1)
>>> flag1 = pow(c1,d1,n1)
>>> long_to_bytes(flag1)
b'Securinets{G3n3r4t1ng_pr1m3s_1n_4_sp'
>>> phi2 = (r1 -1 ) * ( r2 -1)
>>> d2 = inverse(e,phi2)
>>> flag2 = pow(c2,d2,n2)
>>> long_to_bytes(flag2)
b'3c1f1c_f0rm_4lm0st_4lw4ys_3nds_b4dly}'
>>> 
 '''


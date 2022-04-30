from tqdm import tqdm
import itertools



CAT = int
cAT = len
CaT = print
RAT = str
CATCATCATCATCATCAT = RAT.isdigit

def Kitty(cat):
    return RAT(CAT(cat)*CATCATCAT)

def CAt(cat, cats):
    cat1 = 0
    cat2 = 0
    catcat = 0
    cAt = ""
    while cat1 < cAT(cat) and cat2 < cAT(cats):
        if catcat%CATCATCAT == CATCATCATCATCAT//CATCATCATCAT:
            cAt += cats[cat2]
            cat2 += 1
        else:
            cAt += cat[cat1]
            cat1 += 1
        catcat += 1
    return cAt

def catt(cat):
    return cat[::CATCATCAT-CATCATCATCAT]

def caT(cat):
    return Kitty(cat[:CATCATCAT]) + catt(cat)

def rAT(cat):
    return cat

def Rat(cat):
    return "Cat" + RAT(cAT(cat)) + cat[:CATCATCAT]

def Cat(cat):
    if cAT(cat) == 9:
        if CATCATCATCATCATCAT(cat[:CATCATCAT]) and\
            CATCATCATCATCATCAT(cat[cAT(cat)-CATCATCAT+1:]):
                catcat = CAt(caT(cat), Rat(rAT(catt(cat))))
                if catcat == "C20a73t0294t0ac2194":
                    flag = "runner_" + cat
                    print(flag)
                    print(cat)
                    return
                else:
                    return
        else:
            return
    else:
        return

CaT("What'S tHe aNsWer")
for i in itertools.combinations_with_replacement('2073c14Cat9',9):
    cat = "".join(j for j in i)
    # print(cat)
        # cat = input()
    CATCATCAT = cAT(cat)//3
    CATCATCATCAT = CATCATCAT+1
    CATCATCATCATCAT = CATCATCAT-1
    Cat(cat)


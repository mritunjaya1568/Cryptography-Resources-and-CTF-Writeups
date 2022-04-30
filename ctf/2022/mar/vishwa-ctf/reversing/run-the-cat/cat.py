
def CAt(cat, cats):
    print(cat, cats)
    cat1 = 0
    cat2 = 0
    catcat = 0
    cAt = ""
    while cat1 < len(cat) and cat2 < len(cats):  # 0 < 12 and 0 < 7
        if catcat%len(cat)//3 == (len(cat)//3-1) // (len(cat)//3 + 1):
            cAt += cats[cat2]
            cat2 += 1
        else:
            cAt += cat[cat1]
            cat1 += 1
        catcat += 1
    return cAt


# string = "123456780"
# # CAt(cat[0:3] + cat[::-1], "Cat9" + cat[-1:-4:-1])
print(CAt("123087654321","Cat9087"))


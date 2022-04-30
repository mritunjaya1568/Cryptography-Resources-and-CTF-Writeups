a = "55 4D 41 53 53 7B 6X 66 6X 5Y 74 3Z 76 5Y 73 3Z 6X 6W 34 73 7D"
chars_left = '0289ACEF'

N = len(chars_left)
for i in '289ACEF':
    for j in '289AF':
        if j==i:
            continue
        for k in '0289':
            if k==i or k==j:
                continue
            for l in '289ACEF':
                if l==i or l==j or l==k:
                    continue
                op = a.replace('X',i).replace('Y',j).replace('Z',k).replace('W', l)
                temp = op.split(' ')
                ans = ''
                for c in temp:
                    ans+=chr(int(c,16))
                print(ans)
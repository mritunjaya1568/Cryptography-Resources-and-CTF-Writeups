from math import *
# def nk2n(nk):
#     l = len(nk)
#     if l==1:
#         return nk[0]
#     elif l==2:
#         i,j = nk
#         return ((i+j)*(i+j+1))//2 +j
#     return nk2n([nk2n(nk[:l-l//2]), nk2n(nk[l-l//2:])])
k=2597749519984520018193538914972744028780767067373210633843441892910830749749277631182596420937027368405416666234869030284255514216592219508067528406889067888675964979055810441575553504341722797908073355991646423732420612775191216409926513346494355434293682149298585
def check(mii,val):
        t=(mii*(mii+1))//2
        if(t<val):return 1
        return 0
def search(l, r,val):
    ans = -1
    while (l <= r):
        mid = l + (r - l) // 2
        if (check(mid,val)):
            ans = max(ans, mid)
            l = mid + 1
        else:
            r = mid - 1
    return ans
lest=[]
def recur(k):
	if(k>=1 and k<=256):
		lest.append(k)
		return
	n=search(1,10**150,k)
	j=k-((n*(n+1))//2)
	i=n-j
	recur(i)
	recur(j)
	return
recur(k)
string=""
for i in lest:
	string+=chr(i)
print(string)


#zh3r0{wh0_th0ugh7_b1j3c710n5_fr0m_n^k_t0_n_c0uld_b3_s00000_c0000000l!}

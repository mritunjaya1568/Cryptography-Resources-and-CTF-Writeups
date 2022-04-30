from Crypto.Util.number import long_to_bytes

####################################
# The idea here is that e=3 is pretty small whereas n is big, so it is possible that pow(m,e) is inferior to n
# so c, which is pow(m,e,n) would probably simply be pow(m,e)=pow(m,3) 
# and so m = pow(c,1/3) ie cube root of c
###################################
def find_cube_root(n):
       low = 0
       high = n
       while low < high:
           mid = (low+high)//2
           if mid**3 < n:
               low = mid+1
           else:
               high = mid
       return(low)

ct = 243251053617903760309941844835411292373350655973075480264001352919865180151222189820473358411037759381328642957324889519192337152355302808400638052620580409813222660643570085177957

print(long_to_bytes(find_cube_root(ct)))
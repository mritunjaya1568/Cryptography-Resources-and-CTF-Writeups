from Crypto.Util.number import *

# int power(int x, int y)
# {
#     int res = 1;
#     while (y > 0)
#     {
#         if (y & 1)
#             res = res * x;
#         y = y >> 1;
#         x = x * x;
#     }
#     return res;
# }
# int powermod(int x, int y, int p)
# {
#     int res = 1;
#     x = x % p;
#     while (y > 0)
#     {
#         if (y & 1)
#             res = (res * x) % p;
#         y = y >> 1;
#         x = (x * x) % p;
#     }
#     return res;
# }

def power(x,y):
	res = 1
	while y>0:
		if y&1:
			res = res*x
		y = y>>1
		x = x * x
	return res

print(power(2,2**64))

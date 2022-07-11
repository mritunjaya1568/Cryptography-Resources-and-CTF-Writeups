from Crypto.Util.number import *

N = '0x7fe8cafec59886e9318830f33747cafd200588406e7c42741859e15994ab62410438991ab5d9fc94f386219e3c27d6ffc73754f791e7b2c565611f8fe5054dd132b8c4f3eadcf1180cd8f2a3cc756b06996f2d5b67c390adcba9d444697b13d12b2badfc3c7d5459df16a047ca25f4d18570cd6fa727aed46394576cfdb56b41'
e = '0x10001'
c = '0x5233da71cc1dc1c5f21039f51eb51c80657e1af217d563aa25a8104a4e84a42379040ecdfdd5afa191156ccb40b6f188f4ad96c58922428c4c0bc17fd5384456853e139afde40c3f95988879629297f48d0efa6b335716a4c24bfee36f714d34a4e810a9689e93a0af8502528844ae578100b0188a2790518c695c095c9d677b'

N, e, c = int(N,16), int(e,16), int(c,16)

DATA = bytes.fromhex("372f0e88f6f7189da7c06ed49e87e0664b988ecbee583586dfd1c6af99bf20345ae7442012c6807b3493d8936f5b48e553f614754deb3da6230fa1e16a8d5953a94c886699fc2bf409556264d5dced76a1780a90fd22f3701fdbcb183ddab4046affdc4dc6379090f79f4cd50673b24d0b08458cdbe509d60a4ad88a7b4e2921")
data = bytes_to_long(DATA)

encrypted_data = pow(data,e,N)
assert encrypted_data == data

# we know that e - 1 = 2 ** 16 and pow(data , e-1, N) = 1 
# we know that square root of 1 mod prime is either +1 or -1 
# but here we dont have prime , so we will check which value doesnt come out to be 1

for i in range(1,17):
	data = (data * data) % N
	print(data , i)
  
# here we found that , data^256 != 1 mod N     while     data^512 = 1 mod N
# consider z = data ^ 256 mod N , now data^512 = z * z = 1 mod N

z = 14573330329777345466716427138964763643316382540146850673261646339635250550047603089851590671733675671553339810312988446921139294433175492148910522081441119373450446646232663100181438157456101244865003689391419997679731752504790195214890611503266822839198431068665139221007788734481289099967859381061489428771
assert (z * z) % N == 1

# now just solve this eqn 
# (z*z -1) = 0 mod N 
# (z-1) * (z+1)  = 0 mod N 
# we know that z < N , because it's the remainder when divided by N -> z = data ^ 256 mod N
# (z-1) * (z+1) = c * N  ( c-> constant )

# 2 numbers which are less than N , when multiplied gives a factor of N which only means that 
# factors of N are contained in (z-1) and (z+1) and since (z-1) < N and (z+1) < N , prime p and q
# will be in different values , so take GCD of (z-1) and N to get p and same for (z+1) with N to get q
p = GCD(z-1 , N)
q = GCD(z+1 , N)

assert p * q == N

# simply calculate d now and get the flag
phi = (p-1) * (q-1)
d = inverse(e, phi)
flag = pow(c, d , N)
flag = long_to_bytes(flag)
print(flag)

''' flag = b'crypto{R3m3mb3r!_F1x3d_P0iNts_aR3_s3crE7s_t00}' ''' 




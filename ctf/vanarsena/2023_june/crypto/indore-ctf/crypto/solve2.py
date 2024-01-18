from Crypto.Cipher import AES
from Crypto.Util.Padding import pad
from Crypto.Util.number import bytes_to_long,long_to_bytes

base= 1.582865871833962350672487559906539350957045416218604029623801809371663187120135885773063504257759077083569730916957342287410122618714508676572477981771741910358410930757789936535603770759077822533963997825559582891735692273934906638208523910403941880272794583604745417406979461840307679511885662587
mod= 2.622057554292119810464839589891119413682754951431623162816821703800790587070414250230295532961429093446135752671783218055608956901393935694701119434775235840422641497164906951936899979932146072383121390810206221897429600856554539772305369549710288888325526487021329012097540833128568511729752229214
new_base= -0.8476433448954187054724265679077740799227260890294155582018935938514611938418638905500305109792958619920222495821341257165266698620566820476342332700555752487047762519584784225717894517675125559580182003624145689288072916543718840670420827333241007797418444791851958301131513893479094664507855619210
ct=bytes.fromhex('a756399aaa85cb6de7d2541eb35d64ae00491b9d84bdc655f508384a4d1a92da44320f4d76f7a931ca93cb58a7d384360e826fb8c02c03a329d2c313589f19ef')

C=2**512
mat =matrix(QQ,[[new_base,100,0],[base,0,1/C],[mod,0,0]]).LLL()
            
a =abs(mat[2,2]*C)
key=long_to_bytes(int(a))
print(AES.new(key,AES.MODE_ECB).decrypt(ct))
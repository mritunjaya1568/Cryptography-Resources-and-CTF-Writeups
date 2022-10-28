string1 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
string2 = "056BCHINOTUZ147ADGJMPSVY2389EFKLQRWX"

dect = {}

for i in range(len(string1)):
	dect[i] = string2.index(string1[i])

ct = 'mx_yP_1n__@!41dr7N5uM32Dtr3c10_F4TD2'

flag = ''
for i in range(len(ct)):
	flag += ct[dect[i]]

print("SEKAI{" + flag + "}")

# SEKAI{m4tr1x_d3cryP710N_15_Fun_M4T3_@2D2D!}



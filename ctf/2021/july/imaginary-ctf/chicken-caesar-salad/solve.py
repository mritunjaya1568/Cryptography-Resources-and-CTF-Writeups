string="qkbn{ePmv_lQL_kIMamZ_kQxpMZa_oMb_aW_pIZl}"
def caesar(msg,k,starting=""):
	result=""
	for i in msg:
		if (i.isupper()):
			result+=chr(65+(ord(i)-65+k)%26)
		elif(i.islower()):
			result+=chr(97+(ord(i)-65+k)%26)
		else:
			result+=i
	if result.startswith(starting):
		print(result)
for i in range(26):
	caesar(string,i,"ictf")


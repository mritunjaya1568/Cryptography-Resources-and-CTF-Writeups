from sage.all import *
import string, base64, math

ALPHABET = string.printable[:62] + '\\='

def decrypt(enc,pkey):
	m64 = b""
	for e in enc:
		m64 += ALPHABET[F.index(F[ALPHABET.index(e)]/pkey)].encode()
	return m64

for i in range(1,64):
	F = list(GF(64))
	m64 = decrypt("805c9GMYuD5RefTmabUNfS9N9YrkwbAbdZE0df91uCEytcoy9FDSbZ8Ay8jj",F[i])
	try:
		msg = base64.b64decode(m64)
		if b'CCTF{' in msg:
			print(msg)
			break
	except:
		pass

# CCTF{EnCrYp7I0n_4nD_5u8STitUtIn9_iN_Fi3Ld!}
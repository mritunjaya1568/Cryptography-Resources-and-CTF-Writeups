from pwn import *
import cryptanalib as ca

HOST = 'gc1.eng.run'
PORT = 31760

r = remote(HOST,PORT)

ct = 'b573a096bf6f525498eb19d297eb95e534fd997eb03ba2a1259a22f2d4d9e4a421d6765fb3c5e26fe5aa2ba8448aa06ac229ae5e0292d3544951027ce8acb47f'
iv = '28381f47d0097c7765468968179a722e'



def padding_oracle(ciphertext):
	ciphertext = ciphertext.encode('hex')
	print(r.recvuntil(': '))
	print(r.sendline(ciphertext))
	string = r.recvline()
	print(string)
	if 'Successfully' in string:
		return True
	else:
		return False


# padding_oracle(ct)

ca.padding_oracle_decrypt(padding_oracle=padding_oracle, ciphertext=ct.decode('hex'), block_size=16, padding_type='pkcs7', iv=iv.decode('hex'), verbose=True, hollywood=True)





''' flag = inctf{pAdD1ng_is
_n0t_bAd_y0u_a7e
_chAMp_in_pAdD1n


flag = inctf{pAdD1ng_is_n0t_bAd_y0u_a7e_chAMp_in_pAdD1nG}



'''The block cipher challenges are built on top of web apps. Each one gives you the source code of the problem, 
and forms to interact with the functions defined. 
To automate your solution, 
you can call the functions directly by sending data as a GET parameter 
and receiving a JSON response, e.g.:

$ curl http://aes.cryptohack.org/ecb_oracle/encrypt/00000000000000000000000000000000/
{"ciphertext":"8b6a083e36541cb59840e2242de73e11e84bfaeb5722f80253120ab21da890037bbbcc054419106657728a2d4d368f6e"}

For fully scripting your answers, we recommend the Python Requests package (rather than cURL).
'''


"""
Ref:
    https://docs.python-requests.org/en/master/user/quickstart
"""

import requests

string = "63727970746f7b626c30636b5f633170683372355f3472335f663435375f217d"

flag = bytes.fromhex(string)
print(flag.decode())

# crypto{bl0ck_c1ph3r5_4r3_f457_!}


#deep meaning -> https://stackoverflow.com/questions/6392739/what-does-the-at-symbol-do-in-python
#'This shows that the function/method/class you're defining after a decorator 
#is just basically passed on as an argument to the function/method immediately after the @ sign.'


# @chal.route('/block_cipher_starter/decrypt/<ciphertext>/')
# @chal.route('/block_cipher_starter/encrypt_flag/')

string1 = "http://aes.cryptohack.org"
string2 = "/block_cipher_starter/encrypt_flag/"
string3 = "/block_cipher_starter/decrypt/"


string2 = string1 + string2
string3 = string1 + string3


r = requests.get(string2)


#print(r.status_code)
#print(r.text)
#print(r.json())


data = r.json()
ciphertext = data['ciphertext']


string3 = string3 + f"{ciphertext}/"


r2 = requests.get(string3)


# print(r2.status_code)
# print(r2.text)
# print(r2.json())


flag = r2.json()
flag = flag['plaintext']
flag = bytes.fromhex(flag).decode()
print(flag)


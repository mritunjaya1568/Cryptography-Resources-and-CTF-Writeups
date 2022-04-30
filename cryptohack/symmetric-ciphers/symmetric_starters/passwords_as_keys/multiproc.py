from multiprocessing import Pool
import hashlib
from Crypto.Cipher import AES
import requests

r = requests.get('https://gist.githubusercontent.com/wchargin/8927565/raw/d9783627c731268fb2935a731a618aa8e95cf465/words')
wordlists = list(r.text.split('\n'))
print(len(wordlists))

ciphertext = requests.get('http://aes.cryptohack.org/passwords_as_keys/encrypt_flag/').json()["ciphertext"]
cnt = 1

def process_image(keyword):
    global cnt
    key = hashlib.md5(keyword.encode()).digest().hex()
    string = f'http://aes.cryptohack.org/passwords_as_keys/decrypt/{ciphertext}/{key}/'
    try:
        print(cnt)
        flag = requests.get(string).json()["plaintext"]
        flag = bytes.fromhex(flag)
        if flag.find(b'crypto')!= -1:
            print(flag)
            quit()
        cnt+=1
    except:
        print("exceptions")

if __name__ == '__main__':
    pool = Pool()                         # Create a multiprocessing Pool
    pool.map(process_image, wordlists) 
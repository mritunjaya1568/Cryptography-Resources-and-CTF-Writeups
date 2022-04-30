import threading 
from queue import Queue
import hashlib
from Crypto.Cipher import AES
import requests
import time


r = requests.get('https://gist.githubusercontent.com/wchargin/8927565/raw/d9783627c731268fb2935a731a618aa8e95cf465/words')
wordlists = list(r.text.split('\n'))
print(len(wordlists))

ciphertext = requests.get('http://aes.cryptohack.org/passwords_as_keys/encrypt_flag/').json()["ciphertext"]


flagger = True
cnt = 1


print_lock = threading.Lock()

def exampleJob(worker):
	global cnt
	string = f'http://aes.cryptohack.org/passwords_as_keys/decrypt/{ciphertext}/{worker}/'
	flag = requests.get(string).json()["plaintext"]
	flag = bytes.fromhex(flag)
	with print_lock:
		print(cnt)
		cnt+=1
	if flag.find(b'crypto') == -1:
		return
	else:
		with print_lock:
			print(flag.decode())
		flagger = False


def threader():
	while flagger:
		worker = q.get()
		exampleJob(worker)
		q.task_done()


q = Queue()

for x in range(30):
	t = threading.Thread(target = threader)

	t.daemon = True
	#it will die when the main thread dies
	t.start()

start = time.time()

for keyword in wordlists:
	key = hashlib.md5(keyword.encode()).digest().hex()
	q.put(key)

q.join()

print('Entire job took :',time.time()-start)
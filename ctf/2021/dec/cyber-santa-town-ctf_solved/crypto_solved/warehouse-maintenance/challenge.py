import signal
import subprocess
import socketserver
from random import randint
import json
import hashlib
import os
from util import executeScript


salt = os.urandom(randint(8,100))

def create_sample_signature():
	dt = open('sample','rb').read()
	h = hashlib.sha512( salt + dt ).hexdigest()

	return dt.hex(), h

def check_signature(dt, h):
	dt = bytes.fromhex(dt)
	
	if hashlib.sha512( salt + dt ).hexdigest() == h:
		return True

def challenge():
	print("Welcome to Santa's database maintenance service.\nPlease make sure to get a signature from mister Frost.\n")
	while True:
		try:
			print('1. Get a sample script\n2. Update maintenance script.\n> ')
			option = input().strip()

			if option=='1':
				data, sign = create_sample_signature()
				payload = json.dumps({'script': data, 'signature': sign})
				print(payload + '\n')
			elif option=='2':
				print('Please send your script and its signature.\n> ')
				resp = input().strip()
				resp = json.loads(resp)
				if check_signature(resp['script'], resp['signature']):
					script = bytes.fromhex(resp['script'])
					res = executeScript(script)

					print(res+'\n')
				else:
					print('Are you sure mister Frost signed this?\n')

			else:
				print('There is no such an option.\n')
				exit(1)
		except Exception as e:
			print(e)
			print('Invalid payload. Bye!')
			exit(1)


def main():
	try:
		challenge()
	except:
		pass

if __name__ == "__main__":
	main()

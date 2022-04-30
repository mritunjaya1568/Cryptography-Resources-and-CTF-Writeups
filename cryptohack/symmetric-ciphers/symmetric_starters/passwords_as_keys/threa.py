import threading 
from queue import Queue
#both are in standard library 

import time

print_lock = threading.Lock()

def exampleJob(worker):
	time.sleep(0.5)

	with print_lock:
		print(threading.current_thread().name,worker)


def threader():
	while True:
		worker = q.get()
		exampleJob(worker)
		q.task_done()


q = Queue()

for x in range(10):
	t = threading.Thread(target = threader)

	t.daemon = True
	#it will die when the main thread dies
	t.start()

start = time.time()

for worker in range(20):
	q.put(worker)

q.join()

print('Entire job took :',time.time()-start)

'''
D. Refaeli
5 years ago
I think this video is a bit confusing because it mixes 2 different topics: "threading", and "queue". 

As I understand, queue is not so relevant here, since it's only used to number the different threads, and kind of "indexing" them.

The important things to take out of this video (threading-wise) is, IMO (disclaimer: I'm not an expert), this:

# t = threading.Thread(target=threader) 
# t.start()
this creates different threads and tell them to execute a command called "threader" (confusing name, but he could have called it "banana"), and puts it in an object called t. But first, you have to start the thread by using the <thread object>.start() command 

Since this runs on a loop 10 times - it means 10 different threads are created and are executing "threader"/"banana" - command (and this is the important part) simultaneously! (!!!) Meaning, the 2nd loop thread does not wait until the first loop thread finishes before it executes - it runs off to do the command side by side. 

# t.daemon = True 
is defining the thread as a daemon, meaning it is not the main thread. I don't see the significance of that in this program, and maybe you can take it off. 

Now what does the threader command/function do?
First - it gives the thread an index from 0-19, and then it tells him to do exampleJob, which is just to wait 1/2 a second, and print the thread name, and the index. 

# print_lock = threading.Lock()
# with print_lock: ... print... 
are used to lock the other threads from stepping on each other while printing. Meaning - if thread #9 is now printing, all the other threads that currently arrived at this command have to wait until it finishes. 

So you will get printed a random arrangement of the 10 different threads names, and the "index" they were executing. Each thread will get 2 "indexes", resulting in 20 instances of the printed command.  

[[[ This (above) is the important code for threading. Down below is using the queue code ]]]

Why 2? Why 20?

# for worker in range(20):
#    q.put(worker)
the reason it will happen 20 times, is because there are 20 "indexes" being sent to the threading/banana command, and-

# worker = q.get() 
# exampleJob(worker)
-  the ten threads created are reaching here basically at the same time, are assigned an "index", and execute exampleJob with that index (here "worker" is actually a new local variable, that gets the other "worker" variable out of the main code, again a bit confusing, but he could have called it a different name). This is looped until-

# q.task_done()
# q.join()
-all the "indexes" are "returned". 

Then the program continues to its last command (print...) and finishes. Since there are 20 "indexes", there will be 20 times exampleJob will be executed, but since there are 10 threads, they will do simultaneously the first 10 exampleJob, come back and do the second 10 exampleJob (this is why, "index"-wise, the first 10 indexes will always be 0-9, and the last 10 indexes will always be 10-19). 

Since every time the 10 threads execute exampleJob they have to wait 1/2 a second, and they do this twice, the whole thing takes around 1 second, in total.''' 	

# Videos left to watch

## [Connor office hours]((https://www.youtube.com/watch?v=14mIjpOXnrM) - of 2021 , didnt watched yet - please watch it before moving on to shellcode module

## [Connor office hours](https://www.youtube.com/watch?v=0IHUGaoOnQo&t=2365s) - of 2021, not watched yet - please watch it before moving on to shellcode module

## [CSE 466: Yan's extended Q&A 2022.08.25](https://www.youtube.com/watch?v=Wv0tJpfpmMY&list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-) -> watched

## [Computer Systems Security - Michael's Office Hours 8/26/22](https://www.youtube.com/watch?v=PmiycF97PWo&list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-) -> watched but not enough good content

## [Robert Office Hours - 2022.08.24](https://www.youtube.com/watch?v=eQbKkN1SqOE&list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-&index=4) -> watched , really good content




# file descriptors - 

## 1- https://stackoverflow.com/questions/7082001/how-do-file-descriptors-work - most important - read full page
### 1.1 - https://tldp.org/LDP/abs/html/io-redirection.html - optional for reading

## 2- https://bash.cyberciti.biz/guide/Reads_from_the_file_descriptor_(fd) - read it

## 3- https://stackoverflow.com/questions/24793069/what-does-do-in-bash - may or may not 
## 4- https://unix.stackexchange.com/questions/84620/what-does-sh-a-sh-0-0-mean - may or may not read it 
## 5- https://unix.stackexchange.com/questions/13724/file-descriptors-shell-scripting/13726#13726 - may or may not
## 6- to check your file descriptor is present in linux or not - ```cd /proc/self/fd; ls -altr```


# Redirections with tcp 
## ## https://www.gnu.org/savannah-checkouts/gnu/bash/manual/bash.html#Redirections - bash reference manual

## another cool site for redirections - https://catonmat.net/bash-one-liners-explained-part-three - check 14th part - access a website through bash





# C programming tutorials are good on this youtube channel - https://www.youtube.com/c/CodeVault/playlists
## [C linux subprocess fork exec pipe signals](https://www.youtube.com/playlist?list=PLfqABt5AS4FkW5mOn2Tn9ZZLLDwA3kZUY) by same guy - CodeVault

### C File and Terminal Input/Output operations in C - https://www.youtube.com/watch?v=_lQ-3S4fJ0U&list=PLPyaR5G9aNDvs6TtdpLcVO43_jvxp4emI by same guy - CodeVault

#### [You can find the code for the above videos at his website](https://code-vault.net/course/07hdekibo8:1603733520293/lesson/ix0kajqemd:1603732432335)

## You can even refer to this too only if very very necessary otherwise no need - https://www.youtube.com/playlist?list=PLm8dSOaqLPHI65eHiBKtNrbgV47hGbOaM - CSC240

## [Socket programming in C](https://www.binarytides.com/socket-programming-c-linux-tutorial/)

## # Socket Programming - Think and Learn https://www.youtube.com/watch?v=_lQ-3S4fJ0U&list=PLPyaR5G9aNDvs6TtdpLcVO43_jvxp4emI




# Bash
## Bash read - https://linuxize.com/post/bash-read/

## Pipe - pipe means the individual commands are run in subshells - https://unix.stackexchange.com/questions/80362/what-does-mean

## [read line by line or from process in bash](https://www.cyberciti.biz/faq/unix-howto-read-line-by-line-from-file/#:~:text=Syntax%3A%20Read%20file%20line%20by,a%20Bash%20Unix%20%26%20Linux%20shell&text=The%20%2Dr%20option%20passed%20to,file)

## for bash scripting - you can also see ryan tutorials page - https://ryanstutorials.net/bash-scripting-tutorial/bash-if-statements.php
 
## [positional parameters + $@ , $# , $* ](https://www.oreilly.com/library/view/learning-the-bash/1565923472/ch04s02.html)







# for Python
# Pwntools Cheatsheet - https://gist.github.com/anvbis/64907e4f90974c4bdd930baeb705dedf#program-interaction

## https://docs.pwntools.com/en/stable/tubes/processes.html

### https://stackoverflow.com/questions/48066887/how-to-access-subprocess-popen-pass-fds-argument-from-subprocess

## # The easiest way to solve the math problems would probably be python’s eval() method
https://www.geeksforgeeks.org/eval-in-python/amp/

## how to pass fifo to another process in python - check 103
```
You need to do it in 2 steps:
1. Create the FIFO
2. Open the fifo with open
3. Give the fd created with open to stdin 
```




## There is a difference btw parent process to be shellscript and bash -
### If it is bash - then it means ./script.sh - no arguments to be specified here
### If it is a shellscript - then it means - it wants to run with ```bash script.sh```


## If you type bash , bash , bash in terminal many times, it will be parent process of ./script.sh if you run it like this 

## bash -c [command or exec /chall] - you can run your command like this also, now bash will be parent process of this exec command

## If you want to see signals list - do ```kill -l``` inside ssh of pwncollege, or do ``` /bin/kill -L```

## specific word count in a file - ```grep -ic "Arun" file_name```

## read gives some garbage at the end which a vulnerability which we talk about in later sections

## htons - host to network short -> it takes a 16 number and will convert it from little endian (memory) to big endian on the network 
## arpa - advanced research project agency -> it is now called darpa with d as defense

## char buf[1024] -> 1024 char buffer on stack

## Exception in thread 2, this occurs when pwntools tried to read even after getting the flag 


# 5 = echo "wbydfutp" > /tmp/oemymi; ./embryoio_level5 < /tmp/oemymi

# 6 = ./embryoio_level6 > /tmp/uqyjrl; cat /tmp/uqyjrl

# 7 = env -i ./embryoio_level7

## always check man pages instead of gfg pages , because you will learn how to read man pages , from gfg - you will only learn to apply examples there ,, not new one

# 26 = 

```py
from pwn import *
p = process(['/challenge/embryoio_level26'],stdin='/tmp/rpqdom',env={"akxfid":"ofsrrwsfpo"})


p.interactive()
p.wait()
```

## same method explained neatly here - https://youtu.be/PmiycF97PWo?list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-&t=281 - by michael

# 29 = 	

```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>


void pwncollege()
{
	int fid = fork();
	if(fid == 0)
	{
		execl("/challenge/embryoio_level29","/challenge/embryoio_level29",NULL);
		printf("This will not print on the terminal");
	}
	else
	{
		wait(NULL);
	}
}

void main(int argc , char *argv[])
{
	pwncollege();
}
```

# 32 = 

```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>


void pwncollege()
{
	int fid = fork();
	if(fid == 0)
	{
		char *env[] = {
			"ruiasi=vflbtigwuj",
			NULL
		};
		execle("/challenge/embryoio_level32","/challenge/embryoio_level32",NULL,env);
		printf("This will not print on the terminal");
	}
	else
	{
		wait(NULL);
		puts("Successfully waited");
	}

}

void main(int argc , char *argv[])
{
	pwncollege();
}
```

# 33 = 

```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>


int pwncollege()
{
	int fid = fork();
	if(fid == 0)
	{
		// char *env[] = {
		// 	"ruiasi=vflbtigwuj",
		// 	NULL
		// };
		int file = open("/tmp/saulvf",O_RDONLY,0777);
		if(file == -1)
		{
			return 1;
		}
		printf("File opened successfully with File descriptor %d \n",file);
		dup2(file,STDIN_FILENO);
		close(file);

		int err = execl("/challenge/embryoio_level33","/challenge/embryoio_level33",NULL);
		if(err == -1)
		{
			printf("Couldnt find program to execute or other error occured\n");
			return 2;
		}
	}
	else
	{
		wait(NULL);
		puts("Successfully waited");
	}

}

void main(int argc , char *argv[])
{
	pwncollege();
}
```

# 36 = /challenge/embryoio_level36 | cat

# 40 = cat | /challenge/embryoio_level40

# 47 = rev | /challenge/embryoio_level47

after doing this , press Ctrl + D instead of Ctrl + C bcz ```This shortcut will effectively log you out of any terminal and close it, It sends an EOF (End-of-file) marker to bash.```

# 54 = 

```py
from pwn import *


p2 = process(['cat'],stdin = PIPE)
p1 = process(['/challenge/embryoio_level54'],stdout = p2.stdin)

p2.interactive()
```

Other way will not work , because cat is a fast program and cat wont wait for the other thing without PIPE

# 58 = 

```py
from pwn import *

p1 = process(['/challenge/embryoio_level58'],stdin = PIPE)
p2 = process(['cat'],stdout = p1.stdin)

p2.sendline(b'ptswqsjw')
print(p1.clean(2).decode())

```

# 60 =

```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>


int pwncollege()
{
	int fd[2];
	if (pipe(fd) == -1)
	{
		return 2;
	}

	int pid1 = fork();
	if (pid1 < 0)
	{
		return 1;
	}
	if (pid1 == 0)
	{
		// child process 1 - this will write to cat
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		char *argv[] = {
			"/challenge/embryoio_level60",NULL
		};
		close(fd[1]);
		execv("/challenge/embryoio_level60",argv);
	}

	int pid2 = fork();
	if (pid2 < 0)
	{
		return 3;
	}
	if(pid2 == 0)
	{
		// child process 2 - cat - this will read its input from child process 1
		close(fd[1]);
		dup2(fd[0],STDIN_FILENO);
		char *argv[] = {
			"cat",NULL
		};
		close(fd[0]);
		execvp("cat",argv);
	}

	close(fd[0]);
	close(fd[1]);

	waitpid(pid1,NULL,0);
	waitpid(pid2,NULL,0);
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```

# 66 - parent process to be find - so we use the command from program misuse - 

```bash
find /flag -exec cat flag \;
```

# 68 -
```bash
argum=""
for var in {1..209}
do 
	argum+="a "
done

argum+="emlwzsewyx"


/challenge/embryoio_level68 $argum
```

# 69 = since we want parent process to be bash , so run this compiled c code in a bash script

```bash
./lol
```

```c
#include<stdio.h>
#include<unistd.h>
int main()
{

	execl("/challenge/embryoio_level69",NULL);
	return 0;
}
```

# 72 = current working directory - the user is currently working in this directory
## PATH - Telling your Linux shell where to look for executable files is easy

simply by using | in script - its not redirection 
that's a pipe
when they talk about redirecting stdin
they refer to
program < stdin 

```bash
cd /tmp
mkdir ixdnfu
cd ixdnfu
echo "hello" > bfkrwo
/challenge/embryoio_level72 < bfkrwo
```

# 73 =
```c 
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int pwncollege()
{
	char s[100];

	chdir("/tmp/uiafwp");
	printf("%s\n",getcwd(s,100));
	execl("/challenge/embryoio_level73","/challenge/embryoio_level73",NULL);
	return 0;
}
void main(int argc , char * argv[])
{
	pwncollege();
}
```
run this compiled c file with bash 

```bash
pwd - /home/hacker
./lol - since its exec - child process in this directory - /tmp/uiafwp , parent process - still bash
pwd - /home/hacker
```


## Another 2nd solution - 

```bash
mkdir /tmp/uiafwp
cd /tmp/uiafwp

/challenge/$HOSTNAME & # background the process
 
cd / # and now go back to root directory
sleep 10
```
## 3rd solution

```bash
mkdir /tmp/uiafwp
bash -c 'cd /tmp/uiafwp;exec /challenge/$HOSTNAME'
```

# 74 - 

This doesnt work , because if you put shell=True , then it's parent process will be that shell
instead of python

```py
from pwn import *

string = "a " * 232 + "iaswfulvzn"
p1 = process(f'/challenge/embryoio_level74 {string}',shell = True)

print(p1.clean(2).decode())
```
while this does work because since shell is not true , its parent process is still python

```py
from pwn import *

lest = ['/challenge/embryoio_level74']
for i in range(232):
	lest.append("a")
lest.append("iaswfulvzn")

p1 = process(lest)

print(p1.clean(2).decode())
```


# 75 - 

```py
from pwn import *


p1 = process(['./lol'])
print(p1.clean(2).decode())
```
## c code to put argv = 0

```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int pwncollege()
{
	execl("/challenge/embryoio_level75",NULL);
}
void main(int argc , char * argv[])
{
	pwncollege();
}
```

# 79 - check level 73 , just instead of running from bash , run that process in python file

# 80 - learnt array of pointers from this
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int pwncollege()
{
	int pid1 = fork();
	if(pid1 < 0)
	{
		return 1;
	}
	if(pid1 == 0)
	{
		char *arr[161];
		arr[0] = "/challenge/embryoio_level80";
		for(int i=1;i<=158;i++)
		{
			arr[i] = "a";
		}
		arr[159] = "azohxsqvsb"; 
		arr[160] = NULL;
		printf("%s\n",arr[159]);
		execvp("/challenge/embryoio_level80",arr);
	}
	waitpid(pid1,NULL,0);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```

# 83 - here arguments count should be started from arr[3] - that is /challenge/level83 because 
## now this command is getting executed not env , env is running this binary
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>

int pwncollege()
{
	int pid1 = fork();
	if(pid1 < 0)
	{
		return 1;
	}
	if(pid1 == 0)
	{
		char *arr[61];
		arr[0] = "env";
		arr[1] = "-i";
		arr[2] = "104=dvuoltfgkj";
		arr[3] = "/challenge/embryoio_level83";
		for(int i=4;i<=61;i++)
		{
			arr[i] = "a";
		}
		arr[62] = "sdyawehyzj"; 
		arr[63] = NULL;
		printf("%s\n",arr[62]);
		execvp("env",arr);
	}
	waitpid(pid1,NULL,0);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```

# 86 - 
wrong solution only in bash
```bash
while IFS= read -r line
do
        echo $line
        echo $line | grep "CHALLENGE"
        if [ $? -eq 0 ]
        then
                count=$(echo $line | awk '{print $NF}')
                echo "$count" >&0
        fi
done < <(/challenge/$HOSTNAME)

#echo $count

#while IFS= read -r line
#do 
#       echo $line
#done < <(/challenge/$HOSTNAME)
```

## Correct Solution - run bash script with bash command in python , so parent process will be bash only and we can even interact with it also 

```python
from pwn import *


lest = ['bash','b_script.sh']

p1 = process(lest)
p1.recvuntil(b'solution for:')
val = eval(p1.recvline().strip())
p1.sendline(str(val))

print(p1.clean(2).decode())

p1.interactive()
```

```bash
/challenge/embryoio_level86
```


# 87 - 
```bash
/challenge/embryoio_level87
```

```py
from pwn import *


lest = ['bash','b_script.sh']

p1 = process(lest)

for i in range(5):
	p1.recvuntil(b'solution for:')
	val = eval(p1.recvline().strip())
	p1.sendline(str(val))

print(p1.clean(2).decode())
p1.interactive()
```

# 94 -

```bash
exec 331< /home/hacker/hello
/challenge/$HOSTNAME <&331
```

## 2nd solution
```bash
/challenge/$HOSTNAME
```
run this bash script with ```bash b_script.sh 331>&0 331</home/hacker/hello```

# 97 -
##  1st solution with py 
```py
from pwn import *


lest = ["bash","b_script.sh"]
p1 = process(lest)

pid1 = p1.recvuntil(b")").decode().strip(')').split(" ")[-1]
p1.recvuntil(b"order: ")
sig = eval(p1.recvline().strip())
print(pid1)
print(sig)

for i in sig:
	lest1 = ["kill","-s",f"{i}",f"{pid1}"]
	sig_p = process(lest1)
	sig_p.wait()
	sig_p.close()


p1.interactive()
```

## 2nd solution - can also be done in bash directly
```$! contains the pid of the last executed process. If you start the target process in the background, you can collect the pid and use command kill to send whatever signals you want to that process.```



# 103 - 

```py
from pwn import *


lest = ['./lol']
p1 = process(lest)
p1.interactive()
```
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>


int pwncollege()
{
    int fd1 = open("sum",O_RDONLY);
    dup2(fd1,0);
    execl("/challenge/embryoio_level103","/challenge/embryoio_level103",NULL);
    return 0;
}

void main(int argc , char * argv[])
{
    pwncollege();
}
```

## 2nd solution
```bash
# echo "zqvvylep" > /home/hacker/sum - open this in another terminal to fifo
exec 3< /home/hacker/sum
exec /challenge/$HOSTNAME <&3
```

```py
from pwn import *


lest = ["bash","b_script.sh"]
p1 = process(lest)
p1.interactive()
```

## 3rd solution 
```py
from pwn import *

p2 = process(["echo zqvvylep > sum"],shell = True)
fd = open("sum",'r')

lest = ["/challenge/embryoio_level103"]
p1 = process(lest,stdin = fd)

p1.interactive()
```


104 - 
# 1st solution - good one with python 
```py
from pwn import *

p2 = process(["cat sum"],shell = True)
fd = open("sum",'w')

lest = ["/challenge/embryoio_level104"]
p1 = process(lest,stdout = fd)

print(p2.clean(2).decode())
```

## 2nd solution with C
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>


int pwncollege()
{
	int fd1 = open("sum",O_WRONLY);
	dup2(fd1,1);
	execl("/challenge/embryoio_level104","/challenge/embryoio_level104",NULL);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```
```py
from pwn import *


lest = ['./lol']
p1 = process(lest)
p1.interactive()
```



# 105 -

# 1st solution with only python

```py
from pwn import *

p2 = process(["echo coufjoxw > sum"],shell = True)
fd2 = open("sum",'r')

p3 = process(["cat mri"],shell = True)
fd3 = open("mri",'w')

lest = ["/challenge/embryoio_level105"]
p1 = process(lest,stdin = fd2,stdout = fd3)

print(p3.clean(2).decode())
```

## 2nd solution with bash 
``` check 103 , bash solution , it will be 2 lines of code ```

## 2.2nd solution with bash
```
i don't have mine saved for io
but i remember i did 
import subprocess
subprocess.run("/challenge/embryoio_level105")

and outside did 
python temp.py < fifo1 > fifo2
cat < fifo2
cat > fifo1

in different terminals 

< fifo1 > fifo2
what does this mean
it means take input from fifo1 and give stdout to fifo2 
```



## 3rd solution with C 
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>


int pwncollege()
{
	int fd1 = open("sum",O_RDWR);
	int fd2 = open("mri",O_RDWR);
	dup2(fd2,0);
	dup2(fd1,1);
	execl("/challenge/embryoio_level105","/challenge/embryoio_level105",NULL);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```

```py
from pwn import *


lest = ['./lol']
p1 = process(lest)
p1.interactive()
```
open in both terminals simultaneously , mri and sum


# 106 - 

```py
from pwn import *

p2 = process(["cat > sum"],shell = True)
fd2 = open("sum",'r')

p3 = process(["cat mri"],shell = True)
fd3 = open("mri",'w')

lest = ["/challenge/embryoio_level106"]
p1 = process(lest,stdin = fd2,stdout = fd3)


p3.recvuntil(b'solution for:')
val = eval(p3.recvline().strip())
p2.sendline(str(val))

print(p3.clean(2).decode())
```

# 107 -

```py
from pwn import *
lest = ["bash","b_script.sh"]
p1 = process(lest)
print(p1.clean(2).decode())
```

```bash
echo "svlennyz" > /home/hacker/hello
exec 87< /home/hacker/hello
exec /challenge/embryoio_level107 <&87
```

# 110 - 

```py
from pwn import *


lest = ["/challenge/embryoio_level110"]
p1 = process(lest)

pid1 = p1.recvuntil(b") the following signals").decode().strip(') the following signals').split(" ")[-1]
p1.recvuntil(b"order: ")
sig = eval(p1.recvline().strip())
print(pid1)
print(sig)

for i in sig:
	lest1 = ["kill","-s",f"{i}",f"{pid1}"]
	sig_p = process(lest1)
	sig_p.wait()
	sig_p.close()


p1.interactive()
```

# 116 - compile this c code and run its binary , and in another terminal run ```cat > sum```
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>


int pwncollege()
{
	int pid1 = fork();
	if(pid1 < 0)
	{
		return 1;
	}
	if(pid1 == 0)
	{
		int fd1 = open("sum",O_RDONLY);
		dup2(fd1 , 0);
		execl("/challenge/embryoio_level116","/challenge/embryoio_level116",NULL);
	}
	waitpid(pid1, NULL , 0);
	// execl("/challenge/embryoio_level105","/challenge/embryoio_level105",NULL);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```




# 118 - open ```cat > sum and cat < mri in another terminal and run the binary now```
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>


int pwncollege()
{
	int pid1 = fork();
	if(pid1 < 0)
	{
		return 1;
	}
	if(pid1 == 0)
	{
		int fd1 = open("mri",O_WRONLY);
		dup2(fd1 , 1);
		int fd2 = open("sum",O_RDONLY);
		dup2(fd2, 0);
		execl("/challenge/embryoio_level118","/challenge/embryoio_level118",NULL);
	}
	waitpid(pid1, NULL , 0);
	// execl("/challenge/embryoio_level105","/challenge/embryoio_level105",NULL);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```

# 120 - 
```bash
echo "czteczha" > /home/hacker/hello
exec 288< /home/hacker/hello
exec /challenge/embryoio_level120 <&288
```
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>


int pwncollege()
{
	int pid1 = fork();
	if(pid1 < 0)
	{
		return 1;
	}
	if(pid1 == 0)
	{
		execlp("bash","bash","b_script.sh",NULL);
	}
	waitpid(pid1, NULL , 0);
	// execl("/challenge/embryoio_level105","/challenge/embryoio_level105",NULL);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```

## 2nd solution -> instead of going to bash , you can create file descriptor 319 in C itself with dup2 and robert has done that in office hrs, check this video out -> https://youtu.be/eQbKkN1SqOE?list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-&t=1930


# 123 - 
```c
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>
#include<signal.h>


int pwncollege()
{
	int pid1 = fork();
	if(pid1 < 0)
	{
		return 1;
	}
	if(pid1 == 0)
	{
		execl("/challenge/embryoio_level123","/challenge/embryoio_level123",NULL);
	}
	waitpid(pid1, NULL , 0);
	// execl("/challenge/embryoio_level105","/challenge/embryoio_level105",NULL);
	return 0;
}

void main(int argc , char * argv[])
{
	pwncollege();
}
```
```py
from pwn import *


lest = ["./lol"]
p1 = process(lest)


pid1 = p1.recvuntil(b") the following signals").decode().strip(') the following signals').split(" ")[-1]
p1.recvuntil(b"order: ")
sig = eval(p1.recvline().strip())
print(pid1)
print(sig)

for i in sig:
	lest1 = ["kill","-s",f"{i}",f"{pid1}"]
	sig_p = process(lest1)
	sig_p.wait()
	sig_p.close()


p1.interactive()
```

# 128 - 
```py
from pwn import *
from time import sleep


lest = ["bash","b_script.sh"]
p1 = process(lest)


pid1 = p1.recvuntil(b") the following signals").decode().strip(') the following signals').split(" ")[-1]
p1.recvuntil(b"order: ")
sig = eval(p1.recvline().strip())
print(pid1)
print(sig)

for i in sig:
	lest1 = ["kill","-s",f"{i}",f"{pid1}"]
	sig_p = process(lest1)
	sig_p.wait()
	p1.recvuntil("Correct!")
	sig_p.close()

print(p1.clean(2).decode())

p1.interactive()
```

# 140 - we can write to tcp server through some /dev/tcp file and for reading and writing to that file, we use a file descriptor, now run python script first to make sure the server is running and up and after that run the bash script so that it can connect to that particular port

```bash
exec 3<> /dev/tcp/$HOSTNAME/1560
while IFS= read -u 3 -r line
do
	echo "$line"
	if [[ $line == *"CHALLENGE"* ]]
	then
		var1=${line#*':'}
		echo $var1
		var2=$(($var1))
		echo $var2
		echo $var2 >&3
	fi
done
```
```py
from pwn import *
from time import sleep

lest2 = ["/challenge/embryoio_level140"]
p2 = process(lest2)
sleep(3)
p2.wait()
```

## Hints - 
``` 
You cant use nc , as that will make the parent process of remote server to nc.openbsd but we need shellscript to be its parent process

WrathOfTheLlama — 08/30/2022
U should be able to find resources online on using exec to connect to a tcp port in shellscript
Once u do, read and echo until all of life is read and echo

gordahn — 08/26/2022
to send an answer you just do echo $answer >&6 where 6 is the process id that you're using to interact with the socket
hopefully you can get the rest from there, dm me if you need more advice (:

Zeeshan1234 — 09/24/2022
check ls -l /proc/self/fd/ to see where 3 points to

Zeeshan1234 — 09/24/2022
you can get output from a fd, like cat /proc/self/fd/100 | grep somethign, store that in a variable and echo that variable back into the fd
i'm simplifying it, but there's an office hours video on level 93 or something, where connor makes a bash script that handles file descriptors

dwarfmoss — 08/28/2022
Great, then how are supposed to stop reading at the right time?
zammo — 08/28/2022
if you allocate enough size for the recieving buffer, i believe there is an EOF thatll tell it to stop
i used recv and printf for viewing the content of the server messages

ahmed — 08/13/2022
any tips on how to solve level 140, i managed to connect to the 'remote' using exec and file descripter <exec 3<>/dev/tcp/localhost/ip and managed to read from challenge using the read command with while loop 'while read -u 3', but cannot exit the while loop to send back, if i try reading using for loop the connection will close from the server after sending the math challenge,.  it there a way of reading and writing to the server using only bash bultins (using command such as cats is not working)
```



# 141 - 
```py
from pwn import *
from time import sleep

lest = ["/challenge/embryoio_level141"] # this challenge will behave like a server , if we run this script
# which means the server is up and now we can communicate with another process as client
p1 = process(lest)
sleep(3)# it's important to sleep because for challenge to start up , because if not waited then it will 
# execute p2 and we will not get any server to connect since server is not up 

p2 = remote('127.0.0.1',1229)
sleep(1)

for i in range(5):
        p2.recvuntil(b'solution for:')
        val = eval(p2.recvline().strip())
        p2.sendline(str(val))


print(p2.clean(2).decode())
```

# 142 - 

```
hey guys, I need some help in 142, I can send the solution for the first equation, but when I send it for the second one, the program is going into a loop without printing anything? any reasons why?

yea i actually solved this issue by sending only the size of the solution and \n to the server.  I sent the solution for 5 equations but after sending the solution to the fifth equation the program is going in a loop again !

Null out the buffer

How do I null out the buffer?

memset

I had to null out the buffer every time i used read()

that or just a for loop that sets everything in the array to NULL 


```

## see man page of recv in sockets -> if 4th arg is 0, i.e. if flags is set to 0 which means it is equivalent to read , check its man page

## can be a helpful resource - https://stackoverflow.com/questions/33860646/how-to-handle-3-way-send-and-recv-in-bsd-socket-using-c



Good challenges to try - 

69, 86, 94, 103, 140, 141, 142


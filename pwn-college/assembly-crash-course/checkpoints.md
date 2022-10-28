# Videos left to watch

## [CSE 466 - Yan's Extended Q&A 2022.08.30](https://www.youtube.com/watch?v=Y1M7joPUK5k&list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-) - watch this 1st of all for sure after seeing youtube lectures, best intro before starting out challenges - watched

## [Robert's Office Hours - gdb crash course 2022.08.31](https://www.youtube.com/watch?v=fSccQBaHMUQ&list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-) - watched

## [CSE 466: Michael's Office Hours 2022.09.02](https://www.youtube.com/watch?v=hKQjzJBpEo8&list=PL-ymxv0nOtqqQzEncNuE6jetlJAiBUda-&index=7)


# Blogs/websites left to read




# Cool videos 
## x86 assembly crash course by HackUCF -  https://www.youtube.com/watch?v=75gBFiFtAb8 - watch this video to understand how stack works (rsp, rbp) and also explore HackUCF channel and it's github repo of ctf-workshop


# Cool blogs

## cool resource for assembly - https://www.cs.virginia.edu/~evans/cs216/guides/x86.html#memory
## and also please go to wikipedia page if you find any difficulty - https://en.wikipedia.org/wiki/X86_assembly_language

## [site for assembly to machine code i.e. binary and vice versa](https://defuse.ca/online-x86-assembler.htm)

## [find all hard to remember instructions of x86-64 at felixcloutier site](https://www.felixcloutier.com/x86/)

## ## [Opcode listing by byte value, go to coder64 in quick navigation to see amd64 syntax](http://ref.x86asm.net/)




# Further Reading from pwn-college


## [An awesome intro series that covers some of the fundamentals from LiveOverflow.](https://www.youtube.com/watch?v=iyAyN3GFM7A&list=PLhixgUqwRTjxglIswKp9mpkfPNfHkzyeN&index=1) -> watch this series completely after completing yellow belt on pwn college

## [A Ike: The Systems Hacking Handbook, an excellent guide to Computer Organization.](https://ike.mahaloz.re/1_introduction/introduction.html) -> read this before starting assembly on pwn college

## [A comprehensive assembly tutorial for several architectures (amd64 is the relevant one here).](https://github.com/mytechnotalent/Reverse-Engineering) - follow this if you want to learn assembly in arm or x86 32 bit 






## gdb wont work in the embryoasm modules FYI, will work in shellcoding challenges though , for embryoasm challenges dont use gdb, use int3. For shellcoding challenges, gdb can be more useful, but when you use gdb instead of running directly the suid binary, you will lose the elevated privileges, it will run as hacker instead of root 

# GDB crash course - till 30 mins - from robert video

## list -> will show us the code

## [r/run]    for run
## [info reg/ info registers]   get values of all the registers

## robwaz — 10/03/2022 (In order to run gdb with pwntools, you must be inside a tmux session.)

## break main -> for setting a breakpoint at main

## r robert

## [p/print] $rdi

## everything in gdb is just bytes, we have to tell gdb how we want to format those bytes when we are looking at them
## p/a $rsi -> we want to format this as an address, this is a pointer, looks like a memory address

## x -> for examine , x/a $rsi -> which means examine the address at rsi
## x/2a , x/3a -> examine 2 address, 3 address 

## x/gx $rsp -> , [by yan -> examine the data that our rsp points to]

## x/s $val -> examine the string at this address val
## x/gx val -> examine the giant hex 
## x/d val -> gives the number
## x/10gx val -> give me 10 giant hex
## so you should have correct idea, of how you are going to interpret those bytes, gdb wont be able to provide that context 
## x/10s -> next 10 string
## x/i -> examine the instruction at address val 

## s -> for step 
## si -> step instruction
## ni -> for next instruction
## but we dont know which instruction we are at
## x/10i $rip -> for next 10 instruction at rip -> but it will show us the ugly AT&T syntax, so we can tell gdb that intel syntax we want and that will be with

## set disassembly-flavor intel, now run the same command x/10i $rip , you will see intel syntax 


## disass main -> another way to disassemble like this
## usually we want to look at the disassembly of a particular function instead of just with instruction pointers
## disass my_hello_function

## ni -> for next instruction
## disass main -> we can see , we are at main+8 , now we are at main+12
## ni -> before call function and if we do 1 more time ni, then it will call that function and return us after executing that function at the next instruction

## but there should be some good way to move instead of doing ni ni ni multiple times 


## r robert, breakpoint 1 at main
## info break, we can see we are at main+8

## b my_hello_function , or we can also provide the offset we want to put the breakpoint at
## b ```*main+63```
## info break 

## [c/continue] -> until another breakpoint is hit

## disass main
## now if we want to look at what's going on inside hello function, we will use si instead of ni 
## si -> step instruction, now we are in hello function
## dissass my_hello_function -> we can see we are at the beginning of hello function , now we can type ni/si whatever we want

## bt -> backtrace -> this will show the call stack, so we can see what function is calling what function
## we can set break point on the other side, and we can continue upto it , but there is an easier way

## finish -> run all of the code or the assembly instructions until we return, and break on the other side
## [q/quit] -> will quit the gdb

## info break 
## del break 1 -> it will delete the breakpoint 1, now if you check, it will not be there, 1 is what is listed in num section
## info break





# part -2 
# there are some pitfalls/traps in gdb you may run into them

## 1st thing is permissions -> For shellcoding challenges, gdb can be more useful, but when you use gdb instead of running directly the suid binary, you will lose the elevated privileges, it will run as hacker instead of root, it will not be able to print out the flag

## r < ~ /my_asm_bytes -> in gdb

## we can force gdb to break in the starting of the shellcode -> by using int3 in the 1st line

## gdb is not gonna remember that you want intel syntax, but you can tell it to remember that
## ```vim ~/.gdbinit```  and put ```set disassembly-flavor intel``` this in that file

## there are several plugins in gdb, but we are going to push a particular one called - gef
## but sometimes gef will misbehave, not work properly, so knowing these how to work in primitive is a very good skill

## gef - presents a lot of information that you will be printing out anyways
## to add gef to your gdb 
## ```vim ~/.gdbinit``` and put ```source /opt/gef/gef.py``` into file for gef to work

## when we run gdb now
## gef will be there instead of gdb
## Legend will be there - to tell what what these colors mean in all of the sections below


## x/gx $rbp - 0x1034 -> suppose we did compare and now we are at next instruction, we wanted to know what value was inside that , so we can examine the [rbp-0x1034] value like , it will automatically dereference it , you dont need to put * there

## p $rbp
## p $rbp - 0x1034 -> this will give the location, $rbp-1034, and examine will dereference it




# part -3 - from 59 mins

## gcc -g example.c -> when you compile something with gcc, you can include debug symbols, so you can go next in source code, with debug info
## n, s -> n for next, s for step in C code, instead of stepping at assembly level, now we are stepping at source code level

## gcc -s example.c -> stripped binary, you dont have those labels anymore, not able to run ```b main``` now , because main doesnt exist anymore

## using assembly in python with pwntools, gdb with pwntools and their interaction in the rest of the video






















## if you get stuck in any challenge, or why any process is failing -> you can check /proc in practice mode , /proc - a virtual filesystem, it has information about system available as files bcz files are nice and easy to get to , ps aux , find pid , then cd /proc/{$pid} , ps -ef | grep cat, /proc/{$pid}/fd , /proc/environ 

## xchg - exchange registers values - assembly instruction

## Data is going to be stored in memory backwards ->    mov eax 0xc001ca75         																				mov rcx 0x10000  mov[rcx] eax 

## Memory that holds code isnt typically able to be written to but if it can , it can

## eb 04 -> eb is jmp and 04 means 4 bytes and this 04 is signed value, if it is ff then it will jump backwards by 1,fe -> backwards by 2 -> so what jmp basically does is, it adds that value to the instruction pointer , eb fe is an infinite loop in x86 -> you can write directly in x86

## Assembly is called assembly because it is assembled by assembler into binary code

## you can get your environment variable in python from pwntools -> use fstrings and f"/challenge/{pwn.os.getenv('HOSTNAME')}"

## stack is 100 times faster than heap , for more info on this, read the Hacking handbook by Ike, stack is a section of memory that holds temporary data or (that can store values for later)

## hex(1000) = 4096, memory is given to a program one page at a time, it starts at 1000 , basically program executable is given space hex 1000 bytes at a time

## syscall is a 64 bit edition , for 32 bit syscall instructions will change, syscall interface for 32 bit is different , you can use 32 bit one syscall like this [int 0x80], chromium maintained a good table for those 

## even on 64 bit x86, you can only push 32-bit immediates... in stack, and stack is basically memory region only, so we can put 32 bit immediate only to memory also , for putting 64 bit value in memory, put that 64 bit into register first, then mov that register value into memory

## jmp adds to the instruction pointer[ip], that's what jmp does, jmp 0 means add 0 bytes to the ip, instruction pointer is pointing to the next instruction, it's a signed jump which means it can even go backwards too, ff means -1 , so eb ff , which means it will add -1 to the ip, which means now it will execute ff, which may or may not be an instruction, you are gonna have a bad time, if you jump -2, eb fe, which means ip will go starting of eb , which means it's an infinite loop so eb fe is an infinite loop in x86

## in jmp , if it's written jnz, jump not equal to zero, what does it check ?? , it checks last thing we checked for equality , first you check things and then you take action on these checkings 
## conditional jumps check conditions stored in the rflags register 

## function calls you got variable names all over the place, how can I do variable names ?? There's probably some macro support in the assembler to do variable names , say here rax is known as bob or whatever 

## how to write string in another way -> lea will load the address into rdi, so rip + binsh -> instruction pointer plus the offset to binsh , so the address of binsh as it is relative from rip gets loaded into rdi => in 1st video of shellcoding
```x86asm
lea rdi, [rip+binsh]
mov rsi, 0 
...
binsh:
	.string "/bin/sh"
```  







# Template

```bash
gcc -nostdlib -o lol.elf s_script.s
objcopy --dump-section .text=lol.bin lol.elf
cat lol.bin | /challenge/$HOSTNAME
```
## operations

### gcc -nostdlib -o lol.elf s_script.s -> -nostdlib => we dont need libraries, we directly call(using system calls) into kernel
### objdump -M intel -d lol.elf 
### objcopy --dump-section .text=lol.bin lol.elf
### [hd/hexdump] lol.bin 
### strace ./lol.elf 
### cat lol.bin | /challenge/embryoasm_level1 

# 1 - 

```asm
.global _start

_start:
.intel_syntax noprefix
mov rdi, 0x1337
```

# 2 - 

```asm
.global _start

_start:
.intel_syntax noprefix
add rdi, 0x331337
```

# 3 - 

```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, rdi
imul rax, rsi
add rax, rdx
```

# 4 - 

```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, rdi
div rsi
```

# 5 - 

```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, rdi
div rsi
xchg rax,rdx
```

# 6 -

```asm
.global _start

_start:
.intel_syntax noprefix
mov al, dil
mov bx, si
```
# 7 - 

```asm
.global _start

_start:
.intel_syntax noprefix
int3
shl rdi,24
int3
shr rdi,56
int3
mov rax, rdi
```

# 8 - we can also do this using constants too xd

```asm
.global _start

_start:
.intel_syntax noprefix
xor rax, rax
not rax
and rax, rdi
and rax, rsi
```

# 9 - 

## 1st solution - we have constants so (x & 1 ) xor 1

```asm
.global _start

_start:
.intel_syntax noprefix
and rax, 1
xor rax, 1
```

## 2nd solution - just set rax = rdi xor rdi (0) , it will give flag on some cases

# 10 - 

```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, [0x404000]
add QWORD PTR [0x404000],0x1337
```

# 11 - check the values at the start and at the end , values in memory are stored in little endian , so   [0x404000] = 0x105662, which means it's stored in opposite direction, 62 first, then 56 , then 10 , then 00

```asm
.global _start

_start:
.intel_syntax noprefix
int3
mov al, [0x404000]
mov bx, [0x404000]
mov ecx, [0x404000]
mov rdx, [0x404000]
int3
```

# 12 - 

```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, 0xdeadbeef00001337
mov [rdi], rax
mov rax,0xc0ffee0000
mov [rsi], rax
```

# 13 - 

```asm 
.global _start

_start:
.intel_syntax noprefix
mov rax, [rdi]
mov rbx, [rdi + 8]
add rax, rbx
mov [rsi], rax
```

# 14 - 

## 1st solution - directly changing stack value in memory with the help of stack pointer (rsp), since stack is also a memory , we can do that as stack is memory only

```asm
.global _start

_start:
.intel_syntax noprefix
sub [rsp], rdi
```
## 2nd solution - pop it, change it , mov it again there

```asm
.global _start

_start:
.intel_syntax noprefix
pop rax
sub rax, rdi
push rax
```

## 3rd solution - take the value from stack without popping by mov and with the help of stack pointer, then again overwrite the top value, by moving again at the same position

```asm
.global _start

_start:
.intel_syntax noprefix
mov rax,[rsp]
sub rax, rdi
mov [rsp], rax
```

# 15 - 

```asm
.global _start

_start:
.intel_syntax noprefix
push rdi
push rsi
pop rdi
pop rsi
```

# 16 - when doing div , dont put any value in rdx, this will give different output, since remainder will get stored in rdx only

## 1st method by div
```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, [rsp]
add rax, [rsp + 8]
add rax, [rsp + 16]
add rax, [rsp + 24]
mov rcx, 4
div rcx
push rax
```
## wrong method - will give wrong answer because of rdx
```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, [rsp]
add rax, [rsp + 8]
add rax, [rsp + 16]
add rax, [rsp + 24]
mov rdx, 4
div rdx
push rax
```
## 2nd method by idiv, check syntax here - https://stackoverflow.com/questions/8396261/operand-type-mismatch-for-idiv

```asm
.global _start

_start:
.intel_syntax noprefix
mov rax, [rsp]
add rax, [rsp + 8]
add rax, [rsp + 16]
add rax, [rsp + 24]
mov rdx, rax
shr rdx, 32
mov ecx, 4
idiv ecx
mov ebx, eax
push rbx
```
# 17 - here current position means from instruction pointer only
```
1. Make the first instruction in your code a jmp
2. Make that jmp a relative jump to 0x51 bytes from its current position
0x51 bytes，is not include the current cmd:jmp + address


Code
-----------------------------------------
0x400039:    jmp       0x40008c
0x40003b：........................................
............
0x40008c:    mov       rdi, qword ptr [rsp]
----------------------------------------


pay attention:
0x8c-0x39=0x53,0x8c-0x3b=0x51 


is there an easy way to repeat the same command a certain number of times
zanderman24 — 09/16/2022
.rept numberofreps
instruction
.endr


yesdolphin — 09/26/2022
for number 17, how do we actually do it?
I am having trouble understanding what is wanted
jmp 0x51 is a relative jump right?
how do I do an absolute jump instead?
robwaz — 09/26/2022
I would encourage you to use a label to do a relative jump. --->>>> very important line
yesdolphin — 09/26/2022
but for the label, won't the command jump past it too?
robwaz — 09/26/2022
If your asm has something like
jmp my_label
nop
nop
...
nop
my_label:
push rsp


that is a relative jump to the location identified by the label my_label.
```

## this code works , try to use relative jumps with labels only
```x86asm
.global _start

_start:
	.intel_syntax noprefix
	jmp my_label
	.rept 0x51
	nop
	.endr
	my_label:
		mov rdi, [rsp]
		mov rax, 0x403000
		jmp rax
```

## while this code doesnt work , it jumps in backward direction , correct version of this in next part
```x86asm
.global _start

_start:
	.intel_syntax noprefix
	jmp 0x51
	.rept 0x51
	nop
	.endr
	mov rdi, [rsp]
	mov rax, 0x403000
	jmp rax
```

what I observed till now
```
2nd case
---------------- CODE ----------------
0x4000ff:	jmp   	0x3ff150
0x400104:	nop 
0x400105:	nop  

here it's jumping backwards and not able to figure out why - ( 0x3ff150 - 0x400104 ) -> negative in this case

# another point - here jmp instruction size is 0x104 - 0xff = 5 , and here it doesnt make any sense

volticks — Yesterday at 7:40 PM
i know whats wrong. If you wanna do a jump relative to rip, you need to do jmp $+0x51. $ is current rip, so thats gonna jump you 0x51 ahead.
whats happening to you (i think) is some weird manifestation of trying to jump to 0x51. Can you do a x/gx <addr of jmp> so i can see what the buggy code looks like? 

1st case

---------------- CODE ----------------
0x4000b1:	jmp   	0x400104
0x4000b3:	nop   	
0x4000b4:	nop   

0x400104 - 0x4000b3 = 0x51 -> this seems correct

# another point - here jmp instruction size is 0xb3 - 0xb1 = 2 which seems correct to me since jmp fe is 2 bytes only and an infinite loop as told by yan
``` 

## 2nd solution with correct working 0x51 instruction
```x86asm
.global _start

_start:
	.intel_syntax noprefix
	jmp $+0x53
	.rept 0x51
	nop
	.endr
	mov rdi, [rsp]
	mov rax, 0x403000
	jmp rax
```
```
the opcode for jmp $+0x53 is 51eb
which means 0x51 places ahead past the jmp instruction
Mritunjya — Today at 12:47 AM
how did you saw this ??
volticks — Today at 12:47 AM
gef➤  x/gx 0x401000
0x401000 <_start>:    0x90909090909051eb
those last 2 bytes
r the jmp
apparently im getting rusty

Mritunjya — Today at 12:53 AM
 jmp $+0x53 
 - so what $+0x53 does exactly
volticks — Today at 12:54 AM
add 2 to rip, THEN jump $+0x51
Mritunjya — Today at 12:55 AM
so that add 2 to rip is done here only instead of doing externally
volticks — Today at 12:56 AM
ye it does it before it jumps, thats why eb fe works
Mritunjya — Today at 12:57 AM
makes sense , still the syntax is weird 😆 😛
it should do from rip 0x51 only lol
volticks — Today at 12:57 AM
ye that would probably make sense lol
```

# 18 - use rappel to see the effects of movsx, so in movsx , if eax is +ive and then rax will also be +ive, and if eax is -ive which means rax will also be -ive meaning that it will add ff in starting, unlike in +ive eax

```
phillip0113 — 09/25/2022
Anyone got any pointers for level 18, been stuck on it for a while
WorstNameEver — 09/25/2022
for 18 make sure that everything compared is a dword


confused_programmer — 09/07/2022
Hi,
For level 18 it is mentioned that each of [x+4], [x+8] and [x+12] are signed 32 bit integers. The expected result is a 64 bit register.  Should we sign extend these 32 bit values to 64 bits and then perform the arithmetic or should we just perform the arithmetic without sign extending the values?
zammo — 09/07/2022
use dwords, you will save yourself a headache 

7StringsOvPasta — 09/07/2022
I did it without sign extending 


neon_leitz — 06/24/2022
I've been working on level 18 for several hours and am at a loss for why I can't even get passed the first check. The first check is for the else of the if statement which should be y = [x+4] * [x+8] * [x+12]. I've set it up to only pull the dword like it mentions in the prompt and use imul for signed multiplication. Here's the assembly. 
_start:
        mov     r10d, dword ptr [rdi + 4]
        mov     r11d, dword ptr [rdi + 8]
        mov     r12d, dword ptr [rdi + 12]
if1:    cmp     rdi, 0x7f454c46
        jne     elif1
        mov     eax, 0
        add     rax, r10
        add     rax, r11
        add     rax, r12
        jmp     fi1
elif1:  cmp     rdi, 0x00005A4D
        jne     else1
        mov     eax, 0
        add     rax, r10
        sub     rax, r11
        sub     rax, r12
        jmp     fi1
else1:  mov     rax, 1
        imul    r10d
        imul    r11d
        imul    r12d
fi1:    nop

Just looking for  nudge in the right direction. Feel free to DM me. Thanks. 
As far as I can tell the multiplication comes out correctly, when I run it through a hex calculator manually.
F4_U57 — 06/24/2022
have you tried stepping through your asm instructions? (cat payload-raw; cat) | /challenge/embryoasm_level18 DEBUG 
neon_leitz — 06/24/2022
Yes, that's how I've been debugging, it correctly navigates the if to reach to else statement and multiplies all three values together, although in some cases it bleeds into rdx from the imul instruction since it's multiplying three 32 bit numbers.
F4_U57 — 06/24/2022
I am pretty sure the logic flow isn't correct 
I am double checking something
neon_leitz — 06/24/2022
I was running the compares without the dword ptr and brackets before if that's what youre talking about, was in the middle of testing it when I sent screenshot
F4_U57 — 06/24/2022
well, found the issues. start here, in the challenge text [x], where x = rdi 
neon_leitz — 06/24/2022
thanks, I got it

```





Good challenges to try later on - 

6, 11, 12, 14, 17 - best question to learn about jmps and rip, 
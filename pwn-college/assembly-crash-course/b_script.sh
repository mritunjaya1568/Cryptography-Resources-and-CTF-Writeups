gcc -nostdlib -o lol.elf s_script.s
objcopy --dump-section .text=lol.bin lol.elf
hd lol.bin
cat lol.bin | /challenge/$HOSTNAME
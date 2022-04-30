#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	char c[10];
	int fd = 0;	
	int val = read(fd,&c,0x20);
	printf("%d",val);
	return 0;
}


/* EHACON{V_E_5_9_e_R}*/

/*Read Byte by Byte and check that each byte against '\n' if it is not, then store it into buffer
if it is '\n' add '\0' to buffer and then use atoi()

You can read a single byte like this

char c;
read(fd,&c,1);*/

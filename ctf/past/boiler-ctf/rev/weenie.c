#include<stdio.h>
#include<stdlib.h>
int main()
{
	uint var1,var2;
	srand(0x11c4);
	var1=rand();
	var2=rand();
	printf("%u  %u",var1,var2);
	return 0;
}
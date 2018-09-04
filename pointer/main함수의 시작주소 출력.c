#include<stdio.h>
void main()
{
	//printf("%x\n",main);
	void (*fp)(int);
	fp = main;
	printf("%x\n",fp); 
}

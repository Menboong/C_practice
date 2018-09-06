#include<stdio.h>

main()
{
	int num = 0;
	int size;
	
	size = sizeof num;
	printf("%d",size);
	
	size = sizeof (num);
	printf("%d",size);
	
	size = sizeof (int);
	printf("%d",size);
}

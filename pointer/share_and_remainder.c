#include<stdio.h>

void func(int *mod, int *rem)
{
	int num;
	scanf("%d",&num);
	*mod = num/4;
	*rem = num%4;
}

main()
{
	int mod,rem;
	func(&mod,&rem);
	printf("share:%d, reminder: %d,",mod,rem);
	
	return 0;
}

#include<stdio.h>

void rotate(int *pa,int *pb, int *pc)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}

main()
{
	int n1 =1, n2=2, n3=3;
	char pass;
	
	do
	{
		printf("%d %d %d",n1,n2,n3);
		rotate(&n1,&n2,&n3);
	}while(getchar()=='\n');
}

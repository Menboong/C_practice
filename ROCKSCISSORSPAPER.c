#include<stdio.h>
int main()
{
	int me,com;
	
	do
	{
		scanf("%d %d",&me,&com);
		printf("ERROR\n");
	}while(-1 < me < 3 && -1 < com < 3);
	if(me==2&&com==0)
	{
		printf("WIN\n");
	}
	else if(me>com || me==0 && com ==2)
	{
		printf("LOSE\n");
	}
	else if(me<com)
	{
		printf("WIN\n");
	}
	else
	{
		printf("SAME\n");
	}	
}

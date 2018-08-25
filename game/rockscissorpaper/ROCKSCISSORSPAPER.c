#include<stdio.h>
int main()
{
	int me,com;
	
	while(1)
	{
		scanf("%d %d",&me,&com);
		if(me<1 || me>3 || com<1 || com>3)
		{
			printf("ERROR\n");
		}
		else break;
	}
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

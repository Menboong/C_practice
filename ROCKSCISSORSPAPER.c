#include<stdio.h>
main()
{
	int me,com;
	
	scanf("%d %d",&me,&com);
	
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

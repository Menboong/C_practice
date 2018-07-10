#include<stdio.h>
main()
{
	int me,com;
	
	scanf("%d %d",&me,&com);
	
	if(me==0 && com ==1 || me==1 && com ==2 || me==2&&com==0)
	{
		printf("WIN\n");
	}
	else if (me == com)
	{
		printf("SAME\n");	
	}
	else printf("LOSE\n");
}

#include<stdio.h>

void print(int month,int cnt)
{
	int month_day[3] = {30,31,30};
	int day;
	
	for(day=1; day<=month_day[month-9]; day++)
	{
		cnt++;
		printf("%4d",day);
		if(cnt%7==0) printf("\n");
	}
}


main()
{
	int choose;
	int cnt=0;
	int i;
	
	do
	{
		printf("9,10,11월 달중 하나를 선택해주세요.");
		scanf("%d",&choose);
	}while(choose>11 || choose<9);
	
	printf("------------------------------\n  일  월  화  수  목  금  토\n------------------------------\n");
	if(choose==9)
	{
		for(i=1;i<=6;i++) 
		{
			printf("    ");
			cnt++;
		}
		print(9,cnt);
	}
	else if(choose==10)
	{
		for(i=1;i<=1;i++) 
		{
			printf("    ");
			cnt++;
		}
		print(10,cnt);
	}
	else if(choose==11)
	{
		for(i=1;i<=4;i++) 
		{
			printf("    ");
			cnt++;
		}
		print(11,cnt);
	}
	
				
}

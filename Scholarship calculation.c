// 장학금계산.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include<stdio.h>


int main()
{
	int rich,total = 100;;
	double grade;
	printf("Enter family life and grade");
	scanf_s("%d %lf", &rich,&grade);
	if (rich >= 100 && grade >= 4.0)
	{
		total = (total - total * 0.2);
	}
	else if(rich<100)
	{
		total = (total - total * 0.4);
	}
	printf("The registration fee for the next semester is %d won..",total);
    return 0;
}



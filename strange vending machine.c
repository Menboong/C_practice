#include<stdio.h>


int main()
{
	int jelly = 2000, coke = 3000;
	int money, charge;
	int a, b, ago, a1, b1, ago1;
	int m100000,m10000,m5000,m1000,m500,m100,m50,m10,rest;
	printf("jelly is 2000 coke is 3000. attractiveness is 1000000\n");
	printf("how many jelly will you buy? :");
	scanf_s("%d", &a);
	printf("how many coke will you buy? :");
	scanf_s("%d", &b);
	printf("do you want to see?? Y=2 X=1\t");
	scanf_s("%d", &ago);
	a1 = a * jelly;
	b1 = b * jelly;
	if (ago == 2)
	{
		ago1 = 1000000;
	}
	if (ago == 1)
	{
		ago1 = 0;
	}
	printf("total %d\n", a1 + b1+ago1);
	printf("please put the money in\n");
	scanf_s("%d", &money);
	if (a1 + b1 <= money)
	{
		printf("jelly : %d coke: %d\n",a,b);
		//printf(" 애교:%c", ago == 2 ? "Y " : "N");
		if (ago == 2)
		{
			printf("/oㅅo/.../xㅅx/.../ㅡㅅㅡ/.../ㅂㅅㅂ/.../'ㅅ'/\n");
		}
		else
		{
		 	printf("ㅎ...\n");
		}
		charge = money - (a1 + b1+ago1);
		m100000 = charge / 100000;
		rest = charge % 100000;
		m10000 = rest / 10000;
		rest = rest % 10000;
		m5000 = rest / 5000;
		rest = rest % 5000;
		m1000 = rest / 1000;
		rest = rest % 1000;
		m500 =  rest/ 500;
		rest = rest % 500;
		m100 = rest / 100;
		rest = rest % 100;
		m50 = rest / 50;
		rest = rest % 50;
		m10 = rest / 10;
		printf("rest: 100000\\ %d,10000\\ %d,5000\\ %d개,1000\\ %d개,500\\ %d개,100\\ %d개,50\\ %d개,10\\ %d개\n", m100000,m10000,m5000,m1000,m500, m100, m50, m10);
		
	}
	else
	{
		printf("Money is scarce.\n");
		printf("please try again\n");
	}
	return 0;
}

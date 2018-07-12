#include<stdio.h>
/*
	Place n length iron in the machine and cut to k length to discard remaining iron. 
	The number is increasing from F-0001.
	Then how we can get equired material number.
*/

main()
{
	int n,k;
	int cnt,stat;
	int i;
	
	scanf("%d %d",&n,&k);
	
	cnt = n/k;
	if(cnt > 9999) stat = 1;
	else stat = 0;
	
	if(stat==1) printf("overnumberERROR\n");
	else
	{
		for(i=1;i<=cnt;i++)
		{
			printf("F-%04d\n",i);
		}
	}
}

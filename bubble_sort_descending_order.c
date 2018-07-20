#include<stdio.h>

int main()
{
	int ary[100];
	int i,j;
	int temp;
	int cnt=0;
	
	printf("put numbers. (if you want to finish put 9999)");
	for(i=0;i<100;i++)
	{
		scanf("%d",&ary[i]);
		if(ary[i]==9999) break;
		cnt++;
	}
	for(i=0;i<cnt-1;i++)
	{
		for(j=0;j<cnt-1;j++)
		{
			if(ary[j]<ary[j+1])
			{
				temp=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=temp;
			}
		}
	}
	printf("버블정렬 결과: ");
	for(i=0;i<cnt;i++)
	{
		printf("%-5d",ary[i]);	
	} 
	
	return 0;
}

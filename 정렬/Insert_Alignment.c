#include<stdio.h>

int main()
{
	int ary[100];
	int i,j;
	int temp;
	int cnt=0;
	
	printf("put numbers. (if you want to finish, put 9999)");
	for(i=0;i<100;i++)
	{
		scanf("%d",&ary[i]);
		if(ary[i]==9999) break;
		cnt++;
	}
	
	for(i=1;i<cnt;i++)
	{
		temp=ary[i];
	
		for(j=i;j>0;j--)
		{
			if(ary[j-1]>temp)
			{
				ary[j]=ary[j-1];   	
				if(j==1)
				{
					ary[j-1]=temp;
					break;
				}
			}
			else
			{
				ary[j]=temp;
				break;
			}
		}
	}
	for(i=0;i<cnt;i++)
	{
		printf("%-5d",ary[i]);	
	}
}

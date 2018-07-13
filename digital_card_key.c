#include<stdio.h>
/* 
   The keys have id values
   Coding to obtain an id value that can pass through three doors at minimum cost
   (The higher the id value of the security key, the lower the build cost)
*/

void swap(n1,n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp; 
	
}

main()
{
	int num1,num2,num3;
	int i;
	
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num2>num3) swap(num2,num3);
	if(num1>num2) swap(num1,num3);
	
	for(i=num1;i>0;i--)
	{
		if(num1%i==0 && num2%i==0 && num3%i==0)
		{
			printf("ID: %d",i);
			break;
		}
	}
}

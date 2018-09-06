#include<stdio.h>
int Swap(int num1,int num2,int num3)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	temp = num2;
	num2 = num3;
	num3 = temp;
	
	return num1,num2,num3;
}

void main()
{
	int n1,n2,n3;
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("%d %d %d",Swap(n1,n2,n3));
} 

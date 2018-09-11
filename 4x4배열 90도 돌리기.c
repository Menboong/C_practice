#include<stdio.h>
#define SIZE 4
int arr[SIZE][SIZE];

main()
{
	int i,j;
	int num = 1;

	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			arr[i][j]= num++;
		}
	}
		
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(j=SIZE-1;j>=0;j--)
	{
		for(i=0;i<SIZE;i++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(j=0;j<SIZE;j++)
	{
		for(i=SIZE-1;i>=0;i--)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=SIZE-1;i>=0;i--)
	{
		for(j=SIZE-1;j>=0;j--)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}

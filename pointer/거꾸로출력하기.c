#include<stdio.h>

main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p = &arr[9];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("%-3d",*(p-i));
	}
}

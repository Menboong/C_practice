#include<stdio.h>
#define RANGE 10
int main()
{
	int bubble_sort[RANGE];
	int i,j; 
	int temp;
	int size;
	
	 
	printf("put number");
	for(i=0;i<RANGE;i++)
	{ 
		scanf("%d",&size);
	 	bubble_sort[i]=size;
	}
	
	 printf("====before bubble sort ====\n");
	 for(i=0;i<RANGE;i++)
	 {
	 	printf("%-3d",bubble_sort[i]);
	 }
	 printf("\n");
	 for(i=0;i<RANGE;i++)
	 {
	 	for(j=0;j<RANGE-1;j++) 
	 	{
	 		if(bubble_sort[j]>bubble_sort[j+1])  
			{
				temp=bubble_sort[j]; 
				bubble_sort[j]=bubble_sort[j+1]; 
				bubble_sort[j+1]=temp; 
			}	
		}
	} 
	printf("==== after bubble sort ====\n");
	for(i=0;i<RANGE;i++) 
	{
		printf("%-3d",bubble_sort[i]);
	}
}

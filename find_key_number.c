#include<stdio.h>

int main()
{
	int a[10]={11,18,26,27,39,57,63,75,76,80};
	int key=57;
	int low=0,high=9,mid;
	
	while(1)
	{
		mid=(low+high)/2;
		if(a[mid]>key)
		{
			high=mid-1;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			break;
		}	
	}
	printf("인덱스 번호%d에서 탐색성공",mid);
}

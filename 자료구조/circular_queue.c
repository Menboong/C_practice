#include<stdio.h>
#include <windows.h>
#define MAX_SIZE 4

int Is_Empty();	//공백
int Is_Full();	//꽉찼는지
int Enqueue();	//값넣는거 
int Dequeue();	//값빼는거
void Print();	//출력 

int tail = 0;
int head = 0;
int cirque[MAX_SIZE]={0};
int data;
int sel;
int flag = 1;

int main () {
	while(flag)
	{
		printf("0=exit  1=print  2=Enqueue  3=Dequeue\nselect number:");
		scanf("%d",&sel);
	
		switch(sel)
		{
			case 0:
				flag = 0;
				break;
			case 1:
				Print();
				break;
			case 2:	
				Enqueue();
				break;
			case 3:
				Dequeue();
				break;
		}
		printf("press any key to continue");
		getch();
		system("cls");
		printf("bye~~ ");
	}
}

int Is_Empty()
{
	if(head==tail)
		return 1;
	else
		return 0;
}

int Is_Full()
{
	if(((tail+1)%MAX_SIZE)==head)
		return 1;
	else
		return 0;
}

int Enqueue()
{
	if(Is_Full())
	{
		printf("overflow\n");
		return 0;
	}
	
	printf("Put number: ");
	scanf("%d",&data);
	
	tail++;
	tail %= MAX_SIZE;
	
	cirque[tail] = data;
}

int Dequeue()
{
	if(Is_Empty())
	{
		printf("underflow\n");
		return 0;
	}
	
	head++;
	head %= MAX_SIZE;
	
	data=cirque[head];
	cirque[head] = 0;
}

void Print()
{
	int i;
	for(i=0;i<MAX_SIZE;i++)
		printf("%d ",cirque[i]);
	printf("\n");
}


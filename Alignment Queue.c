#include<stdio.h>
#define SIZE 15

int input[SIZE];
int output[SIZE*SIZE];
int front =0;
int rear=0;

void put(int n) 
{
	if(rear>=SIZE)
	{
		printf("overflow~~!!\n");	
	}
	else
	{
		input[rear]=n;
		rear++;
	}

} 

void get()
{
	if(input[front]=='\0')
	{
		printf("underflow~~!!\n");
	}
	else
	{
		output[front]=input[front];
		input[front]='\0';
		front++;
	}
}

void screen()
{
	int i;
	
	printf("Q:");
	for(i=front;i<rear;i++)
	{
		printf("%-5d",input[i]);
	}
	printf("\n");
	
	printf("get:");
	for(i=0;i<front;i++)
	{
		printf("%-5d",output[i]);
	}
	printf("\n\n\n");
}

main() 
{
	int n;
	
	while(1)
	{
		printf("--------------------------------------------------\n");
		printf("\t\tgetis 99999입니다\n");
		printf("\t\tfinish is 44444입니다\n");
		printf("--------------------------------------------------\n");
	
		scanf("%d",&n);
	
		if(n==99999)
		{
			get();
			screen();
			
		}
		else if(n==44444)
		{
			break;
		}
		else
		{
			put(n);
			screen();
		}
	}
}

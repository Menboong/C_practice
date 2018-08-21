#include<stdio.h>

struct food
{
	char date[10];
	char breakfast[101];
	char lunch[101];
	char dinner[101];
};

int main()
{
	int i;
	int num;
	struct food test[30];
	FILE*fin = fopen("test.txt","r");
	
	for(i=0;i<30;i++)
	{
		fgets(test[i].date,10,fin);
		fgets(test[i].breakfast,100,fin);
		fgets(test[i].lunch,100,fin);
		fgets(test[i].dinner,100,fin);
	}
	
	scanf("%d",&num);
	
	printf("date: %s\nbreakfast: %s\nlunch: %s\ndinner: %s\n",test[num-1].date,test[num-1].breakfast,test[num-1].lunch,test[num-1].dinner);	
}

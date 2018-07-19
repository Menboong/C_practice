#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RANGE 50

int main()
{
	srand(time(NULL));
	int i=0,user=0,com = (rand()%RANGE)+1;
	
	while(user!=com)
	{
		i++;
		printf("enter a number from 1 to %d: ",RANGE);
		scanf_s("%d", &user);
		if (user > com)
		{
			printf("less than %d!\n", user);
		}
		else
		{
			printf("it's bigger than'%d!\n", user);
		}
		if (user == com)
		{
			break;
		}
	}
	printf("correct.");
	printf(" the number of attempts is %d.", i);

	return 0;
}



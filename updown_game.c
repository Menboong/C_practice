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
			printf("less than %d!\n\n", user);
		}
		else if (user==com)
		{
			break;
		}
		else
		{
			printf("it's bigger than'%d!\n\n", user);
		}
	}
	printf("correct.\n");
	printf("the number of attempts is %d.\n", i);

	return 0;
}



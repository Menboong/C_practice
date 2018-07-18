#include<stdio.h>
#define Key 14

int main()
{
	int i=0,user=0,com = Key;
	//scanf_s("%d", &user);
	while(user!=com)
	{
		i++;
		printf("enter a number from 1 to 30: ");
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



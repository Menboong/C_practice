#include<stdio.h>
#include<string.h> 

struct Person
{
	char name [20];
	int age;
	char address[100];
}class[30];

int main()
{
	class[0] = {"장소희",17,"이천"};	
	class[1] = {"최소영",17,"천안"};
	
	printf("이름: %s\n",class[0].name);
	printf("나이: %d\n",class[0].age);
	printf("주소: %s\n\n",class[0].address); 

	printf("이름: %s\n",class[1].name);
	printf("나이: %d\n",class[1].age);
	printf("주소: %s\n",class[1].address);
}

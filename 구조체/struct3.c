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
	strcpy(class[0].name,"최소영");
	strcpy(class[0].age,17);
	strcpy(class[0].address,"천안");
	
	printf("이름: %s\n",class[0].name);
	printf("나이: %d\n",class[0].age);
	printf("주소: %s\n\n",class[0].address); 

	printf("이름: %s\n",class[1].name);
	printf("나이: %d\n",class[1].age);
	printf("주소: %s\n",class[1].address);
}

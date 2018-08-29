#include<stdio.h>
#include<string.h> 

struct Person
{
	char name [20];
	int age;
	char address[100];
}p1;

int main()
{
	//struct Person p1;
	
	strcpy(p1.name,"최소영");
	p1.age = 17;
	strcpy(p1.address, "콜라 맘속 >_<");
	
	printf("이름: %s\n",p1.name);
	printf("나이: %d\n",p1.age);
	printf("주소: %s\n",p1.address); 
}


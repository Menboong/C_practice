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
	struct Person p2 = {"장소희",17,"이천"};	
	strcpy(p1.name,"최소영");
	p1.age = 17;
	strcpy(p1.address, "천안");
	
	printf("이름: %s\n",p1.name);
	printf("나이: %d\n",p1.age);
	printf("주소: %s\n\n",p1.address); 

	printf("이름: %s\n",p2.name);
	printf("나이: %d\n",p2.age);
	printf("주소: %s\n",p2.address);
}


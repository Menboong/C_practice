#include<stdio.h>
#include<string.h> 

struct Person
{
	char name [20];
	int age;
	char address[100];
};

int main()
{	
	struct Person *p1=malloc((sizeof(struct Person)));	
	strcpy((*p1).name,"최소영");
	(*p1).age = 17;
	strcpy((*p1).address, "천안");
	
	printf("이름: %s\n",p1->name);
	printf("나이: %d\n",p1->age);
	printf("주소: %s\n\n",p1->address); 
	
	free(p1);
}


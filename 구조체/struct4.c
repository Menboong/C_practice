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
	strcpy((*p1).name,"�ּҿ�");
	(*p1).age = 17;
	strcpy((*p1).address, "õ��");
	
	printf("�̸�: %s\n",p1->name);
	printf("����: %d\n",p1->age);
	printf("�ּ�: %s\n\n",p1->address); 
	
	free(p1);
}


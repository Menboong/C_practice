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
	
	strcpy(p1.name,"�ּҿ�");
	p1.age = 17;
	strcpy(p1.address, "�ݶ� ���� >_<");
	
	printf("�̸�: %s\n",p1.name);
	printf("����: %d\n",p1.age);
	printf("�ּ�: %s\n",p1.address); 
}


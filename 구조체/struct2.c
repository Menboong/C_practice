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
	struct Person p2 = {"�����",17,"��õ"};	
	strcpy(p1.name,"�ּҿ�");
	p1.age = 17;
	strcpy(p1.address, "õ��");
	
	printf("�̸�: %s\n",p1.name);
	printf("����: %d\n",p1.age);
	printf("�ּ�: %s\n\n",p1.address); 

	printf("�̸�: %s\n",p2.name);
	printf("����: %d\n",p2.age);
	printf("�ּ�: %s\n",p2.address);
}


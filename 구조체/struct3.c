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
	class[0] = {"�����",17,"��õ"};	
	class[1] = {"�ּҿ�",17,"õ��"};
	
	printf("�̸�: %s\n",class[0].name);
	printf("����: %d\n",class[0].age);
	printf("�ּ�: %s\n\n",class[0].address); 

	printf("�̸�: %s\n",class[1].name);
	printf("����: %d\n",class[1].age);
	printf("�ּ�: %s\n",class[1].address);
}

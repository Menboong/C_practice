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
	strcpy(class[0].name,"�ּҿ�");
	strcpy(class[0].age,17);
	strcpy(class[0].address,"õ��");
	
	printf("�̸�: %s\n",class[0].name);
	printf("����: %d\n",class[0].age);
	printf("�ּ�: %s\n\n",class[0].address); 

	printf("�̸�: %s\n",class[1].name);
	printf("����: %d\n",class[1].age);
	printf("�ּ�: %s\n",class[1].address);
}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "arr_stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	stack s1;
	int num;
	int choice;
	
	Sinit(&s1);
	
	do
	{
		printf("-----------------------------\n");
		printf("���Ͻô� ����� ������ �ּ���.\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. ����\n");
		printf("------------------------------\n");
		printf("���ϴ� ���:");
		scanf("%d",&choice);
		
		if(choice < 1 || choice > 4)
		{
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
			continue;
		}
		switch(choice)
		{
			case 1:
				printf("������ ���� �Է� ���ּ���: ");
				scanf("%d",&num);
				Spush(&s1,num);
				break;
			case 2:
				Spop(&s1);
				break;
			case 3:
				Speek(&s1);	
				break;
		}
		printf("�ƹ�Ű�� �����ּ���.\n");
		getch();
		system("cls"); 
	}while(choice!=4);
	
	return 0;
}

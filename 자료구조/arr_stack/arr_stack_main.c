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
	int tmp;
	int data;
	
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
		}
		switch(choice)
		{
			case 1:
				printf("������ ���� �Է� ���ּ���: ");
				scanf("%d",&num);
				tmp = Spush(&s1,num);
				if(tmp==-1) printf("\n\nO V E R F L O W\n\n");
				break;
			case 2:
				tmp = Spop(&s1,&data);
				if(tmp==0) printf("������ ��: %d\n",data);
				else if(tmp==-1) printf("\n\nU N D E R F L O W\n\n");
				break;
			case 3:
				printf("���� ���� ����: ");
				tmp = Speek(&s1,&data);
				if(tmp==0) printf("%d\n",data);
				else if(tmp==-1) printf("N O T H I N G\n");
				break;
		}
		printf("�ƹ�Ű�� �����ּ���.\n");
		getch();
		system("cls"); 
	}while(choice!=4);
	
	return 0;
}

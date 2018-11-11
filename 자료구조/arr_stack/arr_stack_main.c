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
		printf("원하시는 기능을 선택해 주세요.\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. 종료\n");
		printf("------------------------------\n");
		printf("원하는 기능:");
		scanf("%d",&choice);
		
		if(choice < 1 || choice > 4)
		{
			printf("잘못된 값을 입력하셨습니다.\n");
			continue;
		}
		switch(choice)
		{
			case 1:
				printf("저장할 값을 입력 해주세요: ");
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
		printf("아무키나 눌러주세요.\n");
		getch();
		system("cls"); 
	}while(choice!=4);
	
	return 0;
}

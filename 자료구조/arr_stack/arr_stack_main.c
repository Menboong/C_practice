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
		}
		switch(choice)
		{
			case 1:
				printf("저장할 값을 입력 해주세요: ");
				scanf("%d",&num);
				tmp = Spush(&s1,num);
				if(tmp==-1) printf("\n\nO V E R F L O W\n\n");
				break;
			case 2:
				tmp = Spop(&s1,&data);
				if(tmp==0) printf("삭제된 값: %d\n",data);
				else if(tmp==-1) printf("\n\nU N D E R F L O W\n\n");
				break;
			case 3:
				printf("현재 다음 값은: ");
				tmp = Speek(&s1,&data);
				if(tmp==0) printf("%d\n",data);
				else if(tmp==-1) printf("N O T H I N G\n");
				break;
		}
		printf("아무키나 눌러주세요.\n");
		getch();
		system("cls"); 
	}while(choice!=4);
	
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

main()
{	
	int cnt = 0;
	int i;
	int n=0;
	char key;
	
	while(1)
	{	
		for(i=0;i<n;i++)
		{
			printf("■");
		}
		printf("\n키보드를 누르면 아파여...\n----------\n|        |\n|  |  |  |\n|   ㅅ   |\n----------\n");
		getch();
		system("cls");
		printf("키보드를 누르면 아파여...\n----------\n|        |\n|  >  <  |\n|   ㅅ   |\n----------\n");
		Sleep(500);
		system("cls");
		cnt++;
		
		if(cnt == 20)
		{
			printf("심심이의 분노게이지가 한칸 올라갑니다.\n");
			printf("----------\n|        |\n| ㅜ  ㅜ |\n|   ㅅ   |\n----------\n끄앙..\n");
			printf("아무키나 눌러주세요.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt==40)
		{
			
			printf("심심이의 분노게이지가 한칸 올라갑니다.\n");
			printf("----------\n|        |\n| ㅡ  ㅡ |\n|   ㅅ   |\n----------\n힝..구\n");
			printf("아무키나 눌러주세요.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt ==60)
		{
			
			printf("심심이의 분노게이지가 한칸 올라갑니다.\n");
			printf("----------\n|        |\n| ㅡ  ㅡ |\n|   ㅡ   |\n----------\n그럴꺼야??\n");
			printf("아무키나 눌러주세요.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt ==80)
		{
			
			printf("심심이의 분노게이지가 한칸 올라갑니다.\n");
			printf("----------\n|        |\n|  \  /  |\n|   ㅡ   |\n----------\n짜증나!\n");
			printf("아무키나 눌러주세요.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt ==100)
		{
			
			printf("심심이의 분노게이지가 한칸 올라갑니다.\n");
			printf("----------\n|        |\n|  \  /  |\n|   o   |\n----------\n하지마!!!\n");
			printf("아무키나 눌러주세요.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt >=101)
		{
			
			printf("심심이의 분노게이지가 한칸 올라갑니다.\n");
			printf("----------\n|        |\n|  \  /  |\n|   o   |\n----------\n하지말라고 했지?!\n");
			printf("5초 뒤 심심이가 폭주합니다.\n");
			Sleep(5000);
			for(i=0;i<1000;i++)
			{
				printf("하지마!\n");
			}
			printf("지금 지켜만 보고 있는거야?\n");
			printf("이런거 하면 되요? 안되요? Y/N(대문자로 입력해주세요)");
			scanf("%c",&key);
			if(key == 'Y')
			{
				printf("앞으로는 그러지마여!!");
				break;
			}
			else if(key == 'N')
			{
				printf("헐..\n");
				printf("심심이가 삐졌습니다.\n");
				for(i=0;i<1000;i++)
				{
					printf("저리가!\n");
				}
				break; 
			}
		}
	}
}

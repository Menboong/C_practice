#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

main()
{	
	int cnt = 0;
	
	while(1)
	{
		printf("키보드를 누르면 아파여...\n");
		printf("----------\n|        |\n|  |  |  |\n|   ㅅ   |\n----------\n");
		getch();
		system("cls");
		printf("키보드를 누르면 아파여...\n");
		printf("----------\n|        |\n|  >  <  |\n|   ㅅ   |\n----------\n");
		Sleep(100);
		system("cls");
	}
}

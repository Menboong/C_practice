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
			printf("��");
		}
		printf("\n%d\n",cnt);
		printf("\nŰ���带 ������ ���Ŀ�...\n----------\n|        |\n|  |  |  |\n|   ��   |\n----------\n");
		getch();
		system("cls");
		printf("Ű���带 ������ ���Ŀ�...\n----------\n|        |\n|  >  <  |\n|   ��   |\n----------\n");
		Sleep(200);
		system("cls");
		cnt++;

		if(cnt == 20) n++;
		else if(cnt == 40) n++;
		else if(cnt == 60) n++;
		else if(cnt == 80) n++;
		else if(cnt == 100) n++;
		else if(cnt == 101) n++;

		switch (n)
		{
			case 1 :
				printf("�ݶ��� �г�������� ��ĭ �ö󰩴ϴ�.\n");
				printf("----------\n|        |\n| ��  �� |\n|   ��   |\n----------\n����..\n");
				Sleep(2000);
				printf("�ƹ�Ű�� �����ּ���.\n");
				getch();
				system("cls");
				n++;
				break;
			case 3 :
				printf("�ݶ��� �г�������� ��ĭ �ö󰩴ϴ�.\n");
				printf("----------\n|        |\n| ��  �� |\n|   ��   |\n----------\n��..��\n");
				Sleep(2000);
				printf("�ƹ�Ű�� �����ּ���.\n");
				getch();
				system("cls");
				n++;
				break;
			case 5 :
				printf("�ݶ��� �г�������� ��ĭ �ö󰩴ϴ�.\n");
				printf("----------\n|        |\n| ��  �� |\n|   ��   |\n----------\n�׷�����??\n");
				Sleep(2000);
				printf("�ƹ�Ű�� �����ּ���.\n");
				getch();
				system("cls");
				n++;
				break;
			case 7 :
				printf("�ݶ��� �г�������� ��ĭ �ö󰩴ϴ�.\n");
				printf("----------\n|        |\n| ��  �� |\n|   ��   |\n----------\n¥����!\n");
				Sleep(2000);
				printf("�ƹ�Ű�� �����ּ���.\n");
				getch();
				system("cls");
				n++;
				break;
			case 9 :
				printf("�ݶ��� �г�������� ��ĭ �ö󰩴ϴ�.\n");
				printf("----------\n|        |\n| ��  �� |\n|    o   |\n----------\n������!!!\n");
				printf("�ƹ�Ű�� �����ּ���.\n");
				getch();
				system("cls");
				n++;
				break;
			case 11 :
				printf("�ݶ��� �г�������� ��ĭ �ö󰩴ϴ�.\n");
				printf("----------\n|        |\n| ��  �� |\n|    o   |\n----------\n��������� ����?!\n");
				printf("5�� �� �ݶ� �����մϴ�.\n");
				Sleep(5000);
				for(i=0;i<1115;i++)
				{
					printf("������!\n");
				}
				printf("\n���� ���Ѹ� ���� �ִ°ž�?\n");
				printf("�̷��� �ϸ� �ǿ�? �ȵǿ�? Y/N(�빮�ڷ� �Է����ּ���)");
				scanf("%c",&key);
				Sleep(1000);
				printf(".\n");
				Sleep(1000);
				printf(".\n");
				Sleep(1000);
				printf(".\n");
				if(key == 'Y') printf("�����δ� �׷�������!!");
				else if(key == 'N')
				{
					printf("��..\n");
					printf("�ݶ� �������ϴ�.\n");
					for(i=0;i<1115;i++)
					{
						printf("������!\n");
					}
				}
				break;
		}			
		if(cnt >=101) break;
	}
}

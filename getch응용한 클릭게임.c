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
		printf("\nŰ���带 ������ ���Ŀ�...\n----------\n|        |\n|  |  |  |\n|   ��   |\n----------\n");
		getch();
		system("cls");
		printf("Ű���带 ������ ���Ŀ�...\n----------\n|        |\n|  >  <  |\n|   ��   |\n----------\n");
		Sleep(500);
		system("cls");
		cnt++;
		
		if(cnt == 20)
		{
			printf("�ɽ����� �г�������� ��ĭ �ö󰩴ϴ�.\n");
			printf("----------\n|        |\n| ��  �� |\n|   ��   |\n----------\n����..\n");
			printf("�ƹ�Ű�� �����ּ���.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt==40)
		{
			
			printf("�ɽ����� �г�������� ��ĭ �ö󰩴ϴ�.\n");
			printf("----------\n|        |\n| ��  �� |\n|   ��   |\n----------\n��..��\n");
			printf("�ƹ�Ű�� �����ּ���.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt ==60)
		{
			
			printf("�ɽ����� �г�������� ��ĭ �ö󰩴ϴ�.\n");
			printf("----------\n|        |\n| ��  �� |\n|   ��   |\n----------\n�׷�����??\n");
			printf("�ƹ�Ű�� �����ּ���.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt ==80)
		{
			
			printf("�ɽ����� �г�������� ��ĭ �ö󰩴ϴ�.\n");
			printf("----------\n|        |\n|  \  /  |\n|   ��   |\n----------\n¥����!\n");
			printf("�ƹ�Ű�� �����ּ���.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt ==100)
		{
			
			printf("�ɽ����� �г�������� ��ĭ �ö󰩴ϴ�.\n");
			printf("----------\n|        |\n|  \  /  |\n|   o   |\n----------\n������!!!\n");
			printf("�ƹ�Ű�� �����ּ���.\n");
			getch();
			system("cls");
			n++;
		}
		else if(cnt >=101)
		{
			
			printf("�ɽ����� �г�������� ��ĭ �ö󰩴ϴ�.\n");
			printf("----------\n|        |\n|  \  /  |\n|   o   |\n----------\n��������� ����?!\n");
			printf("5�� �� �ɽ��̰� �����մϴ�.\n");
			Sleep(5000);
			for(i=0;i<1000;i++)
			{
				printf("������!\n");
			}
			printf("���� ���Ѹ� ���� �ִ°ž�?\n");
			printf("�̷��� �ϸ� �ǿ�? �ȵǿ�? Y/N(�빮�ڷ� �Է����ּ���)");
			scanf("%c",&key);
			if(key == 'Y')
			{
				printf("�����δ� �׷�������!!");
				break;
			}
			else if(key == 'N')
			{
				printf("��..\n");
				printf("�ɽ��̰� �������ϴ�.\n");
				for(i=0;i<1000;i++)
				{
					printf("������!\n");
				}
				break; 
			}
		}
	}
}

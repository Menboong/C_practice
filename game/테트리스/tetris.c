#include<stdio.h> // �⺻ ������� 
#include<windows.h> //coord��� �ڷ����� �̿��Ͽ� ��ǥ�� �̿��Ҽ� ���� 
#include<conio.h> // getch��� �Լ��� ����ϱ� ����
				  //getch �Է¹��۰� ��� �Է��ϴ� ���� ������ �� *getche�� �Է��Ѱ��� ȭ�鿡 ��±��� ���� 
#include<time.h> // ������ �����ϱ����Ͽ� ���
#include<stdlib.h> // �پ��� ���ڿ� �Լ��� ����ϱ� ���� 

#define LEFT 75 //�·� �̵�    //Ű���尪�� 
#define RIGHT 77 //��� �̵� 
#define UP 72 //ȸ�� 
#define DOWN 80 //soft drop
#define SPACE 32 //hard drop
#define p 112 //�Ͻ����� 
#define P 80 //�Ͻ�����
#define ESC 27 //�������� 

#define ACTIVE_BLOCK -2 // �����ǹ迭�� ����� ����� ���µ� 
#define CEILLING -1     // ����� �̵��� �� �ִ� ������ 0 �Ǵ� ���� ������ ǥ�� 
#define EMPTY 0         // ����� �̵��� �� ���� ������ ����� ǥ�� 
#define WALL 1
#define INACTIVE_BLOCK 2 // �̵��� �Ϸ�� ��ϰ�

#define MAIN_X 11 //������ ����ũ�� 
#define MAIN_Y 23 //������ ����ũ�� 
#define MAIN_X_ADJ 3 //������ ��ġ���� 
#define MAIN_Y_ADJ 3 //������ ��ġ���� 


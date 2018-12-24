#include<stdio.h> // 기본 헤더파일 
#include<windows.h> //coord라는 자료형을 이용하여 좌표를 이용할수 있음 
#include<conio.h> // getch라는 함수를 사용하기 위함
				  //getch 입력버퍼가 없어서 입력하는 순간 변수로 들어감 *getche는 입력한것을 화면에 출력까지 해줌 
#include<time.h> // 난수를 생성하기위하여 사용
#include<stdlib.h> // 다양한 문자열 함수를 사용하기 위함 

#define LEFT 75 //좌로 이동    //키보드값들 
#define RIGHT 77 //우로 이동 
#define UP 72 //회전 
#define DOWN 80 //soft drop
#define SPACE 32 //hard drop
#define p 112 //일시정지 
#define P 80 //일시정지
#define ESC 27 //게임종료 

#define ACTIVE_BLOCK -2 // 게임판배열에 저장될 블록의 상태들 
#define CEILLING -1     // 블록이 이동할 수 있는 공간은 0 또는 음의 정수료 표현 
#define EMPTY 0         // 블록이 이동할 수 없는 공간은 양수로 표현 
#define WALL 1
#define INACTIVE_BLOCK 2 // 이동이 완료된 블록값

#define MAIN_X 11 //게임판 가로크기 
#define MAIN_Y 23 //게임판 세로크기 
#define MAIN_X_ADJ 3 //게임판 위치조정 
#define MAIN_Y_ADJ 3 //게임판 위치조정 


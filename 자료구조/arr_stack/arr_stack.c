#include<stdio.h>
#include "arr_stack.h"

void Sinit(stack *pstack)
{
	pstack -> topindex = -1;
}

void Spush(stack *pstack, int data)
{
	if(pstack->topindex>=SLength-1)
	{
		printf("\n\nO V E R F L O W\n\n");
	}
	else
	{
		pstack -> topindex++;
		pstack -> Sarr[pstack->topindex] = data;
		//printf("%d\n",pstack->topindex); topindex �˻�� 
	}
}

void Spop(stack *pstack)
{
	int output;
	
	if(pstack->topindex<=-1)
	{
		printf("\n\nU N D E R F L O W\n\n");
	}
	else
	{
		output = pstack -> Sarr[pstack->topindex];
		pstack->topindex--;
		printf("������ ��: %d",output);
	}
}

void Speek(stack *pstack)
{
	printf("���� ���������� �ִ� ��: ");
	if(pstack->topindex<=-1)
	{
		printf("N O T H I N G\n");
	}
	else
	{
		printf("%d", pstack -> Sarr[pstack->topindex]);
	}
}

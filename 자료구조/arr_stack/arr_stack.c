#include<stdio.h>
#include "arr_stack.h"

void Sinit(stack *pstack)
{
	pstack -> topindex = -1;
}

int Spush(stack *pstack, int data)
{
	if(pstack->topindex>=SLength-1)
	{
		return -1;
	}
	else
	{
		pstack -> topindex++;
		pstack -> Sarr[pstack->topindex] = data;
		//printf("%d\n",pstack->topindex); topindex °Ë»ç¿ë 
	}
}

int Spop(stack *pstack, Sdata *pdata)
{	
	if(pstack->topindex<=-1)
	{
		return -1;
	}
	else
	{
		*pdata = pstack -> Sarr[pstack->topindex];
		pstack->topindex--;
		return 0;
	}
}

int Speek(stack *pstack, Sdata *pdata)
{
	if(pstack->topindex<=-1)
	{
		return -1;
	}
	else
	{
		*pdata = pstack -> Sarr[pstack->topindex];
		return 0;
	}
}

#ifndef __ARR_STACK_H__
#define __ARR_STACK_H__

#define SLength 5
typedef int Sdata;

typedef struct ARRSTACK
{
	Sdata Sarr[SLength];
	int topindex;	
}stack;

void Sinit(stack *pstack);
int Spush(stack *pstack, int data);
int Spop(stack *pstack, Sdata *pdata);
int Speek(stack *pstack, Sdata *pdata);

#endif

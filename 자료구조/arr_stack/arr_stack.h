#ifndef __ARR_STACK_H__
#define __ARR_STACK_H__

#define SLength 5
typedef int Data;

typedef struct ARRSTACK
{
	Data Sarr[SLength];
	int topindex;	
}stack;

void Sinit(stack *pstack);
void Spush(stack *pstack, int data);
void Spop(stack *pstack);
void Speek(stack *pstack);

#endif

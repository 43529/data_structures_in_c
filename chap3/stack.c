#include <stdio.h>
#include <stdlib.h>
#define STACK_INIT_SIZE 100;
#define STACKINCREMENT 10;
typedef int SElementType;
typedef struct
{
    int stacksize;
    SElementType *top;
    SElementType *base;
} Stack;
void initStack(Stack *s)
{
    int initLength = STACK_INIT_SIZE;
    (*s).base = (SElementType *)malloc(sizeof(SElementType) * initLength);
}
int destroyStack(Stack *s)
{
    free((*s).base);
    (*s).base = NULL;
}
void clearStack(Stack *s)
{
    int initLength = STACK_INIT_SIZE;
    for (int i = 0; i < initLength; i++)
    {
        (*s).base[i] = -1;
    }
}
int isStackEmpty(Stack s)
{
    if (s.base[0] == -1)
    {
        return 0;
    }
    return 1;
}
int getStackLength(Stack s)
{
    int initLength = STACK_INIT_SIZE;
    for (int i = 0; i < initLength; i++)
    {
        if ((s).base[i] == -1)
        {
            return i;
        }
    }
}
int getTop(Stack *s)
{
    int i = getStackLength(*s);
    if (i == 0)
    {
        return 0;
    }
    else
    {
        return *((*s).base + i);
    }
}
int stackPop(Stack *s)
{
    (*s).base[(*s).stacksize] = -1;
    (*s).stacksize--;
    (*s).top = (*s).base + (*s).stacksize;
}
int stackPush(Stack *s, SElementType item)
{
    (*s).base[(*s).stacksize] = item;
    (*s).stacksize++;
    (*s).top = (*s).base + (*s).stacksize;
}
int StackReverse(Stack *s)
{
}
int visit(Stack *s)
{
}
int main()
{
    Stack stack;
    initStack(&stack);
    int initLength = STACK_INIT_SIZE;
    for (int i = 0; i < initLength; i++)
    {
        stack.base[i] = i;
    }
    printf("\n");
    for (int i = 0; i < initLength; i++)
    {
        printf("%d ", *(stack.base + i));
    }
    printf("\n");
    return 0;
}
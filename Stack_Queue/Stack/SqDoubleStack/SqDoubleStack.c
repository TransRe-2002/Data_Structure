#include "SqDoubleStack.h"
#include <stdlib.h>
Status Push(SqDoubleStack *S, SElemType e, int stackNumber)
{
    if (S->top1 + 1 == S->top2)/*栈已满，不能再push新元素了*/
        return ERROR;
    if (stackNumber == 1)/*栈1有元素进栈*/
        S->data[++S->top1] = e;/*若栈1则先top1+1后给数组元素赋值*/
    else if(stackNumber == 2)/*栈2有元素进栈*/
        S->data[--S->top2] = e;/*若栈1则先top2-1后给数组元素赋值*/
    return OK;
}

Status Pop(SqDoubleStack *S, SElemType *e, int stackNumber)
{
    if (stackNumber == 1)
    {
        if (S->top1 == -1)
            return ERROR;       /*说明栈1已经是空栈，退出*/
        *e = S->data[S->top1--];/*将栈1的栈顶元素出栈*/
    }
    else if (stackNumber == 2)
    {
        if (S->top2 == MAXSIZE)
            return ERROR;       /*说明栈1已经是空栈，退出*/
        *e = S->data[S->top2++];/*将栈2的栈顶元素出栈*/
    }
    return OK;
}

Status InitDoubleStack(SqDoubleStack *S)
{
    S = (SqDoubleStack *) malloc(sizeof(SqDoubleStack));
    if (S == NULL)
        return FALSE;
    else
    {
        S->top1 = -1
        S->top2 = MAXSIZE;
    }
}
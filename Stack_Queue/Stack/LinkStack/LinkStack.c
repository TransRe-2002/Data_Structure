#include <stdlib.h>
#include "LinkStack.h"

Status Push(LinkStack *S, SElemType e)
{
    LinkStackPtr s = (LinkStackPtr) malloc(sizeof (StackNode));
    s->data = e;
    s->next = S->top;/*把当前栈顶元素赋给新结点的直接后继*/
    S->top = s;/*将新的结点s赋值给栈顶指针*/
    S->count++;
    return OK;
}

Status Pop(LinkStack *S, SElemType *e)
{
    LinkStackPtr p;
    if (StackEmpty(*S))
        return ERROR;
    *e = S->top->data;
    p = S->top;
    S->top = S->top->next;
    free(p);
    S->count--;
    return OK;
}

Status StackEmpty(LinkStack S)
{
    if (S.count == 0)
        return TRUE;
    else
        return FALSE;
}

Status ClearStack(LinkStack *S)
{
    if (S == NULL)
        return ERROR;
    LinkStackPtr p;
    while (S->count != 0 && S->top != NULL)
    {
        p = S->top;
        S->top = S->top->next;
        S->count--;
        free(p);
    }
    free(S);
    return OK;
}

Status CreateStack(LinkStack *S)
{
    S = (LinkStack *) malloc(sizeof (LinkStack));
    if (S == NULL)
        return ERROR;
    else
    {
        S->top = NULL;
        S->count = 0;
        return OK;
    }
}
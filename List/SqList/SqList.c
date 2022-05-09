#include "SqList.h"
#include <stdlib.h>
Status InitList(SqList *L)
{
    L = (SqList *) malloc (sizeof(SqList));
    if(L == NULL)
        return FALSE;
    else
        return TRUE;
}

Status ListEmpty(SqList L)
{
    if (L.length == 0)
        return TRUE;
    else
        return FALSE;
}

Status ClearList(SqList *L)
{
    L->length = 0;
    return OK;
}

Status GetElem(SqList L, int i, ElemType *e)
{
    if (L.length == 0 || i < 1 || i > L.length)
        return ERROR;
    *e = L.data[i - 1];
    return OK;
}

Status ListInsert(SqList *L, int i, ElemType e)
{
    int k;
    if (L->length == MAXSIZE)
        return ERROR;
    if (i < 1 || i > L->length + 1)
        return ERROR;
    if (i <= L->length)     /*插入位置不在表尾*/
    {
        for (k = L->length; k >= i - 1; k--)
            L->data[k + 1] = L->data[k];
    }
    L->data[i - 1] = e;     /*将新元素输入*/
    L->length++;
    return OK;
}

int LocateElem(SqList L, ElemType e)
{
    int k;
    for (k = 1; k <= L.length; k++)
        if (L.data[k - 1] == e)
            return k;
    return 0;
}

Status ListDelete(SqList *L, int i, ElemType *e)
{
    int k;
    if (L -> length == 0)
        return ERROR;
    *e = L->data[i - 1];
    if (i < L -> length)
    {
        for (k = i; k < L -> length; k++)
            L->data[k - 1] = L->data[k];
    }
    L->length--;
    return OK;
}

int ListLength(SqList L)
{
    return L.length;
}

Status unionList(SqList* La, SqList Lb)
{
    int La_len, Lb_len, i;
    ElemType e;
    La_len = ListLength(*La);
    Lb_len = ListLength(Lb);
    if (La_len + Lb_len > MAXSIZE)
        return FALSE;
    for (i = 1; i <= Lb_len; i++)
    {
        GetElem(Lb,i,&e);
        if (!LocateElem(*La,e))
            ListInsert(La,++La_len,e);
    }

}




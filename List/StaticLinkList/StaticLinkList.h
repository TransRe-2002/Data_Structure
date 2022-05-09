#ifndef STATUS_NUM
#define STATUS_NUM
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
#endif

#ifndef DATA_STRUCTURE_STATICLINKLIST_H
#define DATA_STRUCTURE_STATICLINKLIST_H
typedef int ElemType;   /*ElemType类型根据实际情况确定*/
#define MAXSIZE 1000
typedef struct
{
    ElemType data;
    int cur;
} Component, StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList space);
int Malloc_SLL(StaticLinkList space);
Status ListInsert(StaticLinkList L, int i, ElemType e);
Status ListDelete(StaticLinkList L, int i);
void Free_SSL(StaticLinkList space, int k);
int ListLength(StaticLinkList L);
#endif

#ifndef STATUS_NUM
#define STATUS_NUM
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
#endif

#ifndef DATA_STRUCTURE_SQLIST_H
#define DATA_STRUCTURE_SQLIST_H
#define MAXSIZE 20      /*存储空间初始分配量*/
typedef int ElemType;   /*ElemType类型根据实际情况确定*/

typedef struct
{
    ElemType data[MAXSIZE]; /*数组存储数据元素，最大为MAXSIZE*/
    int length;             /*线性表当前长度*/
}SqList;

Status InitList(SqList *L);
Status ListEmpty(SqList L);
Status ClearList(SqList *L);
Status GetElem(SqList L, int i, ElemType *e);
int LocateElem(SqList L, ElemType e);
Status ListInsert(SqList *L, int i, ElemType e);
Status ListDelete(SqList *L, int i, ElemType *e);
int ListLength(L);

Status unionList(SqList* La, SqList Lb);
#endif

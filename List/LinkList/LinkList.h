#ifndef STATUS_NUM
#define STATUS_NUM
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
#endif

#ifndef DATA_STRUCTURE_LINKLIST_H
#define DATA_STRUCTURE_LINKLIST_H
typedef int ElemType;   /*ElemType类型根据实际情况确定*/
typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;
typedef struct Node *LinkList;  /*定义LinkList*/

Status GetElem(LinkList L, int i, ElemType *e);
Status ListInsert(LinkList *L, int i, ElemType e);
Status ListDelete(LinkList *L, int i, ElemType *e);
void CreateListHead(LinkList* L, int n);
void CreateListTail(LinkList* L, int n);
Status ClearList(LinkList* L);

#endif

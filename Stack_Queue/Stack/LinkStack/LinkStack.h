#ifndef STATUS_NUM
#define STATUS_NUM
typedef enum
{OK = 1,
    ERROR = 0,
    TRUE = 1,
    FALSE = 0
}Status;
#endif

#ifndef DATA_STRUCTURE_LINKSTACK_H
#define DATA_STRUCTURE_LINKSTACK_H
typedef int SElemType;   /*SElemType类型根据实际情况确定*/
typedef struct StackNode
{
    SElemType data;
    struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
}LinkStack;

Status Push(LinkStack *S, SElemType e);
Status Pop(LinkStack *S, SElemType *e);
Status CreateStack(LinkStack *S);
Status ClearStack(LinkStack *S);
Status StackEmpty(LinkStack S);
#endif //DATA_STRUCTURE_LINKSTACK_H

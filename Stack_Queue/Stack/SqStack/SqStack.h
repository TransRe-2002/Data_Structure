#ifndef STATUS_NUM
#define STATUS_NUM
typedef enum
    {OK = 1,
     ERROR = 0,
     TRUE = 1,
     FALSE = 0
    }Status;
#endif

#ifndef DATA_STRUCTURE_SQSTACK_H
#define DATA_STRUCTURE_SQSTACK_H
typedef int SElemType;   /*SElemType类型根据实际情况确定*/
#define MAXSIZE 10
typedef struct
{
    SElemType data[MAXSIZE];
    int top;
}SqStack;

Status Push(SqStack *S, SElemType e);
Status Pop(SqStack *S, SElemType *e);
Status InitStack(SqStack *S);
#endif
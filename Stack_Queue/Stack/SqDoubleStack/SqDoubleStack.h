#ifndef STATUS_NUM
#define STATUS_NUM
typedef enum
{OK = 1,
    ERROR = 0,
    TRUE = 1,
    FALSE = 0
}Status;
#endif
#ifndef DATA_STRUCTURE_SQDOUBLESTACK_H
#define DATA_STRUCTURE_SQDOUBLESTACK_H
typedef int SElemType;   /*SElemType类型根据实际情况确定*/
#define MAXSIZE 10
typedef struct
{
    SElemType data[MAXSIZE];
    int top1;
    int top2;
}SqDoubleStack;
Status Push(SqDoubleStack *S, SElemType e, int stackNumber);
Status pop(SqDoubleStack *S, SElemType *e, int stackNumber);
Status InitDoubleStack(SqDoubleStack *S);
#endif //DATA_STRUCTURE_SQDOUBLESTACK_H

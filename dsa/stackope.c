#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *arr;
} ss;
int ifEmpty(ss *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int ifFull(ss *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void pushfunc(ss *ptr, int num)
{
    if (ifFull(ptr))
    {
        printf("Unable to push %d in stack full", num);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = num;
    }
}
int popf(ss *ptr)
{
    if (ifEmpty(ptr))
    {
        printf("Stack Empty");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    ss *s1 = (ss *)malloc(sizeof(ss));
    s1->size = 5;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));
    pushfunc(s1, 77);
    pushfunc(s1, 4);
    pushfunc(s1, 66);
    pushfunc(s1, 5);

    printf("***FULL : %d\n", ifFull(s1));
    printf("*** EMPTY : %d\n", ifEmpty(s1));

    printf("Popped %d from stack\n", popf(s1));
    printf("Popped %d from stack\n", popf(s1));
    printf("Popped %d from stack\n", popf(s1));
    printf("Popped %d from stack\n", popf(s1));

    printf("***FULL : %d\n", ifFull(s1));
    printf("*** EMPTY : %d\n", ifEmpty(s1));

    return 0;
}
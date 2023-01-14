#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *arr;
} ss;
int isEmpty(ss* ptr)
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
int isFull(ss *ptr)
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
int main()
{
    ss *s1;
    s1->size = 4;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));
    if (isEmpty(s1))
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack is full");
    }

    printf("hi");


    return 0;
}
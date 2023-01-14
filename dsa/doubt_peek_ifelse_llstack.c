#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} sn;
sn *top = NULL;

void display(sn *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int ifEmpty(sn *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int ifFull(sn *top)
{
    sn *n = (sn *)malloc(sizeof(sn));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
sn *pushf(sn *top, int num)
{
    if (ifFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        sn *n = (sn *)malloc(sizeof(sn));
        n->data = num;
        n->next = top;
        top = n;
        return top;
    }
}
int popf(sn *tp)
{
    if (ifEmpty(tp))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        sn *n = (sn *)malloc(sizeof(sn));
        n = tp;
        int x = n->data;
        top = tp->next;
        free(n);
        return x;
    }
}
int stackTop(sn *top)
{
    return top->data;
}
int stackBottom(sn *top)
{
    while (top->next != NULL)
    {
        top = top->next;
    }
    int z = top->data;
    return z;
}
int peek(int pos)
{
    sn *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int main()
{
    top = pushf(top, 50);
    top = pushf(top, 12);
    top = pushf(top, 24);
    top = pushf(top, 78);
    // printf("***After using push function***\n");
    // display(top);
    // popf(top);
    // printf("***After using pop function***\n");
    // display(top);
    // int y = stackTop(top);
    // int z = stackBottom(top);
    // printf("stacktop is %d\n", y);
    // printf("stackBottom is %d\n", z);
    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is %d\n",i,peek(i));
    }
    return 0;
}
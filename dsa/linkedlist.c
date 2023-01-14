#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} sn;
void display(sn *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    sn *first;
    sn *second;
    sn *third;
    sn *fourth;

    first = (sn *)malloc(sizeof(sn));
    second = (sn *)malloc(sizeof(sn));
    third = (sn *)malloc(sizeof(sn));
    fourth = (sn *)malloc(sizeof(sn));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;
    display(first);

    return 0;
}
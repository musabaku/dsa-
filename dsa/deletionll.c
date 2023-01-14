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
// sn *insert_begin(sn *first, int num)
// {
//     sn *new = (sn *)malloc(sizeof(sn));
//     new->data = num;
//     new->next = first;
//     first = new;
//     return first;
// }
// sn *insert_bw(sn *first, int num, int index)
// {
//     sn *new = (sn *)malloc(sizeof(sn));
//     sn *p = first;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     new->data = num;
//     new->next = p->next;
//     p->next = new;
//     return first;
// }
// sn *insert_end(sn *first, int num)
// {
//     sn *new = (sn *)malloc(sizeof(sn));
//     sn *p = first;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     new->data = num;
//     p->next = new;
//     new->next = NULL;
//     return first;
// }
// sn *insert_bw_givennode(sn *first, sn *prevnode, int num)
// {
//     sn *new = (sn *)malloc(sizeof(sn));
//     new->data = num;
//     new->next = prevnode->next;
//     prevnode->next = new;
//     return first;
// }
sn *deletion_begin(sn *first)
{
    sn *ptr = first;
    first = first->next;
    free(ptr);
    return first;
}
sn *deletion_end(sn *first)
{
    sn *p = first;
    sn *q = first->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return first;
}
sn *deletion_bwgivenvalue(sn *first,int num)
{
    sn *p = first;
    sn *q = first->next;
    while (q->data != num && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == num){
        p->next = q->next;
        free (q);
    }
    else {
        printf("number isnt available in linked list; LL remains unchanged\n");
    }
    return first;
}
sn *deletion_bw(sn *first, int num)
{
    sn *p = first;
    sn *q = first->next;
    int i = 0;
    while (i !=  num - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return first;
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
    // display(first);
    // printf("***After Insertion in beginning***\n");
    // first = insert_begin(first, 89);
    // display(first);
    // printf("***After Insertion in b/w***\n");
    // first = insert_bw(first, 45, 2);
    // display(first);
    // printf("***After Insertion at end***\n");
    // first = insert_end(first, 77);
    // display(first);
    // printf("***After Insertion b/w given node***\n");
    // first = insert_bw_givennode(first,third, 69);
    // display(first);
    // display(first);
    // printf("***After Deletion in beginning***\n");
    // first = deletion_begin(first);
    // display(first);
    // display(first);
    // printf("***After Deletion in between***\n");
    // first = deletion_bw(first,2);
    // display(first);
    // display(first);
    // printf("***After Deletion at end***\n");
    // first = deletion_end(first);
    // display(first);
    display(first);
    printf("***After Deletion in between with given value***\n");
    first = deletion_bwgivenvalue(first,90);
    display(first);

    return 0;
}
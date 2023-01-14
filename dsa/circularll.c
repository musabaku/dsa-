#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} sn;
void display(sn *first)
{
    sn *ptr = first;
    
    do{
        printf("element : %d\n", ptr->data);
        ptr = ptr -> next;
    } while (ptr != first);
}
sn * insert_begin(sn *first,int num){
    sn *new = (sn *)malloc(sizeof(sn));
    new->data = num;
    sn *p = first->next;
    while(p->next !=first){
        p=p->next;
    }
    p->next = new;
    new->next =  first;
    first = new;
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
    fourth->next = first;
    display(first);
    printf("**After insertion at beginning\n");
    first = insert_begin(first,50);
    display(first);
    return 0;
}
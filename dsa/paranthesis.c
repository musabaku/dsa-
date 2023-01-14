#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    char *arr;
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
void pushfunc(ss *ptr, char num)
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
char popf(ss *ptr)
{
    if (ifEmpty(ptr))
    {
        printf("Stack Empty");
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int paranthesis_matching(char *exp)
{
    ss *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            pushfunc(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (ifEmpty(sp))
            {
                return 0;
            }
            else{
            popf(sp);
            }
        }
    }
    if(ifEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char *exp = "5*(7))";
    if (paranthesis_matching(exp))
    {
        printf("paranthesis is matching\n");
    }
    else
    {
        printf("paranthesis is not matching\n");
    }
    return 0;
}
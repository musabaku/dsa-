#include <stdio.h>
#include <stdlib.h>
struct myarr
{
    int total_space;
    int used_space;
    int *ptr;
};
void create_array(struct myarr *m, int ts, int us)
{
    m->total_space = ts;
    m->used_space = us;
    m->ptr = (int *)malloc(ts * sizeof(int));
}
void setval(struct myarr *m)
{
    int n;
    for (int i = 0; i < m->used_space; i++)
    {
        printf("Enter value %d\n", i+1);
        scanf("%d", &n);
        (m->ptr)[i] = n;
    }
}
    void display(struct myarr * m)
    {
        for (int i = 0; i < m->used_space; i++)
        {
            printf("Value %d is %d\n",i+1, (m->ptr)[i]);
        }
    }
    int main()
    {
        struct myarr m1;
        create_array(&m1,15,5);
        setval(&m1);
        display(&m1);
        return 0;
    }
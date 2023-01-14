#include <stdio.h>
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Element %d is %d\n", i + 1, a[i]);
    }
}
void bubble_sort(int *a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            
        }
    }
}
    int main()
    {
        int a[] = {11, 22, 3, 44, 5, 66};
        int n = 6;
        printf("Before sorting\n");
        display(a, n);
        bubble_sort(a, n);
        printf("After sorting\n");
        display(a, n);
        return 0;
    }
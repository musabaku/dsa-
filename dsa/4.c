#include <stdio.h>
int arr_update(int arr[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

void beforeins_display(int arr[], int size)
{
    printf("Before deletion \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void display(int arr[], int size)
{
    printf("deletion successfull\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100] = {12, 14, 16, 18, 20};
    int size = 5, capacity = 10, index = 2, new_num = 45;
    display(arr, size);
    arr_update(arr, size,index);
    size -= 1;
    display(arr, size);

   
    return 0;
}
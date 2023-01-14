#include <stdio.h>
int arr_update(int arr[], int size, int capacity, int index, int new_num)
{
    if (size >= capacity)
    {
        printf(" size is more than available capacity, insertion unsuccessfull \n");
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[index] = new_num;
        return 1;
    }
}
void beforeins_display(int arr[], int size)
{
    printf("Before insertion \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void afterins_display(int arr[], int size)
{
    printf("insertion successfull\n");

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
    beforeins_display(arr, size);
    arr_update(arr, size, capacity, index, new_num);
    size += 1;
    if(size<=capacity){
    afterins_display(arr, size);
    }

    return 0;
}
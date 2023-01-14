#include<stdio.h>
void display(int arr[],int n){
    for(int i = 0 ; i <= n ;i ++){
printf("%d\n",arr[i]);
    }
}
int main(){
    int arr[50] = {0,1,2,3};
    int size = 3;
    display ( arr, size);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
void display_arr(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}
void insertion_arr(int arr[],int size, int index,int element,int capacity){
    if(size>=capacity)
    {
        printf("Sorry Bro ! insertion failed");

    }
    for(int i= size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
int main()
{
    int arr[100]={4,5,6,4};
    printf("before insertion");
    display_arr(arr,4);

    int size=4;
    int element=55;
    int index=2;
    insertion_arr(arr,size, index, element,100);
    size=size+1;
    printf("\n");

    printf("\nCongratulation! insertion successful");

    display_arr(arr,size);
    return 0;
}

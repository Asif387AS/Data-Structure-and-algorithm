#include <stdio.h>
#include <stdlib.h>
void display_arr(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void deletion_arr(int arr[],int size, int index){
  //  if(index>=capacity)
    //{
      //  printf("Sorry Bro ! insertion failed");

    //}
    for(int i= index; i<size-1; i++){
        arr[i]=arr[i+1];
}
//    arr[index]=element;
}
int main()
{
    int arr[100]={4,5,6,4};
    //int size=sizeof(arr)/sizeof(int);
    int size=4;
    printf("before insertion");
    display_arr(arr,size);

    int element=55;
    int index=0;
    deletion_arr(arr,size, index);
    size=size-1;
    printf("\n");

    printf("\nCongratulation! insertion successful");

    display_arr(arr,size);
    return 0;
}


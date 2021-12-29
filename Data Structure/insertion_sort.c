
#include<stdio.h>
#include<stdlib.h>
void printArray(int A[],int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", A[i]);
    }
    printf("\n");
}
void insertionSort(int* A, int n){
    int j,key;
    for(int i=1; i<=n-1;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key)
        {
        A[j+1]=A[j];
        j--;
        }
    A[j+1]=key;
    }

}
int main(){
     int A[]={33,44,42,62,63,13};
     int n=6;
     printf("The unsorted array is before sorting  : ");
     printArray(A,n);
     insertionSort(A,n); //function to sort the array 
     printf("The sorted array is after sorting : ");
     printArray(A,n);
     return 0;
}
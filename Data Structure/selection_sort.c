#include<stdio.h>
void printArray(int A[],int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionSort(int A[], int n){
    printf("Selection Sort is running\n");
    int indexOfMin,temp;
    for(int i=0; i<n-1;i++){
        indexOfMin=i;
        for(int j=i+1; j<n-1;j++){
           if(A[j]<A[indexOfMin]){
                  indexOfMin=j;
           }
        }
        temp=A[i];
        A[i]=A[indexOfMin];
        A[indexOfMin]=temp;
    }
}
int main (){
    int A[]={33,15,6,7,4};
    int n=5;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
    return 0;

}
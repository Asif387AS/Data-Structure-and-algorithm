#include<stdio.h>
#include<stdlib.h>
void printArray(int A[],int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", A[i]);
    }
    printf("\n");
}
void adpativeBubbleSort(int* A, int n){
           int isSorted=0;
            int temp;
    for (int i = 0; i < n-1; i++)  //for number of passes
    {
        printf("Working on pass %d\n", i+1);
         isSorted=1;
      for (int j = 0; j < n-1; j++)//for number of comparison
      {
         
          if (A[j]>A[j+1])
          {
              temp=A[j];
              A[j]=A[j+1];
              A[j+1]=temp;
              isSorted=0;
          }
          
      }
      if (isSorted)
      {
         return;
      }
      
    }
    
}

// void printArray(int A[],int n){
//     for (int i = 0; i < n; i++)
//     {
//        printf("%d ", A[i]);
//     }
//     printf("\n");
// }
// void bubbleSort(int* A, int n){
        
//             int temp;
//     for (int i = 0; i < n-1; i++)  //for number of passes
//     {
//         printf("Working on pass %d\n", i+1);
//       for (int j = 0; j < n-1; j++)//for number of comparison
//       {
         
//           if (A[j]>A[j+1])
//           {
//               temp=A[j];
//               A[j]=A[j+1];
//               A[j+1]=temp;
//           }
          
//       }
      
//     }
    
// }
int main (){
    // int A[]={33,44,42,62,63,13};
    int A[]={1,2,3,4,5,6};
    int n=6;
    printArray(A,n);//printing array before sorting 
    adpativeBubbleSort(A,n);
    // bubbleSort(A,n);
    printArray(A,n);// printing array after sorting 
    return 0;

}
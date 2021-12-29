//#include<iostream>
#include<stdio.h>
 //int linearSearch(int arr[],int size,int element){
//for(int i=0; i<size; i++){
  //  if(arr[i]==element){
    //return i;

 //   }
//}
//return -1;

//}

int binarySearch(int arr[], int size , int element){
int low,mid ,high;
low=0;
high=size-1;
while(low<=high){
  mid=(low+high)/2;
  if(arr[mid]==element){
    return mid;
  }
  else if(arr[mid]<element){
    low=mid+1;
  }
  else{
    low=mid-1;
  }
  }
  return -1;
}
int main()
{
    //unsorted array for linear search
    int arr[]={3,4,6,1,7,55,8, 23,8,9};
    int size=sizeof(arr)/sizeof(int);
    int element=8;
    int foundele=linearSearch(arr,size,element);
    printf("The element %d is found at index arr%d\n", element, foundele);
    return 0;

}
//int arr[]={1,5,2,44,66,6,77,78,99};
//int elememt=77;
//int size=sizeof(arr)/sizeof(int);
//int searchIndex=linearSearch(arr, size, element);
//printf("The element %d found at index %d", elememt, searchIndex);
//return 0

//sorted array for binary search
int arr[]={1,44,66,77,78,99};
int elememt=77;
int size=sizeof(arr)/sizeof(int);
int searchIndex=binarySearch(arr, size, element);
printf("The element %d found at index %d", elememt, searchIndex);
return 0;


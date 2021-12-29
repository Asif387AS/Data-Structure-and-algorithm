#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top=NULL;

 void linkListTraversal(struct Node*ptr){
 while(ptr!=NULL){

    printf("Element:%d\n ",ptr->data);
    ptr=ptr->next;
 }
 }
int isEmpty(struct Node*top){
if(top==NULL){
    return 1;
}
else{
    return 0;
}
}
int isFull(struct Node*top){
struct Node* p=(struct Node*)malloc(sizeof(struct Node));
if(p==NULL){
    return 1;
}
else{
    return 0;
}
}
struct Node* push(struct Node* top, int x){
struct Node* n=(struct Node*)malloc(sizeof(struct Node));
if(isFull(top)){
    printf("STACK OVERFLOW\n");
}
else{
n->data=x;
n->next=top;
top=n;
}
}
int pop(struct Node *tp){
// top is a local variable that is why we cannot change it so first we deference it and send its adress as argument 
// if we want to not use this method we make a separate program which is stack_using_linklist2
if(isEmpty(tp)){
    // we cannot make the same name of local and global varibles
    printf("STACK UNDERflow\n");
}
else{
    struct Node* n=tp;
top=(tp)->next;
int x=n->data;
free(n);
return x; 
}
}
int main(){

top=push(top,44);
top=push(top,56);
top=push(top,87);
linkListTraversal(top);

int element=pop(top);
printf("The Popped Element is %d\n",element);
linkListTraversal(top);
// printf(top);
    return 0;
}
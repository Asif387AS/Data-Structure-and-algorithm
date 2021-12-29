#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
 void linkListTraversal(struct node*ptr){
 while(ptr!=NULL){

    printf("%d ",ptr->data);
    ptr=ptr->next;
 }
 }
int main()
{
struct node*head;
struct node*second;
struct node*third;   
struct node*fourth;

//Allocate memory for nodes in linked list in heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

    //link head and second node
    head->data=5;
    head->next=second;

    //link head and second node
    second->data=6;
    head->next=third;
    //link head and second node
    third->data=5;
    head->next=fourth;
    //link head and second node
    fourth->data=5;
    head->next=NULL;

    linkListTraversal(head);
    return 0;
}

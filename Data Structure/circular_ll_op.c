
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}; 
/*
 void linkListTraversal(struct node *head){
        struct node *ptr=head;
 printf("Element is is =%d ",ptr->data);
    ptr=ptr->next;
 while(ptr!=head){

    printf("Element is =%d ",ptr->data);
    ptr=ptr->next;
 }*/
  void linkListTraversal(struct node *head){
        struct node *ptr=head;
        do{
             printf("Element is  =%d\n ",ptr->data);
             ptr=ptr->next;
          }
            while(ptr!=head);

 }
 struct node * insertNodeAtFirst(struct node * head , int data){
 struct node *ptr= (struct node*) malloc(sizeof(struct node));
 struct node * p= head->next;
 ptr->data=data;
 while(p->next!=head){
    p=p->next;
 }
 //at this point p points to the last nodeo of this circular linked list
 p->next=ptr;
 ptr->next=head;
 head=ptr;
 return head;
 }
int main()
{

struct node *head;
struct node *second;
struct node *third;
struct node *fourth;

//Allocate memory for nodes in linked list in heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

    //link head and second node
    head->data=53;
    head->next=second;

    //link head and second node
    second->data=6;
    second->next=third;
    //link head and second node
    third->data=57;
    third->next=fourth;
    //link head and second node
    fourth->data=5;
    fourth->next=head;
printf("Before deletion circular Link list is like that \n");

    linkListTraversal(head);
    head=insertNodeAtFirst(head,44);
    printf("circular Linked list after insertion at first is a as\n");
    linkListTraversal(head);

    return 0;
}

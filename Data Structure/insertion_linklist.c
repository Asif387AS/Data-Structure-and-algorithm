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

 struct node* insertNodeFirst(struct node *head, int data){
 struct node* ptr= (struct node*)malloc(sizeof(struct node));
 ptr->data=data;
 ptr->next=head;
 return ptr;
 }
 struct node* insertNodeIndex(struct node *head, int data, int index){
 struct node* ptr= (struct node*)malloc(sizeof(struct node));
 struct node *p= head;
 int i=0;
 while(i!=index-1)
 {
     p=p->next;
     i++;
 }
 ptr->next=p->next;
 ptr->data=data;
 p->next=ptr;
 return head;
 }
 struct node* insertNodeLast(struct node *head, int data, int index){
 struct node* ptr= (struct node*)malloc(sizeof(struct node));
 struct node *p= head;
 int i=0;
 while(ptr->next!=NULL)
 {
     p=p->next;

 }
 p->next=ptr;
 ptr->next=NULL;
 ptr->data=data;
 return head;
 }
 struct node* inserAfterNode(struct node *head, int data, struct node * prevptr){
 struct node* ptr= (struct node*)malloc(sizeof(struct node));
 struct node *p= head;
ptr->data=data;
ptr->next=prevptr->next;
prevptr->next=ptr;
return head;
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
printf("before insertion\n");
    linkListTraversal(head);
    head=insertNodeFirst(head,44);
  //  printf("after insertion");
        //linkListTraversal(head);

      //  head=insertNodeIndex(head, 33, 1);
    //linkListTraversal(head);

        //head=insertNodeLast(head, 33, 1);
        head=insertAfterNode(head, 44,second);
    linkListTraversal(head);
    return 0;
}


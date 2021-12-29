#include<stdio.h>
#include<stdlib.h>
    // printf("This program is about LInklist deletion");
    struct node{
int data;
struct node*next;
};
 void linkListTraversal(struct node*ptr){
 while(ptr!=NULL){

    printf("Element %d\n ",ptr->data);
    ptr=ptr->next;
 }
 }

 //delete elememt from first location in linkned list
 struct node* deletefirst(struct node* head){
 struct node * ptr=head;
 head=head->next;
 free(ptr);
 return head;
 }
 //delete node at the given index in linked list
 struct node* deleteAtIndex(struct node* head,int index){
 struct node* p=head;
 struct node * q= head->next;
 for(int i=0; i<index-1;i++){
    p=p->next;
    q=q->next;
 }
 p->next=q->next;
 free(q);
 return head;
 }
 //delete node at the last in linked list
 struct node* deleteAtLast(struct node* head){
 struct node* p=head;
 struct node * q= head->next;
 while(q->next!=NULL){
    p=p->next;
    q=q->next;
 }
p->next=NULL;
 free(q);
 return head;
 }

  //delete node with given value in linked list
 struct node* deleteWithValue(struct node* head,int value){
 struct node* p=head;
 struct node * q= head->next;
 while(q->data!=value && q->next!=NULL){
    p=p->next;
    q=q->next;
 }
 if(q->data==value){
 p->next=q->next;
 free(q);
 }
  return head;

 }
int main(){
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
    head->data=53;
    head->next=second;

    //link head and second node
    second->data=63;
    second->next=third;
    //link head and second node
    third->data=43;
    third->next=fourth;
    //link head and second node
    fourth->data=56;
    fourth->next=NULL;
printf("Lined list before Deletion\n");
    linkListTraversal(head);
    //head=deletefirst(head);  //delete element at first location in linked list
    //head=deletefirst(head);  //delete element after first  in linked list
  //  printf("Lined list before Delection\n");
//    linkListTraversal(head);

  //  head=deleteAtIndex(head,1);
  //  printf("Linked list after deletion at given location \n");
//linkListTraversal(head);

//printf("LInked list after deletion at last\n");
//head=deleteAtLast(head);
//linkListTraversal(head);

head=deleteWithValue(head,56);
printf("LInked list after deletion with given value\n");
linkListTraversal(head);
    return 0;

}

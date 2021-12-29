#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
struct node* prev;
};

void doublylinktraversal(struct node* head){
struct node* ptr=head;
while(ptr!=NULL){
    printf("Element: %d\n", ptr->data);
    ptr=ptr->next;
}
}
void dbreverse(struct node* head, int index){
struct node* ptr=head;
ptr=index;
while(ptr!=NULL){
    printf("elelment %d \n", ptr->data);
    ptr=ptr->prev;
}
}
int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

     head->prev=NULL;
     head->data=33;
     head->next=second;

     second->prev=head;
     second->data=44;
     second->next=third;

     third->prev=second;
     third->data=55;
     third->next=fourth;

     fourth->prev=third;
     fourth->data=66;
     fourth->next=NULL;

printf("Doubly link list in forward order \n");
 doublylinktraversal(head);
 printf("Doubly link list in reverse order\n");
 dbreverse(head, fourth);
}

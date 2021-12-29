#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node *n;
n=(struct node*)malloc(sizeof(struct node));
n->data=data;
n->left=NULL;
n->right=NULL;
return n; 
}
struct node* searchIter(struct node* root, int key){
  while(root!=NULL){
      if(key==root->data){
          return root;
      }
      else if(key<root->data){
          root=root->left;
      }
      else{
          root=root->right;
      }
  }
      return NULL;
}
int main(){
    /*
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
p->data=4;
p->left=NULL;
p->right=NULL; 

struct node *p1;
p1=(struct node*)malloc(sizeof(struct node));
p1->data=4;
p1->left=NULL;
p1->right=NULL; 

struct node *p2;
p2=(struct node*)malloc(sizeof(struct node));
p2->data=4;
p2->left=NULL;
p2->right=NULL; 

p->left=p1;
p->right=p2;
*/
struct node* p=createNode(4);
struct node* p1=createNode(5);
struct node* p2=createNode(1);
struct node* p3=createNode(8);
struct node* p4=createNode(6);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->left=p4;
struct node* n=searchIter(p,6);
if(n!=NULL){
    printf("Found %d",n->data);
} 
else{
    printf("Element Not found");
}
return 0;
}
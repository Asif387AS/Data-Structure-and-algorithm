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

void inOrder(struct node* root){
    if(root!=NULL){
         inOrder(root->left);
        printf("%d ",root->data);
         inOrder(root->right);
    }
}

struct node * inOrderPredecessor(struct node *root){
root=root->left;
while(root->right!=NULL){
    root=root->right;
}
return root;
}
struct node* deleteNode(struct node* root, int value){
    struct node* iPre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULl){
        free(root);
        return NULL;
    }
//  searching the node in the BST to be deleted?
if(value<root->data){
   root->left= deleteNode(root->left, value);
}
else if(value>root->data){
   root->left= deleteNode(root->right,value);
}
// Deletion strategy when node found 
else{
    iPre=inOrderPredecessor(root);
    root->data=iPre->data;
  root->left=  deleteNode(root->left,iPre->data);
}

 return root;
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
 
 inOrder(p);
 deleteNode(p,4);
 printf("\n");
 printf("|Data is %d|", p->data);
 inOrder(p);

return 0;
}
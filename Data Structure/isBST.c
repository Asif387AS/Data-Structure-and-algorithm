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

int isBST(struct node* root){
    if(root!=NULL){
    static struct node* prev=NULL;
    if(!isBST(root->left)){
        return 0;
    }
    if(prev!=NULL && root->data <= prev->data){
        return 0;
    }
    root=prev;
    return isBST(root->right);
    }
    else{
        return 1;
    }
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
struct node* p=createNode(5);
struct node* p1=createNode(3);
struct node* p2=createNode(6);
struct node* p3=createNode(1);
struct node* p4=createNode(4);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->left=p4;

// preOrder(p);
// printf("\n");
// postOrder(p);
// printf("\n");
// inOrder(p);
isBST(p);
return 0;
}
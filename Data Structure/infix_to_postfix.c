#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr)
{

    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

char push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflow the Element %d cannot be pushed into stack", val);
        return -1;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        return val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow the Element  cannot be poped from  stack");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char stackTop(struct stack* ptr){
    return ptr->arr[ptr->top];
}
int precedence(char ch){
if (ch=='*'||ch=='/')
{
    return 3;
}
else if (ch=='+'||ch=='-')
{
    return 2;
}
else
    return 0;
}
int isOperator(char ch){
    if(ch=='+'||ch=='/'||ch=='*'||ch=='-')
    {
        return 1;
    }
    else
    return 0;
    
}



char *infixToPostfix(char *infix){
    struct stack* sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size *sizeof(char));
    char *postfix=(char*)malloc((strlen(infix)+1) *sizeof(char));
    int i=0; //track infix traversal
    int j=0; //track postfix addition
    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])> precedence(stackTop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
            while (!isEmpty(sp)){
                postfix[j]=pop(sp);
                j++;
            }
            postfix[j]='\0';
            return postfix;
           
            
        }
    
    }}   

int main()
{
char *infix="a-(b+c)";   
printf("postfix is %s", infixToPostfix(infix)); 

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
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
int match(char a, char b){
    if(a=='('&&b==')'){
        return 1;
    }
    if(a=='{'&&b=='}'){
        return 1;
    }
    if(a=='['&&b==']'){
        return 1;
    }
    return 0;
}
int paranthesisMatch(char * exp){
    struct stack* sp;
    sp->size=100;
    sp->top=-1;
     sp->arr = (char*)malloc(sp->size*sizeof(char));
     char popped_ch;
     for (int i = 0; i < exp[i]!='\0'; i++)
     {
         if (exp[i]=='('||exp[i]=='{'||exp[i]=='[')
         {
             push(sp,'(');
         }
         else if (exp[i]==')'||exp[i]=='}'||exp[i]==']')
         {
             if(isEmpty(sp)){
                 return 0;
             }
           popped_ch= pop(sp);
           if (!match(popped_ch,exp[i]))
           {
               return 0;
           }
           
         }
         if (isEmpty(sp))
         {
             return 1;
         }
         else return 0;
         
         
         
     }
     
}
int main()
{
    char* exp= "8*(9";
    if(paranthesisMatch(exp)){
        printf("The paranthesis is matching");
    }
    else{
        printf("The paranthisis is not matching");
    }
    return 0;
}
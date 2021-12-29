#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
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

int push(struct stack *ptr, int val)
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

int pop(struct stack *ptr)
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

int peek(struct stack *ptr, int i)
{
    int arrayIndex = ptr->top - i + 1;          //position:index
    if (arrayIndex < 0)                         // 3:2
    {                                           // 2:1
        printf("Invalid position for stack\n"); // 1:0
        return -1;
    }
    else
    {
        return ptr->arr[arrayIndex];
    }
}
int stackTop(struct stack* ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack* ptr){
    return ptr->arr[0];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sizeof(int));
    printf("Stack has been successfully created\n");

    printf("Before pushing,full:%d\n", isFull(sp));
    printf("Before pushing,empy:%d\n", isEmpty(sp));

    printf("Element %d is pushed into stack\n", push(sp, 53));
    printf("Element %d is pushed into stack\n", push(sp, 27));
    printf("Element %d is pushed into stack\n", push(sp, 55));
    printf("Element %d is pushed into stack\n", push(sp, 24));
    printf("Element %d is pushed into stack\n", push(sp, 64)); //-->pushed 5 vlaues
    // printf("Element %d is pushed into stack\n", push(sp, 44)); //-->cannot pushed since the size of stack is  5

    // push(sp, 24);
    // push(sp, 66);
    // push(sp, 44);
    // push(sp, 33);
    // push(sp, 44);

    printf("after pushing,full:%d\n", isFull(sp));
    printf("after pushing,empy:%d\n", isEmpty(sp));

    // printf("Element %d is pop from stack\n", pop(sp));
    // printf("Element %d is pop from stack\n", pop(sp));
    // printf("Element %d is pop from stack", pop(sp));

    // printing the stack element by peek operation
    for (int i = 0; i < sp->top + 1; i++)
    {
        printf("The value at position %d is %d\n", i, peek(sp, i));
    }
    printf("The topmost value of stack is %d\n",stackTop(sp));
    printf("The Bottommost value of stack is %d",stackBottom(sp));
}
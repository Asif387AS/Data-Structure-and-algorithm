#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int r;
    int f;
    int* arr;
    int size;
};
int isFull(struct queue *q){
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0;
    
}
int isEmpty(struct queue *q){
    if (q->r==q->f==-1)
    {
        return 1;
    }
   return 0;
    
}
int enqueue(struct queue *q, int val){
    if (isFull(q))
    {
        printf("This queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        return q->arr[q->r];
   

    }
    
}
int dequeue(struct queue *q){
    int a=-1;
    if (isEmpty(q))
    {
        printf("This queue is Empty");
    }
    else{
        q->f++;
        a=q->arr[q->f];
return a;
    }
    
}
int main(){
struct queue q;
q.size=200;
q.f=q.r=-1;
q.arr=(int*)malloc(q.size*sizeof(int));

if(isEmpty(&q)){
    printf("Queue is Empty\n");
}


// Enqueue few Elements
printf("The enequed Element in the queue is %d\n", enqueue(&q,44));
printf("The enequed Element in the queue is %d\n", enqueue(&q,45));
printf("The enequed Element in the queue is %d\n", enqueue(&q,46));
//  dequeue few Elements 
printf("The dequeued Element from Queue is %d\n", dequeue(&q));
printf("The dequeued Element from Queue is %d\n", dequeue(&q));
printf("The dequeued Element from Queue is %d\n", dequeue(&q));
if(isEmpty(&q)){
    printf("Queue is Empty\n");
}
else{
    printf("Some Elements in Queue\n");
}
if (isFull(&q))
{
    printf("This Queue is Full\n");
}


    return 0;
}
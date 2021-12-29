#include<stdio.h>
#include<stdlib.h>
struct circularQueue
{
    int r;
    int f;
    int* arr;
    int size;
};
int isFull(struct circularQueue *q){
    if (((q->r+1)%q->size==q->f) )
    {
        return 1;
    }
    return 0;
    
}
int isEmpty(struct circularQueue *q){
    if (q->r==q->f)
    {
        return 1;
    }
   return 0;
    
}
int enqueue(struct circularQueue *q, int val){
    if (isFull(q))
    {
        printf("This queue is full\n");
    }
    else{
     q->r=(q->r+1)% q->size;
        q->arr[q->r]=val;
        return q->arr[q->r];
        // printf("Enqued element :%d\n",val);
   

    }
    
}
int dequeue(struct circularQueue *q){
    int a=-1;
    if (isEmpty(q))
    {
        printf("This queue is Empty\n");
    }
    else{
        q->f=(q->f+1)% q->size;
        a=q->arr[q->f];
return a;
    }
    
}
int main(){
struct circularQueue q;
q.size=4;
q.f=q.r=0;//in normal queue take fronat and rear equal to -1 and in circular queue take front and rear 0 ...want to take the one position remain emty to differentiate front and rear and in this way we can insert element circulatory and in circular queue we can dequeu element and then insert new element in place of those and in linear queue once element is insert then we cannot insert element even if we dequeue the elelemnt 
q.arr=(int*)malloc(q.size*sizeof(int));

if(isEmpty(&q)){
    printf("Queue is Empty\n");
}


// Enqueue few Elements
printf("The enequed Element in the queue is %d\n", enqueue(&q,44));
printf("The enequed Element in the queue is %d\n", enqueue(&q,45));
printf("The enequed Element in the queue is %d\n", enqueue(&q,46));
printf("The enequed Element in the queue is %d\n", enqueue(&q,47));

//  dequeue few Elements 
printf("The dequeued Element from Queue is %d\n", dequeue(&q));
printf("The dequeued Element from Queue is %d\n", dequeue(&q));
printf("The dequeued Element from Queue is %d\n", dequeue(&q));
printf("The dequeued Element from Queue is %d\n", dequeue(&q));

printf("The enequed Element in the queue is %d\n", enqueue(&q,47));
printf("The enequed Element in the queue is %d\n", enqueue(&q,47));
printf("The enequed Element in the queue is %d\n", enqueue(&q,47));
printf("The enequed Element in the queue is %d\n", enqueue(&q,47));
// printf("The enequed Element in the queue is %d\n", enqueue(&q,47));
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
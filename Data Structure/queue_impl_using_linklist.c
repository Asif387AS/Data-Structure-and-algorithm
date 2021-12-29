#include <stdio.h>
#include <stdlib.h>
struct Node *f=NULL;
struct Node *r=NULL;

struct Node
{
    int data;
    struct Node *next;
};
void linkListTraversal(struct Node *ptr)
{
    printf("printing the element of the link list \n");
    while (ptr != NULL)
    {

        printf("Element: %d\n ", ptr->data);
        ptr = ptr->next;
    }
}
void enqueu(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        { //special case when front and rear is NULL
            f=r=n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue()
{
    int val=-1;
    struct Node *ptr=f;
    if (f == NULL)
    {
        printf("Queue Empty\n");
    }
    else
    {
        f=f+1;
        val=ptr->data;
        free(ptr);
}
return val;
}
int main()
{
   linkListTraversal(f);//front pointer  is passed bcz traversal will stat from frot not from rear bcz all elements are the front of front pointer
   //if make the global variable then we do not need to pass it as argument bcz it will take it globally automatically
   printf("Dequed element from queue %d \n", dequeue());
   enqueu(4);
   enqueu(5);
   enqueu(6);
   printf("Dequed element from queue %d \n", dequeue());
   linkListTraversal(f);
    return 0;
}
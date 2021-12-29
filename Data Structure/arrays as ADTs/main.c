#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray*a, int tsize,int usize )
{
    //(a*).total_size=tsize;
    //(a*).used_size=usize;
    //(a*).ptr=(int*)malloc(tsize*sizeof(int));
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void setVal(struct myArray*a)
{
    int n;
    for(int i=0; i<a->used_size; i++)
    {
        printf("Enter the value %d",i);
        scanf("%d\n",&n);n
        (a->ptr)[i]=n;

    }
}
void show(struct myArray*a)
{
    for(int i=0; i<a->used_size; i++)
    {
        printf("%d", (a->ptr)[i]);
    }
}
int main()
{
struct myArray marks;
   createArray(&marks,10,2);
   printf("we are running setValue now\n");
   setVal(&marks);
   printf("we are running show now ");
   show(&marks);
    return 0;
}

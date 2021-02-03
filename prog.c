#include <stdio.h>
struct queue{
     int size;
     int f;
     int r;
     int *arr;
};
void enqueue(struct queue *q,int val)
{
    if(q->r==size-1)
    {
        print("this queue is full";
        
    }
    else
    {
        q->r++;
        q->arr[q->r]=val
    }
    
}
int main()
{
    struct queue;
    q.size=100;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*(sizeof(int)));
enqueue(&q,12);
enqueue(&q,52);
    return 0;
}
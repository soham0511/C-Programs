#include <stdio.h>
#include <stdlib.h>

struct stack
{
   int size;
    int top;
    int *arr;
};

    int isempty(struct stack *ptr)
    {
        if(ptr->top==-1)
        return 1;
        else
        {
            return 0;
        }
        
    }
    int isfull(struct stack *ptr)
    {
         if(ptr->top==ptr->size-1)
        return 1;
        else
        {
            return 0;
        }
    }

    void push(struct stack*ptr,int val)
    {
        if(isfull(ptr))
        {
            printf("stack overflow");
        }
        else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
    }
    
    int pop(struct stack*ptr)
    {
        int v;
        if(isempty(ptr))
        {
            printf("stack underflow");
        }
        else{
        
        v=ptr->arr[ptr->top];
        ptr->top--;
        return v;
    }
    }
    
int main()
{
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=    (int*)malloc(sp->size*sizeof(int));
    return 0;
    int n;
        push(sp,45);
      push(sp,56);
        push(sp,34);
    
    push(sp,23);
    printf("element popped from stack ",pop(sp));
    return 0;
}
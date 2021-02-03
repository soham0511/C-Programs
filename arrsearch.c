#include <stdio.h>
#include<stdlib.h>
struct myarray
{
    int total;
    int used;
    int *ptr;
};
void createarray(struct myarray * a,int tsize,int usize)
{
    // (*a).total=tsize;
    // (*a).used=usize;    
    // (*a).ptr=(int*)malloc(tsize*sizeof(int));
     a->total=tsize;
    a->used=usize;    
    a->ptr=(int*)malloc(tsize*sizeof(int));

}

void setval(struct myarray * a)
{
    for(int i=0;i<a->used;i++)
    {
        int n;
        printf("enter the element");
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}

void show(struct myarray * a)
{
    for(int i=0;i<a->used;i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}
int main()
{
    struct myarray marks;
    createarray(&marks,10,2);
    setval(&marks);
    show(&marks);
    return 0;
}
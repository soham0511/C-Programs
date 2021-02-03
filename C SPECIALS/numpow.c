#include <stdio.h>
void main()
{
    int a,n,b;
    int c=0;
    printf("enter the numebr");
    scanf("%d",&n);
    a=n;
    printf("enter the base number");
    scanf("%d",&b);
    while(n>1)
    {
        
        n=n/b;
        c++;

    }
    printf("pwer of %d in %d is %d",a,b,c);
}
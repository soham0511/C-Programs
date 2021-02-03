#include <stdio.h>
void main()
{
    int n,d,a;
    int c=0;
    printf("enter a number");
    scanf("%d", &n);
    while (n > 0)
    {
        c++;
        d=n%10;
        a=a+d*10;
        n/=10;
        
    }
    printf("number of digits is %d",c);
}

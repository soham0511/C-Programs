#include <stdio.h>

void main()
{
    int n, d=0;
    int a=0,b=0;
    printf("enter a number");
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            d = d * 10 + 0;
        }
        else
        {
            d = d * 10 + 1;
        }
        n/=2;
    }
    while(d>0)
    {
        a=d%10;
        b=b*10+a;
        d/=10;

    }
    printf("number in binary   %d", b);
}
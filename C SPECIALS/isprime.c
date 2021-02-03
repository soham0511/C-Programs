#include <stdio.h>

void main()
{
    int n, c = 0;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
        else
        {
            continue;
        }
    }
    if (c == 2)
    {
        printf("prime number");
    }
    else if(c>2)
    {
        printf("not prime number");
    }
}
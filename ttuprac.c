#include <stdio.h>

int main()
{
    int c;
    printf("enter '0' for triangle and '1' for reverse triangle");
    scanf("%d",&c);
    if (c == 0)
    {
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (c == 1)
    {
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 4; j >= i; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}

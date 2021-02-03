#include <stdio.h>

int main()
{
    int num, j, i, p = 1;
    printf("enter a number whose table you want to see");
    scanf("%d", &num);
    for (j = 1; j <= num; j++)
    {
        for (i = 1; i <= 10; i++)
        {
            p = j * i;
            printf("%d X %d =%d", j, i, p);
            printf("\n");
            p = 1;
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the size of array\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no. %d of this array\n", i, ptr[i]);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d of this array %d\n", i, ptr[i]);
    }

    printf("enter the size of  new array\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no. %d of this array\n", i, ptr[i]);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d of this array %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}
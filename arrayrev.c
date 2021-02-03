#include <stdio.h>
#include <string.h>
void rev(int a[])
{
    int temp;
    for (int i = 0; i < 5 / 2; i++)
    {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }
   
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("before reversal\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("array after reversal\n");

    rev(arr);
     for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

#include <stdio.h>

func1(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    *(ptr+0)=34;
    
}
int main()
{
    int a[] = {1, 2, 34};
    printf("value 1 is %d\n", a[0]);
    func1(a);
    printf("value 1 is %d\n", a[0]);
    return 0;
}
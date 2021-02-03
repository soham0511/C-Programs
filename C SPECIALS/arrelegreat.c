#include <stdio.h>

int main()
{
    int d;
    int a[4]={1,4,56,8};
    for(int i=0;i<3;i++)
    {
        if (a[i]>a[i+1])
        {
            d=a[i];
        }
        else
        {
            d=a[i+1];
        }
        
        
    }
    printf("greatest number is %d \n",d);
}
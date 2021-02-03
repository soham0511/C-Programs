#include <stdio.h>
int b=34
int func1(int b)
{
    printf("address of bin func1 %d \n",&b);
    
    return (b*10);
}
int main()
{
    
    printf("the address of b in main %d\n",&b);
    int val=func1(b);
    int *ptr=&val;
    printf("the value of func1 %d\n",val);    
    return 0;
}
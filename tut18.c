#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void greethelloexecute(int (*fptr(int, int)))
    {
    printf("hello user\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
    }

void greetgmandexecute(int (*fptr(int, int)))
{
    printf("good morning\n");
    printf("the sum of 5 and 7 is %d\n", fptr(5, 7));
}
int main()
{
    int (*fptr)(int, int);
    fptr = &sum; // also correct fptr=&sum

    greethelloexecute(fptr);
   

    return 0;
}
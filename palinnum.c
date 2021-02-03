#include <stdio.h>
#include <stdlib.h>
int a=0;
int isPalindrome(int number)
{
    int n=number;
    int d=1;
    while(n>0)
    {
        d=n%10;
        a=a*10+d;
        n=n/10;
    }
    if(number==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    if (isPalindrome(number) == 1)
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }

    return 0;
}

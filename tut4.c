#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int n,i=0;
    
   for(;i<3;i++)
    {
        printf("enter the number of cahrecters in  eid \n",i);
        scanf("%d", &n);
        
        ptr = (char *)malloc((n+1) * sizeof(char));
     
        printf("enter eid of employee %d\n",i);
        scanf("%s",ptr);
        free(ptr);
        
    }

    return 0;
}
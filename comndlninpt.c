#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char * op;
    int n1,n2;
    op=argv[1];
    n1=atoi(argv[2]);
    n2=atoi(argv[3]);
    
    if(stricmp("add",op)==0)
    {
        printf("the result is %d\n",(n1+n2));
    }
    else if(stricmp("subtract",op)==0)
    {
        printf("the result is %d\n",(n1-n2));
    }
    else if(stricmp("multiply",op)==0)
    {
        printf("the result is %d \n",(n1*n2));
    }
    else if(stricmp("divide",op)==0)
    {
        printf("the result is %d \n",(n1/n2));
    }
    return 0;
}


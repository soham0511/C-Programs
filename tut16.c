#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("the file name is %s\n",__FILE__);
    printf("the date is %s\n",__DATE__);
    printf("THE TIME IS %s \n",__TIME__);
    printf("the line no. is %d\n",__LINE__);
    printf("ANSI %d\n",__STDC__);
    return 0;
}
#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string[34]="this file is for tutorial 17   ";
   // ptr = fopen("myfile.txt", "r");
   // fscanf(ptr, "%s", string);
   // printf("the content on this file has %s\n", string);

   ptr=fopen("myfile.txt","a");
   fprintf(ptr,"%s",string);
    return 0;
}
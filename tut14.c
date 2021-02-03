#include <stdio.h>

int main()
{
    FILE *ptr=NULL;
    ptr=fopen("myfile.txt","a+");
    //char str[67];
    //fgets(str,65,ptr);
    //printf("the string is %s\n",str);
   //printf("this charecter is %c\n",c);
   //  c=fgetc(ptr);
   // printf("this charecter is %c\n",c);
   //  c=fgetc(ptr);
  //  printf("this charecter is %c\n",c);
  //   c=fgetc(ptr);
  //  printf("this charecter is %c\n",c);
  //   c=fgetc(ptr);
  //  printf("this charecter is %c\n",c); 
  fputc('o',ptr);
  fputs("this is soham",ptr);
    return 0;
}
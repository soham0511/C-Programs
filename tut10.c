#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char grade;
    char name[20];
}; 

int main()
{
    union student s1;
    s1.id = 1;
    s1.marks = 34;
    s1.grade = 'a';
    strcpy(s1.name, "soham srimany");
    printf("the id is %d\n",s1.id);
    puts(s1.name);
    printf("the is marks %d\n",s1.marks);
    printf("the is grade %c\n",s1.grade);
    return 0;
}
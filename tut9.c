#include <stdio.h>
struct student
{
    int id;
    int marks;
    char grade;
};

int main()
{
    struct student harry, soham, ravi;
    harry.id = 1;
    ravi.id = 2;
    soham.id = 3;
    soham.marks = 59;
    harry.marks = 34;
    ravi.marks = 24;
    soham.grade = 'a';
    ravi.grade = 'a';
    harry.grade = 'a';

   
    return 0;
}
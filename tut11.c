#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0; //Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
}
int main()
{
    char string[] = "<h1>   this is heading   </h1>";
    parser(string);
    puts(string);
    return 0;
}
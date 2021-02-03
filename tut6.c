#include <stdio.h>

int main()
{
    int a, ch;
    float b;
    while (1)
    {
        printf("enter your choice \n 1. kms to mile \n 2. inch to foot \n 3. cms to inch \n 4. pound to kg \n 5.inch to metre and 0 to exit");
        scanf("%d", &ch);
        if (ch == 0)
        {
            break;
        }
        else
        {

            switch (ch)
            {
            case 1:
                printf("converting kms to miles\n");
                printf("enter the kilometres");
                scanf("%d", a);
                b = 0.621371 * a;
                printf("the distance in miles %d ", b);
                break;
            case 2:
                printf("converting inches to foot\n");
                printf("enter the inch");
                scanf("%d", a);
                b = 0.08333 * a;
                printf("the distance in foot %d ", b);
                break;
            case 3:
                printf("converting cms to inches\n");
                printf("enter the cms");
                scanf("%d", a);
                b = 0.393701 * a;
                printf("the distance in inches %d ", b);
                break;
            case 4:
                printf("converting pound to kms\n");
                printf("enter the pound");
                scanf("%d", a);
                b = 0.453592 * a;
                printf("the weight in kg %d ", b);
                break;
            case 5:
                printf("converting inch to metres\n");
                printf("enter the inch");
                scanf("%d", a);
                b = 0.0254 * a;
                printf("the distance in metre %d ", b);
                break;
            default:
                printf("no match");
            }
        }
        continue;
    }
}
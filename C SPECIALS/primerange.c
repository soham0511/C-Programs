#include <stdio.h>

void main()
{
    int u,l,c=0;
    printf("enter upper limit");
    scanf("%d", &u);
    printf("enter lower limit");
    scanf("%d", &l);
    for (int i = l+1; i < u; ++i)
    {c=0;
        for (int j = 2; j <= i/2; ++j)
        {
            if (i % j == 0)
            {
                c=1;
                
            }
           
        }

        if (c == 0)
        {
            printf("%d\n", i);
        }
        
        
    }
}
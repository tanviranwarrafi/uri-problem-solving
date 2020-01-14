#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &i);

        if(i==0)
        {
            printf("NULL\n");
        }

        else if(i>0)
        {
            if(i%2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if(i<0)
        {
            if(i%2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }

        }
    }

    return 0;
}



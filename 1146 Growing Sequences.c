#include<stdio.h>
int main()
{
    int x, i, j,initial_value=1, total_line=1;

    for(i=0; i<100; i++)
    {
        scanf("%d", &x);
        if(x==0)
        {
            break;
        }
        if(x>0)
        {
            for(i=1; i<=total_line; i++)
            {
                printf("%d", initial_value);

                for(j=initial_value+1; j<=x; j++)
                {
                    printf(" %d", j);
                }
                printf("\n");

            }
        }
    }

    return 0;
}


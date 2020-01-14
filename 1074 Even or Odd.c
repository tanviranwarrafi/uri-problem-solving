#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    if(n<10000)
    {

        for(i=1; i<=n; i++)
        {
            scanf("%d", &i);
            if(i>0)
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
            if(i<0)
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
            if(i==0)
            {
                printf("NULL\n");
            }
        }
    }


    return 0;
}

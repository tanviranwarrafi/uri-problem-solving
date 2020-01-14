#include<stdio.h>
int main()
{
    int X, i;
    if(1<=X<=1000)
        {
            scanf("%d", &X);
            for(i=1; i<=X; i++)
                {
                    if(i%2 != 0)
                        {
                            printf("%d\n",i);
                        }
                }
        }

    return 0;
}


#include<stdio.h>

int main()
{
    int x, y, i,sum;
    scanf("%d %d", &x, &y);

    if(x<y)
        {
            sum = 0;
            for(i=x+1; i<y; i++)
                {
                    if(i%2 != 0)
                        {
                            sum = sum+i;
                        }
                }
            printf("%d\n", sum);
        }

    if(x>y)
        {
            sum = 0;
            for(i=y+1; i<x; i++)
                {
                    if(i%2 != 0)
                        {
                            sum = sum+i;
                        }
                }
            printf("%d\n", sum);
        }
    if(x==y)
        {
            printf("0\n");
        }


    return 0;
}

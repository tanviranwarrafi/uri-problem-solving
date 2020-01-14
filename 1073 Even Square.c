#include<stdio.h>
int main()
{
    int n, i, input, square;
    if(5<n<2000)
    {
        scanf("%d", &n);

        for(i=1; i<=n; i++)
        {
            if(i%2 == 0)
            {
                square = i*i;
                printf("%d^2 = %d\n", i, square);
            }

        }
    }

    return 0;
}


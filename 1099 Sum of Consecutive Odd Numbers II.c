#include<stdio.h>

int main()
{
    int n, x, y, i, j, temp, sum = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);

        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        if(x%2 == 0)
        {
            x--;
        }
        x = x+2;
        for(j=x; j<y; j++)
        {
            if(j%2 != 0)
            {
                sum = sum+j;
            }

        }
        printf("%d\n", sum);
        sum =0;

    }

    return 0;
}



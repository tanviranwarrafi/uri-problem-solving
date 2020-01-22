#include<stdio.h>

int main()
{
    int n, x, y, i, j, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x%2 == 0)
        {
            x--;
            x=x+2;
        }
        for(j=0; j<y; j++)
        {
            sum = sum+x;
            x+=2;
        }
        printf("%d\n", sum);
        sum =0;
    }

    return 0;
}




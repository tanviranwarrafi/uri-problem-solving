#include<stdio.h>
int main()
{
    int a, b, i, j, sum=0, temp;
    for(i=0; i<100; i++)
    {
        scanf("%d %d", &a, &b);
        if(a<=0|| b<=0)
        {
            break;
        }
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for(j=a; j<=b; j++)
        {
            printf("%d ", j);
            sum = sum+j;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int x, n, i, sum=0;
    scanf("%d %d", &x, &n);
    while(n<=0)
    {
        scanf("%d", &n);
    }


    for(i=0; i<n; i++)
    {
        sum = sum+i+x;
    }

    printf("%d\n", sum);

    return 0;
}



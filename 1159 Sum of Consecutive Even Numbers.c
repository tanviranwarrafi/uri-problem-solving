#include<stdio.h>

int main()
{
    int i, n, k, sum=0;
    for(k=0; k<100; k++)
    {
        scanf("%d", &n);
        if(n==0){
            break;
        }
        if(n%2 != 0)
        {
            n=n+1;
        }
        for(i=1; i<=5; i++)
        {
            sum = sum+n;
            n = n+2;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}





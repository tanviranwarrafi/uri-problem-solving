#include<stdio.h>
int main()
{
    double N[12][12], sum=0.0;
    char X[2];
    scanf("%s", &X);
    int i, j, n=11;
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", &N[i][j]);
        }
    }
    for(i=1; i<12; i++)
    {
        for(j=11; j>=n; j--)
        {
            sum = sum+N[i][j];
        }
        n--;
    }
    if(X[0]=='S')
    {
        printf("%.1lf\n", sum);
    }
    else if(X[0]=='M')
    {
        printf("%.1lf\n", sum/66.0);
    }
    return 0;
}

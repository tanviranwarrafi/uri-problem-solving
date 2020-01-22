#include<stdio.h>
int main()
{
    int i, n, N[100];
    N[0]=0;
    N[1]=1;
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        N[i] = N[i-1]+N[i-2];  //Index Number
    }
    printf("0");
    for(i=1; i<n; i++)
    {
        printf(" %d", N[i]);
    }
    printf("\n");
    return 0;
}





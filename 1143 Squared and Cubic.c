#include<stdio.h>
int main()
{
    int i, n, a=1, b, c;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        a = a*1;
        b = a*a;
        c = a*a*a;
        printf("%d %d %d\n", a, b, c);
        a = a+1;
    }

    return 0;
}




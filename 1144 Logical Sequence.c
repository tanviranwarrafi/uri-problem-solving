#include<stdio.h>
int main()
{
    int a=1, b, c, n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        a = a;
        b = a*a;
        c = a*a*a;
        printf("%d %d %d\n", a, b, c);

        a = a;
        b = b+1;
        c = c+1;
        printf("%d %d %d\n", a, b, c);

        a++;
    }


    return 0;
}

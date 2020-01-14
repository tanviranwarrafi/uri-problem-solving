#include<stdio.h>
int main()
{
    int i, n, highest=0, position;

    for(i=1; i<=100; i++)
    {
        scanf("%d", &n);
        if(n>highest)
        {
            highest = n;
            position = i;
        }
    }
    printf("%d\n%d\n", highest, position);
    return 0;
}






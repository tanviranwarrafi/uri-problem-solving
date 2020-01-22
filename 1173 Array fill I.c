#include<stdio.h>
int main()
{
    int i, x, array[10];
    scanf("%d", &x);
    for(i=0; i<10; i++)
        {
            array[i] = x;
            printf("N[%d] = %d\n", i, array[i]);
            x += x;
        }
    return 0;
}

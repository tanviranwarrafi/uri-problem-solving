#include<stdio.h>
int main()
{
    int i, j, array[20];
    for(i=19; i>=0; i--)
        {
            scanf("%d", &array[i]);
        }
    for(i=0; i<=19; i++)
        {
            printf("N[%d] = %d\n",i, array[i]);
        }
    return 0;
}



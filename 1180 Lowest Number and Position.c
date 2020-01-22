#include<stdio.h>
int main()
{
    int i, n, lowest=0, position=0;
    scanf("%d", &n);
    int X[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &X[i]);
        if(X[i]<lowest)
        {
            lowest = X[i];
            position = i;
        }

    }
    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d\n", position);

    return 0;
}



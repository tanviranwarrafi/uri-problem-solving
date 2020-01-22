#include<stdio.h>
int main()
{
    int x, y, i, j, total_line, row, initial_value=1;
    scanf("%d %d", &x, &y);
    total_line = y/x;
    row = x;
    for(i=1; i<=total_line; i++)
    {
        printf("%d", initial_value);

        for(j=initial_value+1; j<=row; j++)
        {
            printf(" %d", j);

        }
        printf("\n");
        initial_value += x;
        row += x;
    }

    return 0;
}

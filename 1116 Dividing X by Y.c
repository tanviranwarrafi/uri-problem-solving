#include<stdio.h>
int main()
{
    int i, number;
    float divided, x, y;
    scanf("%d", &number);

    for(i=0; i<number; i++)
    {
        scanf("%f %f", &x, &y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            divided = x/y;
            printf("%.1f\n", divided);
        }

    }
    return 0;
}



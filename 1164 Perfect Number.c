#include<stdio.h>
int main()
{
    int a, i, j, test_case, sum=0;
    scanf("%d", &a);
    for(i=0; i<a; i++)
    {
        scanf("%d", &test_case);
        for(j=1; j<test_case; j++)
        {
            if(test_case%j == 0)
            {
                sum= sum+j;
            }

        }
        if(sum == test_case)
        {
            printf("%d eh perfeito\n", test_case);

        }
        else
        {
            printf("%d nao eh perfeito\n", test_case);
        }
        sum = 0;

    }

    return 0;
}



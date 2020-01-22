#include<stdio.h>
int main()
{
    int number, test_case, i, j, k;
    scanf("%d", &number);
    for(i=0; i<number; i++)
    {
        k=0;
        scanf("%d", &test_case);
        if(test_case<4)
        {
            printf("%d eh primo\n", test_case);
        }
        else if(test_case>3)
        {
            for(j=2; j<test_case; j++)
            {
                if(test_case%j == 0)
                {
                    k=1;
                    break;
                }
                else
                {
                    k =2;
                }
            }
        }

        if(k==1)
        {
            printf("%d nao eh primo\n", test_case);
        }
        else
        {
            printf("%d eh primo\n", test_case);
        }
    }

    return 0;
}



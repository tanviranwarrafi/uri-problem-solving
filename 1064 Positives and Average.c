#include<stdio.h>

int main()
{
    double input,sum, avg;
    int i, count;
    count = 0;
    sum = 0;
    for(i=0; i<6; i++)
        {
            scanf("%lf", &input);

            if(input>0)
                {
                    sum = sum+input;
                    count++;
                }
        }
    avg = sum/count;
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", avg);
    return 0;
}






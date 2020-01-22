#include<stdio.h>
int main()
{

    float a, array[3], average;
    int i, j, second;

    for(i=0; i<100; i++)
    {
        j=0;
        for(i=0; i<100; i++)
        {
            scanf("%f", &a);
            if(a>=0 && a<=10)
            {
                array[j] = a;
                j++;
            }
            else
            {
                printf("nota invalida\n");
            }
            if(j>1)
            {
                break;
            }
        }
        average = (array[0]+array[1])/2.0;
        printf("media = %.2f\n", average);
        average = 0;
        for(i=0; i<100; i++)
        {
            scanf("%d", &second);
            if(second!=2 || second!=1)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            else
            {
                if(second==1)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }

        }
    }


    return 0;
}

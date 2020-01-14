#include<stdio.h>
int main()
{
    float score, array[3], avg;
    int i, j=0;
    for(i=0; i<100; i++)
    {
        scanf("%f", &score);
        if(score>=0 && score<=10)
        {
            array[j] = score;
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
    avg = (array[0]+array[1])/2.0;
    printf("media = %.2f\n", avg);

    return 0;
}




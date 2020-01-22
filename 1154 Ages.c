#include<stdio.h>

int main()
{
    double avg, count=0;
    int age, i, sum=0;

    for(i=0; i<100; i++)
    {
        scanf("%d", &age);

        if(age<0)
        {
            break;
        }
        else
        {
            sum = sum+age;
            count++;
        }

    }
    avg = sum/count;
    printf("%.2lf\n", avg);
    return 0;
}


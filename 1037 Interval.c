#include<stdio.h>
#include<math.h>
int main()
{
    double A;
    scanf("%lf", &A);

    if(A>=0 && A<=25.0000)
        {
            printf("Intervalo [0,25]\n");
        }
    else if (A>=25.00001 && A<=50.0000000)
        {
            printf("Intervalo (25,50]\n");
        }
    else if (A>=50.00000001 && A<=75.0000000)
        {
            printf("Intervalo (50,75]\n");
        }
    else if (A>=75.00000001 && A<=100.0000000)
        {
            printf("Intervalo (75,100]\n");
        }
    else
        {
            printf("Fora de intervalo\n");
        }
    return 0;
}

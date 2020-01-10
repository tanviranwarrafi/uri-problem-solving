#include<stdio.h>
#include<math.h>
int main()
{
    double n1, n2, n3, n4, average;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    average = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);

    printf("Media: %.1lf\n", average);

    if(average >= 7.0)
        {
            printf("Aluno aprovado.\n");
        }
    else if (average < 5.0)
        {
            printf("Aluno reprovado.\n");
        }

    else if (5.0<=average && average<=6.9)
        {
            printf("Aluno em exame.\n");


            double n5, recalculated_average;
            scanf("%lf", &n5);
            printf("Nota do exame: %.1lf\n", n5);

            recalculated_average = (n5+average)/2;

            if(recalculated_average >= 5.0)
                {
                    printf("Aluno aprovado.\n");
                }
            else
                {
                    printf("Aluno reprovado.\n");
                }

            printf("Media final: %.1lf\n", recalculated_average);

        }
    else
        {

        }
    return 0;
}


#include<stdio.h>
int main()
{
    double A, B, avg;
    double weight_A, weight_B;
    scanf("%lf %lf", &A,&B);
    weight_A = 3.5;
    weight_B = 7.5;
    avg = (((A*weight_A)+(B*weight_B))/(weight_A+weight_B));
    printf("MEDIA = %.5lf\n", avg);
    return 0;
}

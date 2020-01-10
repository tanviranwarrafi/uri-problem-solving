#include<stdio.h>

int main()
{

    double pi,R,value_of_R,value,result;

    scanf("%lf", &R);

    pi = 3.14159;
    value_of_R = pow(R,3);
    value = 4.00/3;
    result = value*pi*value_of_R;

    printf("VOLUME = %.3lf\n", result);

    return 0;
}


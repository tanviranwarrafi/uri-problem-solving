#include<stdio.h>
#include<math.h>
int main(){
    double n, A, R, result;
    n = 3.14159;
    scanf("%lf", &R);
    result = pow(R,2);
    A = n*result;
    printf("A=%.4lf\n", A);
    return 0;
}

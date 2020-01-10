#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    float b_power,ac_4,res,square_root,result1,result2;
    scanf("%lf %lf %lf", &a, &b, &c);

    b_power = b*b;
    ac_4 = 4*a*c;
    res = b_power-ac_4;

    if(a!=0 && res>0)
        {
            square_root = sqrt(res);

            result1 = ((-b) +  square_root)/(2*a);
            result2 = ((-b) -  square_root)/(2*a);

            printf("R1 = %.5f\n", result1);
            printf("R2 = %.5f\n", result2);
        }
    else
        {
            printf("Impossivel calcular\n");
        }

    return 0;
}









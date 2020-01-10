#include<stdio.h>
int main()
{
    double a,b,c,Perimetro,area;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a+b>c && b+c>a && a+c>b)
        {
            Perimetro = a+b+c;
            printf("Perimetro = %.1lf\n", Perimetro);
        }
    else
        {
            area = ((a+b)*c)/2;
            printf("Area = %.1lf\n", area);
        }


    return 0;
}



#include<stdio.h>

int main()
{
    double input, salary_for_tax;

    scanf("%lf", &input);

    if(input>=0.0 && input<=2000.00)
        {
            printf("Isento\n");
        }
    else if(input>=2000.01 && input<=3000.00)
        {
            input = input - 2000.00;
            salary_for_tax = (input*8)/100;
            printf("R$ %.2lf\n", salary_for_tax);
        }
    else if(input>=3000.01 && input<=4500.00)
        {
            input = input - 3000.00;
            salary_for_tax = (input*18)/100;
            printf("R$ %.2lf\n", salary_for_tax+80.00);
        }
    else if(input>=4500.00)
        {
            input = input - 4500.00;
            salary_for_tax = (input*28)/100;
            printf("R$ %.2lf\n", salary_for_tax+270+80);
        }
    return 0;
}



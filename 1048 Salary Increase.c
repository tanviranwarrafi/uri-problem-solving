#include<stdio.h>
int main()
{
    double salary, money_earned, new_salary;
    scanf("%lf", &salary);


    if(salary>=0 && salary<=400.00)
        {
            money_earned = (salary*15)/100;
            new_salary = salary + money_earned;

            printf("Novo salario: %.2lf\n", new_salary);
            printf("Reajuste ganho: %.2lf\n", money_earned);
            printf("Em percentual: 15 %%\n");
        }
    else if(salary>=400.01 && salary<=800.00)
        {
            money_earned = (salary*12)/100;
            new_salary = salary + money_earned;

            printf("Novo salario: %.2lf\n", new_salary);
            printf("Reajuste ganho: %.2lf\n", money_earned);
            printf("Em percentual: 12 %%\n");
        }
    else if(salary>=800.01 && salary<=1200.00)
        {
            money_earned = (salary*10)/100;
            new_salary = salary + money_earned;

            printf("Novo salario: %.2lf\n", new_salary);
            printf("Reajuste ganho: %.2lf\n", money_earned);
            printf("Em percentual: 10 %%\n");
        }
    else if(salary>=1201.01 && salary<=2000.00)
        {
            money_earned = (salary*7)/100;
            new_salary = salary + money_earned;

            printf("Novo salario: %.2lf\n", new_salary);
            printf("Reajuste ganho: %.2lf\n", money_earned);
            printf("Em percentual: 7 %%\n");
        }
    else if(salary>=2000.00)
        {
            money_earned = (salary*4)/100;
            new_salary = salary + money_earned;

            printf("Novo salario: %.2lf\n", new_salary);
            printf("Reajuste ganho: %.2lf\n", money_earned);
            printf("Em percentual: 4 %%\n");
        }

    return 0;
}

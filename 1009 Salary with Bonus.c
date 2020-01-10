#include<stdio.h>

int main(){

char name;
double fixed_salary, total_sell, interest, total_salary;

scanf("%s", &name);
scanf("%lf%lf", &fixed_salary, &total_sell);

interest = (total_sell*15)/100;
total_salary = fixed_salary + interest;

printf("TOTAL = R$ %.2lf\n", total_salary);

return 0;
}

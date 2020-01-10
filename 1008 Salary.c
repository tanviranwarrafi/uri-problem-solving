#include<stdio.h>
int main(){
 int employee_number, monthly_worked_hour;
 double per_hour_salary, salary;
 scanf("%d%d", &employee_number, &monthly_worked_hour);
 scanf("%lf", &per_hour_salary);
 salary = monthly_worked_hour * per_hour_salary;
 printf("NUMBER = %d\n", employee_number);
 printf("SALARY = U$ %.2lf\n", salary);
return 0;
}

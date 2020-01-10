#include<stdio.h>
#include<math.h>
int main()
{
    double N;
    int n, quotent,reminder,quotent50,reminder50,quotent20,reminder20,quotent10,reminder10,
    quotent5,reminder5,quotent2,reminder2,quotent1,reminder1,quotent_50,reminder_50,quotent_25,
    reminder_25,quotent_10,reminder_10,quotent_05,reminder_05,quotent_01,reminder_01;

    scanf("%lf", &N);

    printf("NOTAS:\n");

    n = N*100;
    quotent = n / 10000;
    printf("%d nota(s) de R$ 100.00\n", quotent);
    reminder= n % 10000;

    quotent50 = reminder / 5000;
    printf("%d nota(s) de R$ 50.00\n", quotent50);
    reminder50 = reminder % 5000;

    quotent20 = reminder50 / 2000;
    printf("%d nota(s) de R$ 20.00\n", quotent20);
    reminder20 = reminder50 % 2000;

    quotent10 = reminder20 / 1000;
    printf("%d nota(s) de R$ 10.00\n", quotent10);
    reminder10 = reminder20 % 1000;

    quotent5 = reminder10 / 500;
    printf("%d nota(s) de R$ 5.00\n", quotent5);
    reminder5 = reminder10 % 500;

    quotent2 = reminder5 / 200;
    printf("%d nota(s) de R$ 2.00\n", quotent2);
    reminder2 = reminder5 % 200;

    printf("MOEDAS:\n");

    quotent1 = reminder2 / 100;
    printf("%d moeda(s) de R$ 1.00\n", quotent1);
    reminder1 = reminder2 % 100;

    quotent_50 = reminder1 / 50;
    printf("%d moeda(s) de R$ 0.50\n", quotent_50);
    reminder_50 = reminder1 % 50;

    quotent_25 = reminder_50 / 25;
    printf("%d moeda(s) de R$ 0.25\n", quotent_25);
    reminder_25 = reminder_50 % 25;

    quotent_10 = reminder_25 / 10;
    printf("%d moeda(s) de R$ 0.10\n", quotent_10);
    reminder_10 = reminder_25 % 10;

    quotent_05 = reminder_10 / 5;
    printf("%d moeda(s) de R$ 0.05\n", quotent_05);
    reminder_05 = reminder_10 % 5;

    quotent_01 = reminder_05 / 1;
    printf("%d moeda(s) de R$ 0.01\n", quotent_01);
    reminder_01 = reminder_05 % 1;

    return 0;
}







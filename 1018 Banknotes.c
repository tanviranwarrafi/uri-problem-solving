#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", N);

    int quotent = N/100;
    int reminder = N%100;
    printf("%d nota(s) de R$ 100,00\n", quotent);

    int quotent2 = reminder/50;
    int reminder2 = reminder%50;
    printf("%d nota(s) de R$ 50,00\n", quotent2);

    int quotent3 = reminder2/20;
    int reminder3 = reminder2%20;
    printf("%d nota(s) de R$ 20,00\n", quotent3);

    int quotent4 = reminder3/10;
    int reminder4 = reminder3%10;
    printf("%d nota(s) de R$ 10,00\n", quotent4);

    int quotent5 = reminder4/5;
    int reminder5 = reminder4%5;
    printf("%d nota(s) de R$ 5,00\n", quotent5);

    int quotent6 = reminder5/2;
    int reminder6 = reminder5%2;
    printf("%d nota(s) de R$ 2,00\n", quotent6);

    int quotent7 = reminder6/1;
    int reminder7 = reminder6%1;
    printf("%d nota(s) de R$ 1,00\n", quotent7);

    return 0;
}







#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y;;
    scanf("%d %d", &X, &Y);

    if(X == 1)
        {
            double price = Y * 4.00;
            printf("Total: R$ %.2lf\n", price);
        }
    else if (X == 2)
        {
            double price = Y * 4.50;
            printf("Total: R$ %.2lf\n", price);
        }
    else if (X == 3)
        {
            double price = Y * 5.00;
            printf("Total: R$ %.2lf\n", price);
        }
    else if (X == 4)
        {
            double price = Y * 2.00;
            printf("Total: R$ %.2lf\n", price);
        }
    else if (X == 5)
        {
            double price = Y * 1.50;
            printf("Total: R$ %.2lf\n", price);
        }
    else
        {

        }
    return 0;
}


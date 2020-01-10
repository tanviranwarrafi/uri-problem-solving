#include<stdio.h>

int main()
{

    int code_of_product_1, unit_of_product_1, code_of_product_2, unit_of_product_2;
    float price_of_product_1, price_of_product_2, price_product_1, price_product_2, total_price;

    scanf("%d %d %f", &code_of_product_1, &unit_of_product_1, &price_of_product_1);
    scanf("%d %d %f", &code_of_product_2, &unit_of_product_2, &price_of_product_2);

    price_product_1 =  unit_of_product_1 * price_of_product_1;
    price_product_2 =  unit_of_product_2 * price_of_product_2;
    total_price = price_product_1 + price_product_2;

    printf("VALOR A PAGAR: R$ %.2f\n", total_price);

    return 0;
}

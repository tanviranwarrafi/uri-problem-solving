#include<stdio.h>
int main()
{
    int i, number;
    for(i=1; i<=100; i++)
    {
        scanf("%d", &number);
        if(number == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

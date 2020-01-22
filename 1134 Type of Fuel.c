#include<stdio.h>
int main()
{
    int x, i, a=0, g=0, d=0;
    printf("MUITO OBRIGADO\n");
    for(i=0; i<100; i++)
    {
        scanf("%d", &x);
        if(x>4)
        {
            continue;
        }
        else if(x==1)
        {
            a++;
        }
        else if(x==2)
        {
            g++;
        }
        else if(x==3)
        {
            d++;
        }
        else if(x==4)
        {
            break;
        }

    }

    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);

    return 0;
}


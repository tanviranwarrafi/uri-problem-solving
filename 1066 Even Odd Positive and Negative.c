#include<stdio.h>
int main()
{
    int input, i, even, odd, positive, negative;
    even = 0;
    odd = 0;
    positive = 0;
    negative = 0;

    for(i=0; i<5; i++)
        {
            scanf("%d", &input);
            if(input%2 == 0)
                {
                    even++;
                }
            if(input%2 != 0)
                {
                    odd++;
                }
            if(input>0)
                {
                    positive++;
                }
            if(input<0)
                {
                    negative++;
                }
        }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}

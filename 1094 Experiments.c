#include<stdio.h>

int main()
{
    int number, i, animal, total_animal, c=0, r=0, s=0;
    double c_per, r_per, s_per;
    char name;
    scanf("%d", &number);

    for(i=1; i<=number; i++)
    {
        scanf("%d %c", &animal, &name);
        //total_animal = total_animal+animal;
        if(name == 'C')
        {
            c = c+animal;
        }
        else if(name == 'R')
        {
            r = r+animal;
        }
        else if(name == 'S')
        {
            s = s+animal;
        }
    }
    total_animal = c+s+r;

    c_per = (c*100.00)/total_animal;
    r_per = (r*100.00)/total_animal;
    s_per = (s*100.00)/total_animal;

    printf("Total: %d cobaias\n", total_animal);

    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);

    printf("Percentual de coelhos: %.2lf %%\n", c_per);
    printf("Percentual de ratos: %.2lf %%\n", r_per);
    printf("Percentual de sapos: %.2lf %%\n", s_per);

    return 0;
}







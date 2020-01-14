#include<stdio.h>

int main()
{
    int value, i, count;

    count = 0;
    for(i=0; i<5; i++)
        {
            scanf("%d", &value);
            if(value%2 == 0)
                {

                    count++;
                }
        }
    printf("%d valores pares\n", count);

    return 0;
}







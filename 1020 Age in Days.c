
#include<stdio.h>

int main()
{
    int day, year, month;
    scanf("%d", &day);

    year = day / 365;
    printf("%d ano(s)\n", year);
    day = day % 365;

    month = day/30;
    printf("%d mes(es)\n", month);
    day = day % 30;

    printf("%d dia(s)\n", day);


    return 0;
}




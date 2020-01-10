#include<stdio.h>

int main()
{
    int N, n, hour, minute,second;
    scanf("%d", &N);

    hour = N/3600;
    n = N % 3600;

    minute = n/60;
    n = n % 60;

    second = n/1;

    printf("%d:%d:%d\n", hour,minute,second);

    return 0;
}




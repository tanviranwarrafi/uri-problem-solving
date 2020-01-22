#include<stdio.h>

int main()
{
    int i;
    float S=1, j=2.0;
    for(i=3; i<=39; i+=2)
    {
        S = S+(i/j);
        j = j*2;
    }
    printf("%.2f\n", S);
    return 0;
}



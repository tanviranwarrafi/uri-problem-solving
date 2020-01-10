#include<stdio.h>
#include<math.h>

int main()
{
    int A,B,C,absolute,result;

    scanf("%d %d %d", &A, &B, &C);

    absolute= (A+B+abs(A-B))/2;

    result = (absolute+C+abs(absolute-C))/2;

    printf("%d eh o maior\n", result);

    return 0;
}



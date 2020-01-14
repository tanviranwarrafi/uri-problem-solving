#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    if(2<n<1000)
    {
        for(i=0; i<11; i++)
        {
            printf("%d x %d = %d\n", i, n, i*n);
        }
    }


    return 0;
}






#include<stdio.h>
int main()
{
int x, y, i;
for(i=0; i<100; i++){
    scanf("%d %d", &x, &y);
    if(x==y){
        break;
    }
    if(x>y){
        printf("Decrescente\n");
    }
    if(x<y){
        printf("Crescente\n");
    }
}

    return 0;
}

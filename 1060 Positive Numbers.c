#include<stdio.h>

int main()
{
    int array[6],i,count;

    for(i=0; i<6; i++){
     scanf("%d", &array[i]);
    }

    count = 0;

    for(i=0; i<6; i++){
     if(array[i]>=0){
      count++;
     }

    }
    printf("%d valores positivos\n", count);

    return 0;
}






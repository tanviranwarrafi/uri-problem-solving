#include<stdio.h>
int main(){
int x, value, i, in, out;
scanf("%d", &x);
in = 0;
out = 0;
for(i=0; i<x; i++){
    scanf("%d", &value);
    if(value>=10 && value<=20){
        in++;
    }else{
    out++;
    }
}
printf("%d in\n", in);
printf("%d out\n", out);
return 0;
}

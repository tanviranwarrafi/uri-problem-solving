#include<stdio.h>
#include<math.h>
int main()
{
    int time, speed, distance;
    float fuel_spent;

    scanf("%d%d", &time, &speed);

    distance = time*speed;
    fuel_spent = distance/12.00;

    printf("%.3f\n", fuel_spent);

    return 0;
}






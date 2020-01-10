#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x2_x1,y2_y1,distance;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    x2_x1 = x2-x1;
    x2_x1 = pow(x2_x1,2);

    y2_y1 = y2-y1;
    y2_y1 = pow(y2_y1,2);

    distance = sqrt(x2_x1+y2_y1);

    printf("%.4lf\n", distance);

    return 0;
}




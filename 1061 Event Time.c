#include<stdio.h>
int main()
{
    int start_day,end_day,start_hour,end_hour,start_minute,end_minute,start_second,end_second,
        day1,day2,total_day,day,temp1,total_hour,temp2,total_minute,total_second;

    scanf("%*s %d", &start_day);
    scanf("%d %*s %d %*s %d", &start_hour, &start_minute, &start_second);
    scanf("%*s %d", &end_day);
    scanf("%d %*s %d %*s %d", &end_hour, &end_minute, &end_second);

//    scanf("%*s %d", &start_day);
//    scanf("%d %*s", &start_hour);
//    scanf("%d %*s", &start_minute);
//    scanf("%d", &start_second);
//
//    scanf("%*s %d", &end_day);
//    scanf("%d %*s", &end_hour);
//    scanf("%d %*s", &end_minute);
//    scanf("%d", &end_second);

    day1 = start_second + (start_minute*60) + (start_hour*3600) + (3600*24*start_day);
    day2 = end_second + (end_minute*60) + (end_hour*3600) + (3600*24*end_day);
    day = day2 - day1;
    total_day = day/(24*3600);
    temp1 = day%(24*3600);
    total_hour =  temp1/3600;
    temp2 = temp1%3600;
    total_minute = temp2/60;
    total_second = temp2%60;

    printf("%d dia(s)\n", total_day);
    printf("%d hora(s)\n", total_hour);
    printf("%d minuto(s)\n", total_minute);
    printf("%d segundo(s)\n", total_second);

    return 0;
}




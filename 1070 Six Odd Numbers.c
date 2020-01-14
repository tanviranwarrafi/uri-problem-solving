#include<stdio.h>

int main()
{
    int x,i,count;
    scanf("%d", &x);
    count =0;
    for(i=x; i<=x+15; i++)
        {
            if(i%2 != 0)
                {
                    printf("%d\n", i);
                    count++;
                    if(count==6)
                        {
                            break;
                        }
                }
        }

    return 0;
}

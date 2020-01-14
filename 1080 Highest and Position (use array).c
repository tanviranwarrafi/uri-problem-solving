#include<stdio.h>
int main()
{
    int i, array[100],highest=0, position;

    for(i=1; i<=100; i++)
    {
        scanf("%d", &array[i]);

        if(array[i]>highest)
        {
            highest = array[i];
            position = i;
        }
    }
    printf("%d\n%d\n", highest, position);
    return 0;
}







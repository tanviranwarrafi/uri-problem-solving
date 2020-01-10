#include<stdio.h>
int main()
{
    char first_name[15], second_name[15], third_name[15];
    scanf("%s", &first_name);
    scanf("%s", &second_name);
    scanf("%s", &third_name);

    if(first_name[0] == 'v')
        {
            if(second_name[0] == 'a')
                {
                    if(third_name[0] == 'c')
                        {
                            printf("aguia\n");
                        }
                    else
                        {
                            printf("pomba\n");
                        }
                }
            else
                {
                    if(third_name[0] == 'o')
                        {
                            printf("homen\n");
                        }
                    else
                        {
                            printf("vaca\n");
                        }
                }
        }
    else
        {
            if(second_name[0] == 'i')
                {
                    if(third_name[2] == 'm')
                        {
                            printf("pulga\n");
                        }
                    else
                        {
                            printf("lagarta\n");
                        }
                }
            else
                {
                    if(third_name[0] == 'h')
                        {
                            printf("sanguessuga\n");
                        }
                    else
                        {
                            printf("minhoca\n");
                        }
                }
        }
    return 0;
}

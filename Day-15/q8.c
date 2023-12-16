#include<stdio.h>
int main()
{
    for (int i = 5; i >=1; i--)
    {
        for (int m = 1; m <= i ;m++)
        {
            printf("%d",m);
        }
         for (int k = i; k < 5 ;k++)
        {
            printf("  ");
        }
         for (int j = i; j >= 1 ;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for (int i = 1; i <=5; i++)
    {
        for (int m = 1; m <= i ;m++)
        {
            printf("%d",m);
        }
         for (int k = i; k < 5 ;k++)
        {
            printf("  ");
        }
         for (int j = i; j >= 1 ;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for (int k = 1; k <=i; k++)
        {
            printf("%d",k);
        }
        
        for (int h = i; h <5; h++)
        {
            printf("  ");
        }
        for ( j = i; j >=1; j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
        
    }
    
    return 0;

}
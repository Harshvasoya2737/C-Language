#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for (int k = 4; k>= i; k--)
        {
            printf("  ");
        }
        
        for ( j = i; j >=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    return 0;
    
}
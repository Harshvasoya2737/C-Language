#include<stdio.h>
int main()
{
    
    for (int i = 5; i >=1 ; i--)
    {
        for (int h = 1; h <=i; h++)
        {
            printf("%d",h);
        }
        
        for (int d = i; d < 5; d++)
        {
            printf("  ");
        }
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }

        printf("\n");
        
        
    }
    return 0;
    
}
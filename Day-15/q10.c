#include<stdio.h>
int main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        
        for (int h = 1; h < i; h++)
        {
            printf("%d",h);
        }
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
        
    }
    
    return 0;

}
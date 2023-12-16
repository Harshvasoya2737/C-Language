#include<stdio.h>
int main()
{
    for (int i = 5; i >=1; i--)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }
        
        for (int h = i; h <=4; h++)
        {
            printf("*",h);
        }
        for (int j = 5; j >=i; j--)
        {
            printf("*",j);
        }
        
        printf("\n");
        
    }
    
    return 0;

}
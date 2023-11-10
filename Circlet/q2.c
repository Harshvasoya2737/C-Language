#include<stdio.h>
int main()
{
    int i,j,b=11;
    for ( i = 11; i <=15; i++)
    {
        for ( j = 11; j <=i; j++)
        {
            printf("%d ",b);
            b++;
        }
        printf("\n");
        
    }
    
    return 0;

}
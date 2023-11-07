#include<stdio.h>
int main()
{
    int i,j;
    for (int i = 5; i >=1; i--)
    {
        for (int j = i; j <=5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        
    }
    return 0;
    
}
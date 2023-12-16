#include <stdio.h>
int main()
{
    int r,c;

    printf("Enter the size of row=");
    scanf("%d",&r);

    printf("Enter the size of colum=");
    scanf("%d",&c);

    int a[r][c];
    int b[r][c];
    int d[r][c];



        printf("Enter A's element\n");
    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Enter B's element\n");

    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    
    printf("Array c is =\n");
    int sum=0;
    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d ",sum);
            
        }
        printf("\n");
        
    }
    return 0;

}
#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the size of row=");
    scanf("%d",&r);

    printf("Enter the size of coloumn=");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements=\n");

    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
    }

    int z,y;
    int sum=0;
    printf("Enter the row no.");
    scanf("%d",&z);
    printf("\nElement of %d are=",z);               
                                                     
                                                          
    for (int i=z,j=0;i<z,j<3;j++)
    {
        sum=sum+a[i][j];
        printf("%d",a[i][j]);
    }
    printf("\nsum of row %d is %d",z,sum);

    int max=0;
    printf("\n\nEnter thr colum no.");
    scanf("%d",&y);

    printf("\nElements of %d are=",y);
    for (int j=y,i=0;j<=y,i<3;i++)
    {
        printf("%d",a[i][j]);
        max=max+a[i][j];
    }

    printf("\nsum of colum %d is %d",y,max);
    return 0;

}
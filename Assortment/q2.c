#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the size of row=");
    scanf("%d",&r);

    printf("Enter the size of column=");
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
    int max=0;

    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            if (max < a[i][j])
            {
                max=a[i][j];
            }
        }
        
    }

    printf("The maximum value of array is =%d",max);
    return 0;
    
}
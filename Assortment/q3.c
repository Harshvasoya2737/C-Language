#include <stdio.h>
int main()
{
    int rc;

    printf("Enter the size of row & column=");
    scanf("%d",&rc);

    int a[rc][rc];
    printf("Enter the elements=\n");
    for (int  i = 0; i < rc; i++)
    {
       for (int  j = 0; j < rc; j++)
       {
            scanf("%d",&a[i][j]);
       }
       
    }
    printf("The transpose matrix of array is :\n");

    for (int  i = 0; i < rc; i++)
    {
        for (int  j = 0; j < rc; j++)
        {
           printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
    

}
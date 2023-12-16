#include<stdio.h>
int cube(int y)
{
    int a[y][y];
    printf("Enter the element\n");
    for (int  i = 0; i < y; i++)
    {
        for (int  j = 0; j < y; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Cube of all elements\n");
     for (int i = 0; i < y; i++)
     {
        for (int j = 0; j < y; j++)
        {
            int *ap=&a[i][j];
            printf("%d ",(*ap)*(*ap)*(*ap));
        }
        printf("\n");
    }
}
int main()
{
    int r;
    printf("Enter array's size=");
    scanf("%d",&r);

    cube(r);
}
#include <stdio.h>
int main()
{
    int r,c,sum=0,avr,n;
    printf("Enter the size of row=");
    scanf("%d",&r);

    printf("Enter thr size of colum=");
    scanf("%d",&c);

    n=r*c;



    int a[r][c];

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
            sum=sum+a[i][j];
        }
        printf("\n");
        
    }
      

    avr=sum/n;
    printf("avrage of array=%d",avr);
    return 0;

}
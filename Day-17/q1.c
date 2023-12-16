#include <stdio.h>
int main()
{

    int z,y;
    printf("Enter array A's size=");
    scanf("%d",&z);
    int a[z];

    printf("Enter a's element=\n");

    for (int  i = 0; i < z; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("Enetr array B's size=");
    scanf("%d",&y);
    int b[y];

    printf("Enetr B's element\n");
    for (int  i = 0; i < y; i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }

    int c[z+y];
    for (int  i = 0; i < z; i++)
    {
        c[i]=a[i];
    }

    for (int  i = 0; i < z+y; i++)
    {
        c[i+z]=b[i];
    }
     
     printf("Array c is= ");
    for (int  i = 0; i < z+y; i++)
    {
        printf("%d, ",c[i]);
    }
    
}
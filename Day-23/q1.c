#include<stdio.h>
int main()
{
    int a;
    printf("Enter the array's size: ");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&b[i]);
    }
    printf("Square of each element:\n");
    for (int i = 0; i < a; i++)
    {
        int *ap=&b[i];
        printf("%d, ",(*ap)*(*ap));
    }

    
    return 0;
}
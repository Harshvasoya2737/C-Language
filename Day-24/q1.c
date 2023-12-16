#include<stdio.h>
int main()
{
    int a;
    printf("Enter the array's size:");
    scanf("%d",&a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&b[i]);
    }
    printf("Reversed array elements\n");
    for (int i = a-1; i >=0 ; i--)
    {
        int *ap=&b[i];
        printf("%d ",*ap);
    }
    return 0;
}
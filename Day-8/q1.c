#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of A=");
    scanf("%d",&a);
    printf("Enter the value of B=");
    scanf("%d",&b);

    if(a<b)
    {
        printf("The Maximum value is=%d",a);
    }
    else
    {
        printf("The minimum value is=%d",b);
    }
    return 0;
}
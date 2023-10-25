#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of A=");
    scanf("%d",&a);
    printf("Enter the value of B=");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("The new value of A after swapping is=%d\n",a);
    printf("The new value of B after swapping is=%d\n",b);
    return 0;

}
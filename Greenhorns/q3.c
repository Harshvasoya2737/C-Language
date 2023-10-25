#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the First angle=");
    scanf("%d",&a);
    printf("Enter the Second angle=");
    scanf("%d",&b);

    c=180-(a+b);
    printf("The third angle is = %d",c);

    return 0;



}
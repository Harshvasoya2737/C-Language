#include<stdio.h>
void cube(int number)
{
    printf("The cube of number is=%d",number*number*number);
}
void main()
{
    int a;
    printf("Enter any number=");
    scanf("%d",&a);
    cube(a);
}

#include<stdio.h>
int main()
{
    int r;
    float pi=3.14,area;
    printf("Enter the radius of Circle=");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of Circle is=%0.3f",area);
    return 0;
}
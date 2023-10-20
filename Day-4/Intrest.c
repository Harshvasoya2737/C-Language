#include<stdio.h>
void main()
{
    float principale,rate,intrest;
    int year;
    printf("Enter the principal Amount=");
    scanf("%f",&principale);
    printf("Enter the Rate of intrest (in percentage)=");
    scanf("%f",&rate);
    printf("Enter the Year=");
    scanf("%d",&year);
    {
        intrest=(principale*rate*year/100.0);
    }
    printf("The simple interest is=%.2f\n",intrest);
}
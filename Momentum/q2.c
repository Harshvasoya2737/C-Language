#include<stdio.h>
int main()
{
    float units,b;
    printf("Enter electricity units=");
    scanf("%f",&units);

    if(units<=50)
    {
        b=units*0.50;
        b=b+b*20/100;
        printf("Electricity Bill=Rs.%0.2f",b);
    }
    else if(units<=150)
    {
        b=units*0.75;
        b=b+b*20/100;
        printf("Electricity Bill=Rs.%0.2f",b);
    }
    else if(units<=250)
    {
        b=units*1.20;
        b=b+b*20/100;
        printf("Electricity Bill=Rs.%0.2f",b);
    }
    else if(units>250)
    {
        b=units*1.50;
        b=b+b*20/100;
        printf("Electricity Bill=Rs.%0.2f",b);
    }
}
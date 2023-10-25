#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature=");
    scanf("%f",&c);

    f=(c * 9/5)+32;

    printf("The Temperature in celcius=%.1f",f);
    return 0;
}
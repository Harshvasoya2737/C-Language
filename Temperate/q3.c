#include<stdio.h>
int main()
{
    int number,b,c,sum;
    printf("Enter any number:");
    scanf("%d",&number);
    c=number%10;
    while (number>=10)
    {
        number/=10;
    }
    b=number;
    
    sum=number+c;
    printf("The sum of first and last number=%d",sum);
}
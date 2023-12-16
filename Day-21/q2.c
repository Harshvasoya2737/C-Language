#include<stdio.h>
void check(int number)
{
    if(number%3==0 && number%5==0)
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("The given number is not divisible by both 3 & 5.");
    }

}
void main()
{
    int a;
    printf("Enter any number=");
    scanf("%d",&a);
    check(a);
}

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the Number to check Number is even or odd=");
    scanf("%d",&number);

    (number%2==0)?printf("The Number is even.."):printf("The number is odd..");
    return 0;
}
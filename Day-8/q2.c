#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number to check=");
    scanf("%d",&number);

    if(number>0)
    {
        printf("The number is Positive..");
    }
    else if(number<0)
    {
        printf("The number is Negative..");
    }
    else
    {
        printf("The number is Neutral..");
    }
    return 0;

}
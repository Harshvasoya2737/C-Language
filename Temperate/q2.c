#include<stdio.h>
int main()
{
    int number,count=0;
    printf("Enter any number:");
    scanf("%d",&number);
    while(number!=0)
    {
        number/=10;
        count++;
    }
    printf("Total number of digits:%d",count);
    return 0;    
}
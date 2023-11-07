#include<stdio.h>
int main()
{
    int a,sum;
    printf("Enter any number:");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        sum=sum+i;
    }
    printf("The sum of all number:%d",sum);
    return 0;

}
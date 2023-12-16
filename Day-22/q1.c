#include<stdio.h>
int array(int number)
{
    int b[number];
    int sum=0;
    printf("Enter array elements:\n");
    for (int i = 0; i < number; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < number; i++)
    {
        sum=sum+b[i];
    }
    printf("sum of an Array=%d",sum);
    
}
int main()
{
    int a;
    printf("Enter the size of array=");
    scanf("%d",&a);

    array(a);
    return 0;
}

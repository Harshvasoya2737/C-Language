#include <stdio.h>
int main()
{
    int s,sum=0,avr;
    
    printf("Enter array size:");
    scanf("%d",&s);
    int a[s];

    for (int  i = 0; i <s; i++)
    {
       printf("a[%d]=",i);
       scanf("%d",&a[i]);
    }
    for (int  j = 0; j <s; j++)
    {
        sum=sum+a[j];
    }

    avr=sum/s;

    printf("Average of an Array=%d",avr);
    return 0;
}



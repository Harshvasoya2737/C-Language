#include <stdio.h>
int main()
{
    int s;
    printf("Enter array size: ");
    scanf("%d",&s);
    int b[s]; 

    for (int  i = 0; i <s; i++)
    {
         printf("a[%d]=",i);
         scanf("%d",&b[i]);
    }

    printf("Length of an Array:%d",s);   
    return 0; 

}
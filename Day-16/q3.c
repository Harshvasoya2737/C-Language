#include<stdio.h>
int main(){
    int s;
    printf("Enter array size: ");
    scanf("%d",&s);
    int a[s];
    int b[s];
    int c[s];


    printf("Enter array A's elements=\n");

    for (int i = 0; i < s; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("Enter array B's elements=\n");

    for (int i = 0; i < s; i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }

    printf("Array C is=");

    for (int i = 0; i < s; i++)
    {
        c[i]=a[i]+b[i];
        printf("%d,",c[i]);
    }
    return 0;
}
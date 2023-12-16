#include<stdio.h>
int main(){
    int s,sum=0;

    printf("Enter array size:");
    scanf("%d",&s);
    int a[s];


    printf("Enter Array elements=\n");
    for (int i = 0; i < s; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("The squares are: ");
    for (int t = 0; t < s; t++)
    {
        sum=a[t]*a[t];
        printf("%d,",sum);
    }
    

}
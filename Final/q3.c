#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the start of the range: ");
    scanf("%d",&a);
    printf("Enter the end of the range: ");
    scanf("%d",&b);
    FILE *leap=fopen("leap.txt","w");
    for (int i = a; i <=b; i++)
        if(i%4==0)
      {
        fprintf(leap,"%d ",i);
      }

    return 0;
}
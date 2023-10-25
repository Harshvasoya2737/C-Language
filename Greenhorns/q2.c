#include<stdio.h>
int main()
{
    int s,hra,da,ta;
    printf("Enter Your Base salary=");
    scanf("%d",&s);

    printf("Enter HRA=");
    scanf("%d",&hra);

    printf("Enter DA=");
    scanf("%d",&da);

    printf("Enter TA=");
    scanf("%d",&ta);

    printf("The Total Salary is=%d",s+s*hra/100+s*da/100+s*ta/100);
    return 0;
}
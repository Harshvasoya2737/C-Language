#include<stdio.h>
#include<string.h>
int length()
{
    char a[100];
    printf("Enter any string:");
    gets(a);
    printf("Length is:%d",strlen(a));
    return 0;
}
int main()
{
    length();
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter any String: ");
    gets(a);
    
    int l=strlen(a);
    int *s=&l;

    printf("Length of String is=%d",*s);
    return 0;
}
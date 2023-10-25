#include<stdio.h>
int main()
{
    char days;
    printf("Enter the First letter of Day=");
    scanf("%c",&days);

    if(days=='m' || days=='M')
    {
        printf("This is Monday..");
    }
    else if(days=='t' || days=='T')
    {
        printf("This is Tuesday..");
    }
    else if(days=='w' || days=='W')
    {
        printf("This is Wednesday..");
    }
    else if(days=='h' || days=='H')
    {
        printf("This is Thursday..");
    }
    else if(days=='f' || days=='F')
    {
        printf("This is Friday..");
    }
    else if(days=='s' || days=='S')
    {
        printf("This is Saturday..");
    }
    else if(days=='u' || days=='U')
    {
        printf("This is Sunday..");
    }
    else
    {
        printf("Wrong Input by user..");
    }
    return 0;
}

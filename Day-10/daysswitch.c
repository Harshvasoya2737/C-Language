#include<stdio.h>
int main()
{
    char opt;
    printf("In thursday and sunday you have to input lower case letter else upper case letter\n");
    printf("Enter the first letter of Days=");
    scanf("%c",&opt);

    switch(opt)
    {
        case 'M' :
        printf("This is Monday..");
        break;
        case 'T' :
        printf("This is Tuesday..");
        break;
        case 'W' :
        printf("This is Wednesday..");
        break;
        case 't' :
        printf("This is thursday..");
        break;
        case 'F' :
        printf("This is Friday..");
        break;
        case 'S' :
        printf("This is Saturday..");
        break;
        case 's' :
        printf("This is sunday..");
        break;
        default:
        printf("Wrong input by user..");

    }
    return 0;

}
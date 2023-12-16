#include <stdio.h>
int main() 
{
    char string[100];
    int Palindrome = 1;

    printf("Enter any string: ");
    scanf("%s",&string);

    int length = 0;
    while (string[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            Palindrome = 0; 
            break;
        }
    }

    if (Palindrome) 
    {
        printf("Given string is a Palindrome.\n");
    } 
    else 
    {
        printf("Given string is not a Palindrome.\n");
    }

    return 0;
}

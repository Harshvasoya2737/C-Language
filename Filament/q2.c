#include <stdio.h>
int main() 
{
    char string[100];
    int f[256] = {0};

    printf("Enter any string: ");
    scanf("%s",&string);

    for (int i = 0; string[i] != '\0'; ++i) 
    {
        f[(int)string[i]]++;
    }
    
    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; ++i) {
        if (f[i] > 0) 
        {
            printf("%c => %d\n", (char)i, f[i]);
        }
    }

    return 0;
}

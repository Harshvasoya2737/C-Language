#include <stdio.h>

int main() {
    char s[100];

    printf("Enter any string: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

    printf("Toggle case string: %s\n", s);

    return 0;
}

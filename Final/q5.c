#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the First Number: ");
    scanf("%d", &a);
     printf("Enter the Second Number: ");
    scanf("%d", &b);
     printf("Enter the Third Number: ");
    scanf("%d", &c);

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum number is: %d\n", max);

    return 0;
}

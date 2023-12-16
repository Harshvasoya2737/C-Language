#include <stdio.h>

int main() {
    int firstYear, secondYear;

    printf("Enter the first number: ");
    scanf("%d", &firstYear);

    printf("Enter the second number: ");
    scanf("%d", &secondYear);

    if (firstYear % 2 != 0) {
        firstYear++; // Make it even
    }

    int arraySize = (secondYear - firstYear) / 2 + 1;

    int evenYears[arraySize];
    for (int i = 0; i < arraySize; i++) {
        evenYears[i] = firstYear + 2 * i;
    }

    printf("The array is: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d", evenYears[i]);
        if (i < arraySize - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

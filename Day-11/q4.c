#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    while (a<=b) 
    {
        if (a%4==0) 

            printf("%d ",a);
            a++;
        
    }
    printf("\n");

    return 0;
}

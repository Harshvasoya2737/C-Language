#include <stdio.h>
void Div(int a, int b) 
{
    for (int i = a; i <= b; i++) 
    {
        if (i%3==0 && i%5==0) 
        {
            printf("%d ", i);
        }
    }

}

int main() 
{
    int a, b;
    printf("Enter the start of the range: ");
    scanf("%d", &a);
    printf("Enter the end of the range: ");
    scanf("%d", &b);
    Div(a, b);
    return 0;
}
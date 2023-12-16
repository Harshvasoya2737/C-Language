#include<stdio.h>
int op()
{
    int a;
    printf("\nPress 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %\n");
    printf("Press 0 for exit\n\n");
    printf("Enter your choice:");
    scanf("%d",&a);

    if(a!=0)
    {
        int b,c;
        switch (a)
        {
            case 1:
            printf("Enter the first number:");
            scanf("%d",&b);
            printf("Enter the second number:");
            scanf("%d",&c);
            printf("Addition of %d and %d is %d",b,c,b+c);
            break;
            case 2:
            printf("Enter the first number:");
            scanf("%d",&b);
            printf("Enter the second number:");
            scanf("%d",&c);
            printf("Substraction of %d and %d is %d",b,c,b-c);
            break;
            case 3:
            printf("Enter the first number:");
            scanf("%d",&b);
            printf("Enter the second number:");
            scanf("%d",&c);
            printf("Multiplication of %d and %d is %d",b,c,b*c);
            break;
            case 4:
            printf("Enter the first number:");
            scanf("%d",&b);
            printf("Enter the second number:");
            scanf("%d",&c);
            printf("Division of %d and %d is %d",b,c,b/c);
            break;
            case 5:
            printf("Enter the first number:");
            scanf("%d",&b);
            printf("Enter the second number:");
            scanf("%d",&c);
            printf("Modulo of %d and %d is %d",b,c,b%c);
            break;
            default:
            printf("Wrong input by user..");
            break;
        }
    }
    else{
        return 0;
    }
    op();
}
int main()
{
    op();
}

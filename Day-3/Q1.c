#include<stdio.h>
int main()
{
    int a=7;
    printf("The table of %d\n",a);
    printf("%d X 1=%d\n",a,a*1);
    printf("%d X 2=%d\n",a,a*2);
    printf("%d X 3=%d\n",a,a*3);
    printf("%d X 4=%d\n",a,a*4);
    printf("%d X 5=%d\n",a,a*5);
    printf("%d X 6=%d\n",a,a*6);
    printf("%d X 7=%d\n",a,a*7);
    printf("%d X 8=%d\n",a,a*8);
    printf("%d X 9=%d\n",a,a*9);
    printf("%d X 10=%d\n",a,a*10);


   int b=80;
   int c=20;
    printf("Addition of %d and %d is %d\n",b,c,b+c);
    printf("Substraction of %d and %d is %d\n",b,c,b-c);
    printf("Multiplication of %d and %d is %d\n",b,c,b*c);
    printf("Division of %d and %d is %d\n",b,c,b/c);
    printf("Modulo of %d and %d is %d\n",b,c,b%c);

    printf("%d+%d=%d\n",b,c,b+c);
    printf("%d-%d=%d\n",b,c,b-c); 
    printf("%d*%d=%d\n",b,c,b*c); 
    printf("%d/%d=%d\n",b,c,b/c); 
    printf("%d %% %d=%d\n",b,c,b%c);     
    return 0;
}
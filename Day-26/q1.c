#include<stdio.h>
int main()
{
    FILE *file=fopen("first.txt","r");
    char data[50];
    FILE *s=fopen("second.txt","w");

    printf("%s",data);

    while (fgets(data,100,file)!=NULL)
    {
        fputs(data,s);
    }
    fclose(file);
    fclose(s);
    
    return 0;
}
#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
    char role[20];
    char city[20];
    int exprience;
    char company[100];
};
void main()
{
    int n;
    printf("How many employee=");
    scanf("%d",&n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter id=");
        scanf("%d",&s[i].id);
        printf("Enter name=");
        scanf("%s",s[i].name);
        printf("Enter age=");
        scanf("%d",&s[i].age);
        printf("Enter role=");
        scanf("%s",s[i].role);
        printf("Enter city=");
        scanf("%s",s[i].city);
        printf("Enter How Many years of experience=");
        scanf("%d",&s[i].exprience);
        printf("Enter company=");
        scanf("%s",s[i].company);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nId=%d\n",s[i].id);
        printf("Name=%s\n",s[i].name);
        printf("Age=%d\n",s[i].age);
        printf("Role=%s\n",s[i].role);
        printf("City=%s\n",s[i].city);
        printf("Experience=%d\n",s[i].exprience);
        printf("Company=%s\n",s[i].company);
    }
    
    
}
#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
    char course[20];
    char city[20];
    int standard;
    char school[100];
};
void main()
{
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter your id=");
        scanf("%d", &s[i].id);
        printf("Enter your name=");
        scanf("%s", s[i].name);
        printf("Enter your age=");
        scanf("%d", &s[i].age);
        printf("Enter your course=");
        scanf("%s", s[i].course);
        printf("Enter your city=");
        scanf("%s", s[i].city);
        printf("Enter your standard=");
        scanf("%d", &s[i].standard);
        printf("Enter your school=");
        scanf("%s", s[i].school);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nId=%d\n",s[i].id);
        printf("Name=%s\n",s[i].name);
        printf("Age=%d\n",s[i].age);
        printf("Course=%s\n",s[i].course);
        printf("City=%s\n",s[i].city);
        printf("Standard=%d\n",s[i].standard);
        printf("School=%s\n\n",s[i].school);
    }
    
    
}
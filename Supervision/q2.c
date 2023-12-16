#include<stdio.h>
struct student
{
    int rollno;
    char name[100];
    int chemistry;
    int Mathematics;
    int physics;
};
int main()
{
    float percentage;
    int Total=0;
    struct student stu[5] ;
    for (int i = 1; i <= 5; i++)
    {
        printf("\n\nEnter the detail of student %d\n",i);
        printf("Roll no=>");
        scanf("%d",&stu[i].rollno);
        printf("Name=> ");
        scanf("%s",stu[i].name);
        printf("chemistry=> ");
        scanf("%d", &stu[i].chemistry);
        printf("Mathematics=> ");
        scanf("%d", &stu[i].Mathematics);
        printf("Physics=> ");
        scanf("%d", &stu[i].physics);
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("\n\n %s (%d)",stu[i].name,stu[i].rollno);
        printf("Chemistry=>%d\n ",stu[i].chemistry);
        printf("Mathematics=>%d\n",stu[i].Mathematics);
        printf("Physics=>%d\n",stu[i].physics);
        printf("Total=>%d/300\n",stu[i].chemistry+stu[i].Mathematics+stu[i].physics);
       
        Total=stu[i].chemistry+stu[i].Mathematics+stu[i].physics;
       
        percentage=(Total/300.0)*100;
        
        printf("Percent=>%.2f ",percentage);
    }
    
    
}

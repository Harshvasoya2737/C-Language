#include<stdio.h>
int main()
{
    int a;
    printf("Press 1 For English\n");
    printf("Press 2 For Hindi\n");
    printf("Press 3 For Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        printf("\nPress 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for special Recharge\n");
        printf("Enter your choice:");
        scanf("%d",&a);
        {
            switch (a)
            {
                case 1:
                printf("\nYou have succesfully done Internet Recharge");
                break;
                case 2:
                printf("\nYou have succesfully done Top-up Recharge");
                break;
                case 3:
                printf("\nYou have succesfully done Special Recharge");
                break;
                default :
                printf("Wrong Input By user");
            }
        }
        break;
         case 2:
        printf("\nInternet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("special Recharge ke liye 3 dabaiye\n");
        printf("Enter your choice:");
        scanf("%d",&a);
        {
            switch (a)
            {
                case 1:
                printf("\nAapne safaltapurvak Internet Recharge kar liya he");
                break;
                case 2:
                printf("\nAapne safaltapurvak Top-up Recharge kar liya he");
                break;
                case 3:
                printf("\nAapne safaltapurvak Special Recharge kar liya he");
                break;
                default :
                printf("Wrong Input By user");
            }
        }
        break;
         case 3:
        printf("\nInternet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 3 dabavo\n");
        printf("Enter your choice:");
        scanf("%d",&a);
        {
            switch (a)
            {
                case 1:
                printf("\nTame safaltapurvak Internet Recharge karyu che");
                break;
                case 2:
                printf("\nTame safaltapurvak Top-up Recharge karyu che");
                break;
                case 3:
                printf("\nTame safaltapurvak Special Recharge karyu che");
                break;
                default :
             printf("Wrong Input By user");
            }
        }
        break;
        default :
        printf("Wrong Input By user");

    }


    

}
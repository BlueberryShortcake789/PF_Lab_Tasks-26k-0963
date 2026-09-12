#include<stdio.h>
int main()
{
    int choice;

    printf("Restraunt Menu:\n");
    printf("1. Burger\n 2.Pizza\n 3.Biryani\n 4.Sandwich\n");
    printf("Enter your choice (1-4): ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("You have selected Burger\n");
            break;
        case 2:
            printf("You have selected Pizza\n");
            break;
        case 3:
            printf("You have selected Biryani\n");
            break;
        case 4:
            printf("You have selected Sandwich\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
    
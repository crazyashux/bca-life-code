#include <stdio.h>

int main() 
{
    int choice;

    printf("=========================================\n");
    printf("  WILL YOU BE FRIENDS WITH US? \n");
    printf("=========================================\n");
    printf("1. Yes \n");
    printf("2. No \n");
    printf("-----------------------------------------\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("\n Yay! We are friends now! \n");
    } else if (choice == 2) 
    {
        printf("\n Aww! Maybe next time...\n");
    } else 
    {
        printf("\n Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}

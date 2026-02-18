#include <stdio.h>

int main()
{
    int choice;

    printf("======= Welcome to Chocolate Shop =======\n");
    printf("Please select your preferred chocolate flavour:\n");
    printf("1. Milk Chocolate\n");
    printf("2. Dark Chocolate\n");
    printf("3. White Chocolate\n");
    printf("Enter your choice (1-3): ");

    // Check for non-numeric input
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input! Please enter a numeric value.\n");
        return 0;
    }

    switch(choice)
    {
        case 1:
            printf("\nYou selected Milk Chocolate.\n");
            printf("It has a creamy and delicious taste.\n");
            printf("Enjoy your Milk Chocolate!\n");
            break;

        case 2:
            printf("\nYou selected Dark Chocolate.\n");
            printf("It has a rich and intense flavour.\n");
            printf("Enjoy your Dark Chocolate!\n");
            break;

        case 3:
            printf("\nYou selected White Chocolate.\n");
            printf("It has a sweet and smooth texture.\n");
            printf("Enjoy your White Chocolate!\n");
            break;

        default:
            printf("\nInvalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}

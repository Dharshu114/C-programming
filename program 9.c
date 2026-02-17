#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    
    if (scanf("%d", &age) != 1)
    {
        printf("Invalid input! Please enter a numeric value.\n");
        return 0;
    }

    if (age < 0)
    {
        printf("Invalid age! Age cannot be negative.\n");
    }
    else if (age <= 5)
    {
        printf("Recommended Food: Mashed vegetables or soft fruits.\n");
    }
    else if (age >= 6 && age <= 12)
    {
        printf("Recommended Food: Milk, eggs, fruits, and rice.\n");
    }
    else if (age >= 13 && age <= 18)
    {
        printf("Recommended Food: Burgers or pasta.\n");
    }
    else if (age >= 19 && age <= 50)
    {
        printf("Recommended Food: Balanced diet with vegetables, chapati, rice, and protein foods.\n");
    }
    else if (age >= 51)
    {
        printf("Recommended Food: Soup or grilled fish.\n");
    }

    return 0;
}

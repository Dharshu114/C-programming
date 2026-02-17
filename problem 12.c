#include <stdio.h>

int main()
{
    int age;
    float price;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Invalid age!\n");
    }
    else if (age <= 12)
    {
        price = 100;
        printf("Category: Children\n");
        printf("Ticket Price: Rs. %.2f\n", price);
    }
    else if (age <= 19)
    {
        price = 150;
        printf("Category: Teenager\n");
        printf("Ticket Price: Rs. %.2f\n", price);
    }
    else if (age <= 60)
    {
        price = 200;
        printf("Category: Adult\n");
        printf("Ticket Price: Rs. %.2f\n", price);
    }
    else
    {
        price = 120;
        printf("Category: Senior\n");
        printf("Ticket Price: Rs. %.2f\n", price);
    }

    return 0;
}

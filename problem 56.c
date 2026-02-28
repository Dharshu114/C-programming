#include <stdio.h>

int main()
{
    int age, tickets;
    float price, total, discount = 0;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    if(age < 12)
        price = 100;
    else if(age < 60)
        price = 200;
    else
        price = 150;

    total = price * tickets;

    if(tickets > 8)
    {
        discount = total * 0.11;
        total = total - discount;
    }

    printf("Total Cost = %.2f\n", total);

    return 0;
}

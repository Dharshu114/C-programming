#include <stdio.h>

int main()
{
    float price, total, finalAmount;
    int quantity;
    char middleman;

    printf("Enter selling price per unit: ");
    scanf("%f", &price);

    printf("Enter quantity sold: ");
    scanf("%d", &quantity);

    printf("Enter middleman (A/B/C): ");
    scanf(" %c", &middleman);

    total = price * quantity;

    if(middleman == 'A' || middleman == 'a')
        finalAmount = total - (total * 0.05);
    else if(middleman == 'B' || middleman == 'b')
        finalAmount = total - (total * 0.10);
    else if(middleman == 'C' || middleman == 'c')
        finalAmount = total - (total * 0.15);
    else
    {
        printf("Invalid middleman\n");
        return 0;
    }

    printf("Original Amount = %.2f\n", total);
    printf("Final Revenue after deduction = %.2f\n", finalAmount);

    return 0;
}

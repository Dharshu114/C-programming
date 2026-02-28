#include <stdio.h>

int main() {
    int quantity;
    float price, total, discount = 0, finalAmount;

    printf("Enter quantity of items: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price);

    total = quantity * price;

    if (total > 1000)
        discount = total * 0.10;
    else if (total > 500)
        discount = total * 0.05;

    finalAmount = total - discount;

    printf("Total Cost: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}



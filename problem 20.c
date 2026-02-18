#include <stdio.h>

int main()
{
    float investment, purchasePrice, currentPrice;
    float shares, currentValue, profitLoss;

    printf("Enter initial investment amount: ");
    scanf("%f", &investment);

    printf("Enter purchase price per share: ");
    scanf("%f", &purchasePrice);

    printf("Enter current price per share: ");
    scanf("%f", &currentPrice);

    // Error handling
    if (investment <= 0 || purchasePrice <= 0 || currentPrice <= 0)
    {
        printf("Invalid input! Values must be positive.\n");
    }
    else
    {
        // Calculate number of shares bought
        shares = investment / purchasePrice;

        // Calculate current total value
        currentValue = shares * currentPrice;

        // Calculate profit or loss
        profitLoss = currentValue - investment;

        if (profitLoss > 0)
        {
            printf("You made a PROFIT of %.2f\n", profitLoss);
        }
        else if (profitLoss < 0)
        {
            printf("You made a LOSS of %.2f\n", -profitLoss);
        }
        else
        {
            printf("No profit, no loss.\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int num1, num2;
    int product, result;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Calculate product
    product = num1 * num2;

    printf("Product = %d\n", product);

    // Check if product is even or odd
    if (product % 2 == 0)
    {
        result = product / 2;
        printf("Product is even.\n");
        printf("Result after dividing by 2 = %d\n", result);26.c
    }
    else
    {
        result = product / 3;
        printf("Product is odd.\n");
        printf("Result after dividing by 3 = %d\n", result);
    }

    return 0;
}

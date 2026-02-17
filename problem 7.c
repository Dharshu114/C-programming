#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Using Bitwise XOR operator
    if ((num1 ^ num2) == 0)
    {
        printf("Both numbers are Equal\n");
    }
    else
    {
        printf("Both numbers are Not Equal\n");
    }

    return 0;
}

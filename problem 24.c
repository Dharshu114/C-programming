#include <stdio.h>

int main()
{
    int number;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Invalid input! Please enter a positive integer.\n");
    }
    else
    {
        printf("Hexadecimal equivalent: %X\n", number);
        printf("Octal equivalent: %o\n", number);
    }

    return 0;
}

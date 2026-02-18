#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    int root;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Invalid input! Please enter a positive integer.\n");
    }
    else
    {
        root = sqrt(number);

        if (root * root == number)
        {
            printf("%d is a Perfect Square.\n", number);
        }
        else
        {
            printf("%d is NOT a Perfect Square.\n", number);
        }
    }

    return 0;
}

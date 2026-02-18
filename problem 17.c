#include <stdio.h>

int main()
{
    int symptoms;

    printf("Enter the number of symptoms experienced: ");
    scanf("%d", &symptoms);

    // Error handling for invalid input
    if (symptoms < 0)
    {
        printf("Invalid input! Number of symptoms cannot be negative.\n");
    }
    else if (symptoms >= 5)
    {
        printf("Condition: Critical\n");
        printf("Priority Level: HIGH (Immediate attention required)\n");
    }
    else if (symptoms >= 3)
    {
        printf("Condition: Moderate\n");
        printf("Priority Level: MEDIUM (Attention required soon)\n");
    }
    else
    {
        printf("Condition: Stable\n");
        printf("Priority Level: LOW (Can wait for a while)\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter your body temperature in Celsius: ");
    scanf("%f", &temperature);

    // Check for invalid input
    if (temperature <= 0)
    {
        printf("Invalid temperature entered!\n");
    }
    else
    {
        if (temperature >= 37.0)
        {
            printf("You have a fever.\n");
        }
        else
        {
            printf("You do not have a fever.\n");
        }
    }

    return 0;
}

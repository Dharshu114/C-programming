#include <stdio.h>
#define PI 3.14

int main()
{
    int choice;
    float r, h, baseArea, volume;

    printf("1. Cone\n2. Pyramid\n3. Prism\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)   // Cone
    {
        printf("Enter radius and height: ");
        scanf("%f %f", &r, &h);

        volume = (1.0/3) * PI * r * r * h;
    }
    else if(choice == 2)   // Pyramid
    {
        printf("Enter base area and height: ");
        scanf("%f %f", &baseArea, &h);

        volume = (1.0/3) * baseArea * h;
    }
    else if(choice == 3)   // Prism
    {
        printf("Enter base area and height: ");
        scanf("%f %f", &baseArea, &h);

        volume = baseArea * h;
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Volume = %.2f\n", volume);

    return 0;
}

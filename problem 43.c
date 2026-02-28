#include <stdio.h>
#define PI 3.14159

int main()
{
    int choice;
    float r, h, a;
    float surfaceArea, volume;

    printf("Choose Shape:\n");
    printf("1. Sphere\n");
    printf("2. Cube\n");
    printf("3. Cylinder\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1)   // Sphere
    {
        printf("Enter radius: ");
        scanf("%f", &r);

        surfaceArea = 4 * PI * r * r;
        volume = (4.0/3) * PI * r * r * r;

        printf("Surface Area = %.2f\n", surfaceArea);
        printf("Volume = %.2f\n", volume);
    }
    else if(choice == 2)   // Cube
    {
        printf("Enter side length: ");
        scanf("%f", &a);

        surfaceArea = 6 * a * a;
        volume = a * a * a;

        printf("Surface Area = %.2f\n", surfaceArea);
        printf("Volume = %.2f\n", volume);
    }
    else if(choice == 3)   // Cylinder
    {
        printf("Enter radius: ");
        scanf("%f", &r);

        printf("Enter height: ");
        scanf("%f", &h);

        surfaceArea = 2 * PI * r * (r + h);
        volume = PI * r * r * h;

        printf("Surface Area = %.2f\n", surfaceArea);
        printf("Volume = %.2f\n", volume);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}

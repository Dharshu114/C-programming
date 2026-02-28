#include <stdio.h>
#define PI 3.14

int main()
{
    int choice;
    float r, h, a, area, volume;

    printf("1.Sphere  2.Cube  3.Cylinder\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter radius: ");
        scanf("%f", &r);

        area = 4 * PI * r * r;
        volume = (4.0/3) * PI * r * r * r;
    }
    else if(choice == 2)
    {
        printf("Enter side: ");
        scanf("%f", &a);

        area = 6 * a * a;
        volume = a * a * a;
    }
    else if(choice == 3)
    {
        printf("Enter radius and height: ");
        scanf("%f %f", &r, &h);

        area = 2 * PI * r * (r + h);
        volume = PI * r * r * h;
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Surface Area = %.2f\n", area);
    printf("Volume = %.2f\n", volume);

    return 0;
}

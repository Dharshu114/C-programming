#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x coordinate: ");
    scanf("%d", &x);

    printf("Enter y coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("The point lies in First Quadrant.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point lies in Second Quadrant.\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point lies in Third Quadrant.\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point lies in Fourth Quadrant.\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("The point lies at the Origin.\n");
    }
    else if (x == 0)
    {
        printf("The point lies on the Y-axis.\n");
    }
    else if (y == 0)
    {
        printf("The point lies on the X-axis.\n");
    }

    return 0;
}

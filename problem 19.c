#include <stdio.h>

int main()
{
    int angle;

    printf("Enter an angle (0, 90, 180, 270): ");
    scanf("%d", &angle);

    if (angle == 0 || angle == 360)
    {
        printf("Direction: East\n");
    }
    else if (angle == 90)
    {
        printf("Direction: North\n");
    }
    else if (angle == 180)
    {
        printf("Direction: West\n");
    }
    else if (angle == 270)
    {
        printf("Direction: South\n");
    }
    else
    {
        printf("Invalid angle! Please enter 0, 90, 180, or 270.\n");
    }

    return 0;
}

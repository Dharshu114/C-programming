#include <stdio.h>

int main()
{
    float x, y, z;

    printf("Enter x coordinate: ");
    scanf("%f", &x);

    printf("Enter y coordinate: ");
    scanf("%f", &y);

    printf("Enter z coordinate: ");
    scanf("%f", &z);

    if(x == 0 && y == 0 && z == 0)
        printf("Origin");
    else if(x == 0 && y == 0)
        printf("Z-axis");
    else if(x == 0 && z == 0)
        printf("Y-axis");
    else if(y == 0 && z == 0)
        printf("X-axis");
    else if(x == 0)
        printf("YZ-plane");
    else if(y == 0)
        printf("XZ-plane");
    else if(z == 0)
        printf("XY-plane");
    else
        printf("Point is in space");

    return 0;
}

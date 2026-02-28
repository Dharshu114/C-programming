#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, slope;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    if (x2 - x1 == 0)
    {
        printf("Slope is undefined");
    }
    else
    {
        slope = (y2 - y1) / (x2 - x1);
        printf("Slope: %.2f", slope);
    }

    return 0;
}

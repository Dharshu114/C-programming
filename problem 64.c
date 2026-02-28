#include <stdio.h>
#include <math.h>

int main()
{
    float base, height, ladder;

    scanf("%f %f %f", &base, &height, &ladder);

    // Check Pythagorean theorem
    if (fabs((base * base + height * height) - (ladder * ladder)) < 0.0001)
    {
        printf("Right Triangle");
    }
    else
    {
        printf("Not a Right Triangle");
    }

    return 0;
}

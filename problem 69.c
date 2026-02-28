#include <stdio.h>

int main()
{
    float distance;

    scanf("%f", &distance);

    if(distance > 1000)
    {
        // Input is in metres → convert to kilometres
        printf("%.2f km", distance / 1000);
    }
    else
    {
        // Input is in centimetres → convert to metres
        printf("%.2f m", distance / 100);
    }

    return 0;
}

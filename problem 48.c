#include <stdio.h>
#include <math.h>

int main()
{
    int hour, minute;
    double hour_angle, minute_angle, angle;

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    printf("Enter minute (0-59): ");
    scanf("%d", &minute);

    // Convert 24-hour format to 12-hour format
    hour = hour % 12;

    // Calculate angles
    hour_angle = (hour * 30) + (minute * 0.5);
    minute_angle = minute * 6;

    // Find difference
    angle = hour_angle - minute_angle;

    // Make angle positive
    if(angle < 0)
        angle = -angle;

    // Adjust within 0 to 360
    if(angle > 360)
        angle = fmod(angle, 360);

    printf("Angle between hands: %.2lf degrees", angle);

    return 0;
}

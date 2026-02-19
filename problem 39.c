#include <stdio.h>

int main() {
    float speedLimit, vehicleSpeed;

    printf("Enter speed limit: ");
    scanf("%f", &speedLimit);

    printf("Enter vehicle speed: ");
    scanf("%f", &vehicleSpeed);

    if (vehicleSpeed > speedLimit)
        printf("Warning! The vehicle exceeds the speed limit.\n");
    else
        printf("The vehicle is within the speed limit.\n");

    return 0;
}
